
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int oem_ver; int eetrack; } ;
struct i40e_hw {TYPE_1__ nvm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct i40e_hw*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_1(struct i40e_hw *VAR_9)
{
 u16 VAR_10 = 0xffff;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 FUNC_0(VAR_9, 0x1B, &VAR_10);
 if (VAR_10 == 0xffff)
  return;


 FUNC_0(VAR_9, VAR_10 + 0x00,
      &VAR_11);
 if (VAR_11 < 3)
  return;


 FUNC_0(VAR_9, VAR_10 + 0x01,
      &VAR_12);
 if ((VAR_12 & 0x000F) != 0)
  return;

 FUNC_0(VAR_9, VAR_10 + 0x02,
      &VAR_13);
 FUNC_0(VAR_9, VAR_10 + 0x03,
      &VAR_14);
 VAR_9->nvm.oem_ver = (VAR_13 << VAR_7) | VAR_14;
 VAR_9->nvm.eetrack = VAR_6;
}
