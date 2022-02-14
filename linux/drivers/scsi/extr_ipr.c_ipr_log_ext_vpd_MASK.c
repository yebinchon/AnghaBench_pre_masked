
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ext_vpd {int * wwid; int vpd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ipr_ext_vpd *VAR_0)
{
 FUNC_2(&VAR_0->vpd);
 FUNC_1("    WWN: %08X%08X\n", FUNC_0(VAR_0->wwid[0]),
  FUNC_0(VAR_0->wwid[1]));
}
