
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int task_abort; int host_reset; int dev_reset; int suspend_err; int resume_err; int link_startup_err; int fatal_err; int auto_hibern8_err; int dme_err; int tl_err; int nl_err; int dl_err; int pa_err; int hibern8_exit_cnt; int last_hibern8_exit_tstamp; } ;
struct ufs_hba {TYPE_2__* vops; TYPE_1__ ufs_stats; int dev; scalar_t__ outstanding_tasks; scalar_t__ outstanding_reqs; int capabilities; int ufs_version; } ;
struct TYPE_4__ {int (* dbg_register_dump ) (struct ufs_hba*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*,int ,int ,char*) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*,int *,char*) ;

__attribute__((used)) static void FUNC_6(struct ufs_hba *VAR_1)
{
 FUNC_3(VAR_1, 0, VAR_0, "host_regs: ");
 FUNC_0(VAR_1->dev, "hba->ufs_version = 0x%x, hba->capabilities = 0x%x\n",
  VAR_1->ufs_version, VAR_1->capabilities);
 FUNC_0(VAR_1->dev,
  "hba->outstanding_reqs = 0x%x, hba->outstanding_tasks = 0x%x\n",
  (u32)VAR_1->outstanding_reqs, (u32)VAR_1->outstanding_tasks);
 FUNC_0(VAR_1->dev,
  "last_hibern8_exit_tstamp at %lld us, hibern8_exit_cnt = %d\n",
  FUNC_1(VAR_1->ufs_stats.last_hibern8_exit_tstamp),
  VAR_1->ufs_stats.hibern8_exit_cnt);

 FUNC_5(VAR_1, &VAR_1->ufs_stats.pa_err, "pa_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.dl_err, "dl_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.nl_err, "nl_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.tl_err, "tl_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.dme_err, "dme_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.auto_hibern8_err,
         "auto_hibern8_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.fatal_err, "fatal_err");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.link_startup_err,
         "link_startup_fail");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.resume_err, "resume_fail");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.suspend_err,
         "suspend_fail");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.dev_reset, "dev_reset");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.host_reset, "host_reset");
 FUNC_5(VAR_1, &VAR_1->ufs_stats.task_abort, "task_abort");

 FUNC_4(VAR_1);

 if (VAR_1->vops && VAR_1->vops->dbg_register_dump)
  VAR_1->vops->dbg_register_dump(VAR_1);
}
