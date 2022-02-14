
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int mode; int gid; int uid; } ;
struct ipc64_perm {int mode; int gid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct ipc64_perm *VAR_2, struct kern_ipc_perm *VAR_3)
{
 kuid_t VAR_4 = FUNC_3(FUNC_0(), VAR_2->uid);
 kgid_t VAR_5 = FUNC_2(FUNC_0(), VAR_2->gid);
 if (!FUNC_4(VAR_4) || !FUNC_1(VAR_5))
  return -VAR_0;

 VAR_3->uid = VAR_4;
 VAR_3->gid = VAR_5;
 VAR_3->mode = (VAR_3->mode & ~VAR_1)
  | (VAR_2->mode & VAR_1);

 return 0;
}
