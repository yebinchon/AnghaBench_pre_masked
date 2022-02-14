
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct mspro_block_data {scalar_t__ data_dir; int transfer_cmd; TYPE_1__* block_req; int (* setup_transfer ) (struct memstick_dev*,int,unsigned int) ;int seg_count; int req_sg; scalar_t__ current_seg; scalar_t__ current_page; } ;
struct memstick_dev {int host; } ;
struct TYPE_8__ {int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned int) ;
 struct mspro_block_data* FUNC_6 (struct memstick_dev*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct memstick_dev*,int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct memstick_dev *VAR_5)
{
 struct mspro_block_data *VAR_6 = FUNC_6(VAR_5);
 u64 VAR_7;
 unsigned int VAR_8;

 while (1) {
  VAR_6->current_page = 0;
  VAR_6->current_seg = 0;
  VAR_6->seg_count = FUNC_3(VAR_6->block_req->q,
            VAR_6->block_req,
            VAR_6->req_sg);

  if (!VAR_6->seg_count) {
   unsigned int VAR_9 = FUNC_2(VAR_6->block_req);
   bool VAR_10;

   VAR_10 = FUNC_5(VAR_6->block_req,
       VAR_0,
       VAR_9);
   if (VAR_10)
    continue;
   FUNC_0(VAR_6->block_req,
      VAR_0);
   VAR_6->block_req = ((void*)0);
   return -VAR_1;
  }

  VAR_7 = FUNC_4(VAR_6->block_req);
  VAR_7 <<= 9;
  VAR_8 = FUNC_1(VAR_6->block_req);

  VAR_6->setup_transfer(VAR_5, VAR_7, VAR_8);

  VAR_6->data_dir = FUNC_8(VAR_6->block_req);
  VAR_6->transfer_cmd = VAR_6->data_dir == VAR_4
        ? VAR_2
        : VAR_3;

  FUNC_7(VAR_5->host);
  return 0;
 }
}
