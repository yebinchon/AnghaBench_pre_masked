
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int member_0; } ;
struct mspro_block_data {unsigned char transfer_cmd; int caps; int current_page; size_t current_seg; int page_size; size_t seg_count; int data_dir; TYPE_1__* req_sg; } ;
struct memstick_request {int tpc; int need_card_int; unsigned char int_reg; unsigned char* data; scalar_t__ error; } ;
struct memstick_dev {int next_request; } ;
struct TYPE_2__ {int length; size_t offset; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;





 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mspro_block_data* FUNC_1 (struct memstick_dev*) ;
 int FUNC_2 (struct memstick_request*,int const,unsigned char*,int) ;
 int FUNC_3 (struct memstick_request*,int,struct scatterlist*) ;
 int FUNC_4 (struct memstick_dev*,scalar_t__) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct scatterlist*,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_9(struct memstick_dev *VAR_10,
           struct memstick_request **VAR_11)
{
 struct mspro_block_data *VAR_12 = FUNC_1(VAR_10);
 unsigned char VAR_13 = 0;
 struct scatterlist VAR_14 = { 0 };
 size_t VAR_15;

 if ((*VAR_11)->error)
  return FUNC_4(VAR_10, (*VAR_11)->error);

 switch ((*VAR_11)->tpc) {
 case 128:
  FUNC_2(*VAR_11, 130, &VAR_12->transfer_cmd, 1);
  (*VAR_11)->need_card_int = 1;
  return 0;
 case 130:
  VAR_13 = (*VAR_11)->int_reg;
  FUNC_2(*VAR_11, 132, ((void*)0), 1);
  if (VAR_12->caps & VAR_0)
   goto has_int_reg;
  return 0;
 case 132:
  VAR_13 = (*VAR_11)->data[0];
has_int_reg:
  if (VAR_13 & (VAR_3 | VAR_4)) {
   VAR_13 = VAR_5;
   FUNC_2(*VAR_11, 130, &VAR_13, 1);
   VAR_10->next_request = VAR_8;
   return 0;
  }

  if (VAR_12->current_page
      == (VAR_12->req_sg[VAR_12->current_seg].length
   / VAR_12->page_size)) {
   VAR_12->current_page = 0;
   VAR_12->current_seg++;

   if (VAR_12->current_seg == VAR_12->seg_count) {
    if (VAR_13 & VAR_2) {
     return FUNC_4(VAR_10,
         0);
    } else {
     VAR_10->next_request
      = VAR_9;
     FUNC_2(*VAR_11, 132,
         ((void*)0), 1);
     return 0;
    }
   }
  }

  if (!(VAR_13 & VAR_1)) {
   FUNC_2(*VAR_11, 132, ((void*)0), 1);
   return 0;
  }

  VAR_15 = VAR_12->req_sg[VAR_12->current_seg].offset;
  VAR_15 += VAR_12->current_page * VAR_12->page_size;

  FUNC_8(&VAR_14,
       FUNC_5(FUNC_7(&(VAR_12->req_sg[VAR_12->current_seg])),
         VAR_15 >> VAR_6),
       VAR_12->page_size, FUNC_6(VAR_15));

  FUNC_3(*VAR_11, VAR_12->data_dir == VAR_7
        ? 131
        : 129,
         &VAR_14);
  (*VAR_11)->need_card_int = 1;
  return 0;
 case 131:
 case 129:
  VAR_12->current_page++;
  if (VAR_12->caps & VAR_0) {
   VAR_13 = (*VAR_11)->int_reg;
   goto has_int_reg;
  } else {
   FUNC_2(*VAR_11, 132, ((void*)0), 1);
   return 0;
  }

 default:
  FUNC_0();
 }
}
