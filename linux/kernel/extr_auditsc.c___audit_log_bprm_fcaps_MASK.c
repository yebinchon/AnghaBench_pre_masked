
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct linux_binprm {TYPE_3__* file; } ;
struct cred {int cap_ambient; int cap_effective; int cap_inheritable; int cap_permitted; } ;
struct cpu_vfs_cap_data {int magic_etc; int rootid; int inheritable; int permitted; } ;
struct audit_context {void* aux; } ;
struct TYPE_12__ {int ambient; int effective; int inheritable; int permitted; } ;
struct TYPE_11__ {int ambient; int effective; int inheritable; int permitted; } ;
struct TYPE_10__ {int fE; int rootid; int inheritable; int permitted; } ;
struct TYPE_7__ {void* next; int type; } ;
struct audit_aux_data_bprm_fcaps {int fcap_ver; TYPE_6__ new_pcap; TYPE_5__ old_pcap; TYPE_4__ fcap; TYPE_1__ d; } ;
struct TYPE_8__ {int dentry; } ;
struct TYPE_9__ {TYPE_2__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (int ,struct cpu_vfs_cap_data*) ;
 struct audit_aux_data_bprm_fcaps* FUNC_2 (int,int ) ;

int FUNC_3(struct linux_binprm *VAR_6,
      const struct cred *VAR_7, const struct cred *VAR_8)
{
 struct audit_aux_data_bprm_fcaps *VAR_9;
 struct audit_context *VAR_10 = FUNC_0();
 struct cpu_vfs_cap_data VAR_11;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->d.type = VAR_0;
 VAR_9->d.next = VAR_10->aux;
 VAR_10->aux = (void *)VAR_9;

 FUNC_1(VAR_6->file->f_path.dentry, &VAR_11);

 VAR_9->fcap.permitted = VAR_11.permitted;
 VAR_9->fcap.inheritable = VAR_11.inheritable;
 VAR_9->fcap.fE = !!(VAR_11.magic_etc & VAR_3);
 VAR_9->fcap.rootid = VAR_11.rootid;
 VAR_9->fcap_ver = (VAR_11.magic_etc & VAR_4) >> VAR_5;

 VAR_9->old_pcap.permitted = VAR_8->cap_permitted;
 VAR_9->old_pcap.inheritable = VAR_8->cap_inheritable;
 VAR_9->old_pcap.effective = VAR_8->cap_effective;
 VAR_9->old_pcap.ambient = VAR_8->cap_ambient;

 VAR_9->new_pcap.permitted = VAR_7->cap_permitted;
 VAR_9->new_pcap.inheritable = VAR_7->cap_inheritable;
 VAR_9->new_pcap.effective = VAR_7->cap_effective;
 VAR_9->new_pcap.ambient = VAR_7->cap_ambient;
 return 0;
}
