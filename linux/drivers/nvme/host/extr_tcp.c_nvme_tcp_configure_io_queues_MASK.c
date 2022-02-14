
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int tagset; int connect_q; scalar_t__ queue_count; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct nvme_ctrl*) ;
 int FUNC_7 (struct nvme_ctrl*,int) ;
 int FUNC_8 (struct nvme_ctrl*) ;
 int FUNC_9 (struct nvme_ctrl*) ;

__attribute__((used)) static int FUNC_10(struct nvme_ctrl *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {
  VAR_0->tagset = FUNC_7(VAR_0, 0);
  if (FUNC_0(VAR_0->tagset)) {
   VAR_2 = FUNC_1(VAR_0->tagset);
   goto out_free_io_queues;
  }

  VAR_0->connect_q = FUNC_4(VAR_0->tagset);
  if (FUNC_0(VAR_0->connect_q)) {
   VAR_2 = FUNC_1(VAR_0->connect_q);
   goto out_free_tag_set;
  }
 } else {
  FUNC_5(VAR_0->tagset,
   VAR_0->queue_count - 1);
 }

 VAR_2 = FUNC_9(VAR_0);
 if (VAR_2)
  goto out_cleanup_connect_q;

 return 0;

out_cleanup_connect_q:
 if (VAR_1)
  FUNC_2(VAR_0->connect_q);
out_free_tag_set:
 if (VAR_1)
  FUNC_3(VAR_0->tagset);
out_free_io_queues:
 FUNC_8(VAR_0);
 return VAR_2;
}
