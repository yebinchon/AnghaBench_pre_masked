
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct nvme_ctrl* end_io_data; } ;
struct nvme_ctrl {int comp_seen; scalar_t__ state; int kato; int ka_work; int lock; int device; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_3, blk_status_t VAR_4)
{
 struct nvme_ctrl *VAR_5 = VAR_3->end_io_data;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 FUNC_0(VAR_3);

 if (VAR_4) {
  FUNC_1(VAR_5->device,
   "failed nvme_keep_alive_end_io error=%d\n",
    VAR_4);
  return;
 }

 VAR_5->comp_seen = 0;
 FUNC_3(&VAR_5->lock, VAR_6);
 if (VAR_5->state == VAR_2 ||
     VAR_5->state == VAR_1)
  VAR_7 = 1;
 FUNC_4(&VAR_5->lock, VAR_6);
 if (VAR_7)
  FUNC_2(&VAR_5->ka_work, VAR_5->kato * VAR_0);
}
