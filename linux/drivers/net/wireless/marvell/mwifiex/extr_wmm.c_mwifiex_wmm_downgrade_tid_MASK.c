
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* ac_down_graded_vals; } ;
struct mwifiex_private {TYPE_1__ wmm; int adapter; } ;
typedef enum mwifiex_wmm_ac_e { ____Placeholder_mwifiex_wmm_ac_e } mwifiex_wmm_ac_e ;


 int ** VAR_0 ;
 int FUNC_0 (int ,int) ;

u8 FUNC_1(struct mwifiex_private *VAR_1, u32 VAR_2)
{
 enum mwifiex_wmm_ac_e VAR_3, VAR_4;
 u8 VAR_5;

 VAR_3 = FUNC_0(VAR_1->adapter, VAR_2);
 VAR_4 = VAR_1->wmm.ac_down_graded_vals[VAR_3];




 VAR_5 = VAR_0[VAR_4][VAR_2 % 2];

 return VAR_5;
}
