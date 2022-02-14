
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fman_mac {int exceptions; int regs; int memac_drv_param; } ;
typedef enum fman_mac_exceptions { ____Placeholder_fman_mac_exceptions } fman_mac_exceptions ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int) ;

int FUNC_4(struct fman_mac *VAR_1,
   enum fman_mac_exceptions VAR_2, bool VAR_3)
{
 u32 VAR_4 = 0;

 if (!FUNC_1(VAR_1->memac_drv_param))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  if (VAR_3)
   VAR_1->exceptions |= VAR_4;
  else
   VAR_1->exceptions &= ~VAR_4;
 } else {
  FUNC_2("Undefined exception\n");
  return -VAR_0;
 }
 FUNC_3(VAR_1->regs, VAR_4, VAR_3);

 return 0;
}
