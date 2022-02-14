
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct dentry* mnt_root; } ;
struct qstr {char* name; void* len; } ;
struct dentry {int dummy; } ;
typedef int pid_t ;
typedef int buf ;


 struct dentry* FUNC_0 (struct dentry*,struct qstr*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 void* FUNC_3 (char*,int,char*,int) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct vfsmount *VAR_0, pid_t VAR_1, pid_t VAR_2)
{
 struct dentry *VAR_3, *VAR_4, *VAR_5;
 char VAR_6[10 + 1];
 struct qstr VAR_7;

 VAR_7.name = VAR_6;
 VAR_7.len = FUNC_3(VAR_6, sizeof(VAR_6), "%u", VAR_1);

 VAR_3 = FUNC_0(VAR_0->mnt_root, &VAR_7);
 if (VAR_3) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }

 if (VAR_1 == VAR_2)
  return;

 VAR_7.name = VAR_6;
 VAR_7.len = FUNC_3(VAR_6, sizeof(VAR_6), "%u", VAR_2);
 VAR_4 = FUNC_0(VAR_0->mnt_root, &VAR_7);
 if (!VAR_4)
  goto out;

 VAR_7.name = "task";
 VAR_7.len = FUNC_4(VAR_7.name);
 VAR_5 = FUNC_0(VAR_4, &VAR_7);
 if (!VAR_5)
  goto out_put_leader;

 VAR_7.name = VAR_6;
 VAR_7.len = FUNC_3(VAR_6, sizeof(VAR_6), "%u", VAR_1);
 VAR_3 = FUNC_0(VAR_5, &VAR_7);
 if (VAR_3) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }

 FUNC_2(VAR_5);
out_put_leader:
 FUNC_2(VAR_4);
out:
 return;
}
