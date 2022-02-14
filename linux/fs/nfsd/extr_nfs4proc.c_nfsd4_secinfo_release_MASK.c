
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ si_exp; } ;
union nfsd4_op_u {TYPE_1__ secinfo; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(union nfsd4_op_u *VAR_0)
{
 if (VAR_0->secinfo.si_exp)
  FUNC_0(VAR_0->secinfo.si_exp);
}
