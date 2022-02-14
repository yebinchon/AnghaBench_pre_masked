
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int mode; int gid; int cgid; int uid; int cuid; } ;
struct ipc_namespace {int user_ns; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int FUNC_0 (struct kern_ipc_perm*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct kern_ipc_perm*,short) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(struct ipc_namespace *VAR_1, struct kern_ipc_perm *VAR_2, short VAR_3)
{
 kuid_t VAR_4 = FUNC_1();
 int VAR_5, VAR_6;

 FUNC_0(VAR_2);
 VAR_5 = (VAR_3 >> 6) | (VAR_3 >> 3) | VAR_3;
 VAR_6 = VAR_2->mode;
 if (FUNC_5(VAR_4, VAR_2->cuid) ||
     FUNC_5(VAR_4, VAR_2->uid))
  VAR_6 >>= 6;
 else if (FUNC_2(VAR_2->cgid) || FUNC_2(VAR_2->gid))
  VAR_6 >>= 3;

 if ((VAR_5 & ~VAR_6 & 0007) &&
     !FUNC_3(VAR_1->user_ns, VAR_0))
  return -1;

 return FUNC_4(VAR_2, VAR_3);
}
