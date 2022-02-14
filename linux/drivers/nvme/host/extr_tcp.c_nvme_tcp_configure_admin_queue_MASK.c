
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {void* admin_tagset; void* fabrics_q; void* admin_q; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct nvme_ctrl*) ;
 int FUNC_7 (struct nvme_ctrl*) ;
 int FUNC_8 (struct nvme_ctrl*) ;
 void* FUNC_9 (struct nvme_ctrl*,int) ;
 int FUNC_10 (struct nvme_ctrl*) ;
 int FUNC_11 (struct nvme_ctrl*,int ) ;
 int FUNC_12 (struct nvme_ctrl*,int ) ;

__attribute__((used)) static int FUNC_13(struct nvme_ctrl *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_8(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {
  VAR_0->admin_tagset = FUNC_9(VAR_0, 1);
  if (FUNC_0(VAR_0->admin_tagset)) {
   VAR_2 = FUNC_1(VAR_0->admin_tagset);
   goto out_free_queue;
  }

  VAR_0->fabrics_q = FUNC_4(VAR_0->admin_tagset);
  if (FUNC_0(VAR_0->fabrics_q)) {
   VAR_2 = FUNC_1(VAR_0->fabrics_q);
   goto out_free_tagset;
  }

  VAR_0->admin_q = FUNC_4(VAR_0->admin_tagset);
  if (FUNC_0(VAR_0->admin_q)) {
   VAR_2 = FUNC_1(VAR_0->admin_q);
   goto out_cleanup_fabrics_q;
  }
 }

 VAR_2 = FUNC_11(VAR_0, 0);
 if (VAR_2)
  goto out_cleanup_queue;

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  goto out_stop_queue;

 FUNC_5(VAR_0->admin_q);

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  goto out_stop_queue;

 return 0;

out_stop_queue:
 FUNC_12(VAR_0, 0);
out_cleanup_queue:
 if (VAR_1)
  FUNC_2(VAR_0->admin_q);
out_cleanup_fabrics_q:
 if (VAR_1)
  FUNC_2(VAR_0->fabrics_q);
out_free_tagset:
 if (VAR_1)
  FUNC_3(VAR_0->admin_tagset);
out_free_queue:
 FUNC_10(VAR_0);
 return VAR_2;
}
