
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mspro_block_data {scalar_t__ data_dir; int current_seg; unsigned int page_size; int current_page; int q_lock; int * block_req; TYPE_2__* req_sg; } ;
struct TYPE_3__ {scalar_t__ tpc; } ;
struct memstick_dev {int mrq_complete; int next_request; int dev; TYPE_1__ current_mrq; } ;
struct TYPE_4__ {unsigned int length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,unsigned int,int) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 struct mspro_block_data* FUNC_7 (struct memstick_dev*) ;
 int FUNC_8 (struct memstick_dev*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct memstick_dev *VAR_4, int VAR_5)
{
 struct mspro_block_data *VAR_6 = FUNC_7(VAR_4);
 int VAR_7;
 bool VAR_8;
 unsigned int VAR_9 = 0;
 unsigned long VAR_10;

 FUNC_9(&VAR_6->q_lock, VAR_10);
 FUNC_5(&VAR_4->dev, "complete %d, %d\n", VAR_6->block_req ? 1 : 0,
  VAR_5);

 if (VAR_6->block_req) {

  if (VAR_5 == -VAR_0)
   VAR_5 = 0;

  if (VAR_5 || (VAR_4->current_mrq.tpc == VAR_1)) {
   if (VAR_6->data_dir == VAR_2) {
    for (VAR_7 = 0; VAR_7 < VAR_6->current_seg; VAR_7++) {
     VAR_9 += VAR_6->req_sg[VAR_7].length
       / VAR_6->page_size;

     if (VAR_6->current_page)
      VAR_9 += VAR_6->current_page - 1;

     VAR_9 *= VAR_6->page_size;
    }
   }
  } else
   VAR_9 = FUNC_1(VAR_6->block_req);

  FUNC_5(&VAR_4->dev, "transferred %x (%d)\n", VAR_9, VAR_5);

  if (VAR_5 && !VAR_9)
   VAR_9 = FUNC_2(VAR_6->block_req);

  VAR_8 = FUNC_3(VAR_6->block_req,
    FUNC_6(VAR_5), VAR_9);
  if (VAR_8) {
   VAR_5 = FUNC_8(VAR_4);
   if (!VAR_5)
    goto out;
  } else {
   FUNC_0(VAR_6->block_req,
      FUNC_6(VAR_5));
   VAR_6->block_req = ((void*)0);
  }
 } else {
  if (!VAR_5)
   VAR_5 = -VAR_0;
 }

 VAR_4->next_request = VAR_3;
 FUNC_4(&VAR_4->mrq_complete);
out:
 FUNC_10(&VAR_6->q_lock, VAR_10);
 return VAR_5;
}
