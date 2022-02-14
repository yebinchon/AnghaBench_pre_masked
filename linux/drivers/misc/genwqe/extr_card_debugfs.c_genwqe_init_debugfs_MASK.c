
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {struct dentry* debugfs_root; int use_platform_recovery; int skip_recovery; int * vf_jobtimeout_msec; int kill_timeout; int ddcb_software_timeout; int err_inject; int debugfs_genwqe; int card_idx; } ;
struct dentry {int dummy; } ;


 char* VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dentry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct dentry*,struct genwqe_dev*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (struct genwqe_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*,char*,...) ;

void FUNC_6(struct genwqe_dev *VAR_15)
{
 struct dentry *VAR_16;
 char VAR_17[64];
 char VAR_18[64];
 unsigned int VAR_19;

 FUNC_5(VAR_17, "%s%d_card", VAR_0, VAR_15->card_idx);

 VAR_16 = FUNC_0(VAR_17, VAR_15->debugfs_genwqe);


 FUNC_1("ddcb_info", VAR_2, VAR_16, VAR_15, &VAR_7);
 FUNC_1("info", VAR_2, VAR_16, VAR_15, &VAR_8);
 FUNC_3("err_inject", 0666, VAR_16, &VAR_15->err_inject);
 FUNC_2("ddcb_software_timeout", 0666, VAR_16,
      &VAR_15->ddcb_software_timeout);
 FUNC_2("kill_timeout", 0666, VAR_16, &VAR_15->kill_timeout);


 if (!FUNC_4(VAR_15)) {
  VAR_15->debugfs_root = VAR_16;
  return;
 }

 FUNC_1("curr_regs", VAR_2, VAR_16, VAR_15, &VAR_6);
 FUNC_1("curr_dbg_uid0", VAR_2, VAR_16, VAR_15,
       &VAR_3);
 FUNC_1("curr_dbg_uid1", VAR_2, VAR_16, VAR_15,
       &VAR_4);
 FUNC_1("curr_dbg_uid2", VAR_2, VAR_16, VAR_15,
       &VAR_5);
 FUNC_1("prev_regs", VAR_2, VAR_16, VAR_15, &VAR_13);
 FUNC_1("prev_dbg_uid0", VAR_2, VAR_16, VAR_15,
       &VAR_10);
 FUNC_1("prev_dbg_uid1", VAR_2, VAR_16, VAR_15,
       &VAR_11);
 FUNC_1("prev_dbg_uid2", VAR_2, VAR_16, VAR_15,
       &VAR_12);

 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
  FUNC_5(VAR_18, "vf%u_jobtimeout_msec", VAR_19);
  FUNC_2(VAR_18, 0666, VAR_16,
       &VAR_15->vf_jobtimeout_msec[VAR_19]);
 }

 FUNC_1("jobtimer", VAR_2, VAR_16, VAR_15, &VAR_9);
 FUNC_1("queue_working_time", VAR_2, VAR_16, VAR_15,
       &VAR_14);
 FUNC_2("skip_recovery", 0666, VAR_16, &VAR_15->skip_recovery);
 FUNC_2("use_platform_recovery", 0666, VAR_16,
      &VAR_15->use_platform_recovery);

 VAR_15->debugfs_root = VAR_16;
}
