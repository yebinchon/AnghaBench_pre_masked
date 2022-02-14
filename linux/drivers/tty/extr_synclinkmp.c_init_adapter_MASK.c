
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ctrlreg_value; int * port_array; scalar_t__ lcr_base; int misc_ctrl_value; } ;
typedef TYPE_1__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(SLMP_INFO *VAR_7)
{
 int VAR_8;


 volatile u32 *VAR_9 = (u32 *)(VAR_7->lcr_base + 0x50);
 u32 VAR_10;

 VAR_7->misc_ctrl_value |= VAR_1;
 *VAR_9 = VAR_7->misc_ctrl_value;






 for(VAR_8=0;VAR_8<10;VAR_8++)
  VAR_10 = *VAR_9;

 VAR_7->misc_ctrl_value &= ~VAR_1;
 *VAR_9 = VAR_7->misc_ctrl_value;


 VAR_7->ctrlreg_value = 0xaa;
 FUNC_1(VAR_7);

 {
  volatile u32 *VAR_11 = (u32 *)(VAR_7->lcr_base + 0x2c);
  VAR_4 &= ~(VAR_3 + VAR_2 + VAR_0);

  switch(VAR_6)
  {
  case 16:
   VAR_4 |= VAR_3 + VAR_2 + VAR_0;
   break;
  case 8:
   VAR_4 |= VAR_3 + VAR_2;
   break;
  case 4:
   VAR_4 |= VAR_3 + VAR_0;
   break;
  case 0:
   VAR_4 |= VAR_3;
   break;
  }

  *VAR_11 = VAR_4;
  *VAR_9 = VAR_5;
 }

 FUNC_0(VAR_7->port_array[0]);
 FUNC_0(VAR_7->port_array[2]);

 return 1;
}
