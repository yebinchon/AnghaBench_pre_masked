
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ave_private {void* pinmode_val; void* pinmode_mask; } ;
typedef int phy_interface_t ;


 int VAR_0 ;


 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ave_private *VAR_1,
    phy_interface_t VAR_2, u32 VAR_3)
{
 if (VAR_3 > 1)
  return -VAR_0;

 VAR_1->pinmode_mask = FUNC_0(VAR_3);

 switch (VAR_2) {
 case 128:
  VAR_1->pinmode_val = FUNC_0(VAR_3);
  break;
 case 129:
  VAR_1->pinmode_val = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
