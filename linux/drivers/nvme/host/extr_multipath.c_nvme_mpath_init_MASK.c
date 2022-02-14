
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_id_ctrl {int anagrpmax; int nanagrpid; int anatt; int anacap; } ;
struct nvme_ctrl {int nanagrpid; int ana_log_size; int max_namespaces; int max_hw_sectors; int * ana_log_buf; int ana_work; int device; int anatt_timer; int ana_lock; void* anagrpmax; int anatt; int anacap; TYPE_1__* subsys; } ;
struct nvme_ana_rsp_hdr {int dummy; } ;
struct nvme_ana_group_desc {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {int cmic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct nvme_ctrl*) ;
 int FUNC_7 (int *,int ,int ) ;

int FUNC_8(struct nvme_ctrl *VAR_6, struct nvme_id_ctrl *VAR_7)
{
 int VAR_8;


 if (!VAR_3 || !VAR_6->subsys || !(VAR_6->subsys->cmic & (1 << 3)))
  return 0;

 VAR_6->anacap = VAR_7->anacap;
 VAR_6->anatt = VAR_7->anatt;
 VAR_6->nanagrpid = FUNC_4(VAR_7->nanagrpid);
 VAR_6->anagrpmax = FUNC_4(VAR_7->anagrpmax);

 FUNC_5(&VAR_6->ana_lock);
 FUNC_7(&VAR_6->anatt_timer, VAR_5, 0);
 VAR_6->ana_log_size = sizeof(struct nvme_ana_rsp_hdr) +
  VAR_6->nanagrpid * sizeof(struct nvme_ana_group_desc);
 VAR_6->ana_log_size += VAR_6->max_namespaces * sizeof(__le32);

 if (VAR_6->ana_log_size > VAR_6->max_hw_sectors << VAR_2) {
  FUNC_1(VAR_6->device,
   "ANA log page size (%zd) larger than MDTS (%d).\n",
   VAR_6->ana_log_size,
   VAR_6->max_hw_sectors << VAR_2);
  FUNC_1(VAR_6->device, "disabling ANA support.\n");
  return 0;
 }

 FUNC_0(&VAR_6->ana_work, VAR_4);
 VAR_6->ana_log_buf = FUNC_3(VAR_6->ana_log_size, VAR_1);
 if (!VAR_6->ana_log_buf) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto out_free_ana_log_buf;
 return 0;
out_free_ana_log_buf:
 FUNC_2(VAR_6->ana_log_buf);
 VAR_6->ana_log_buf = ((void*)0);
out:
 return VAR_8;
}
