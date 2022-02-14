
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slot {int hp_slot; struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_2(struct slot *VAR_2, u8 *VAR_3)
{
 struct controller *VAR_4 = VAR_2->ctrl;
 u32 VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_2->hp_slot));
 u8 VAR_6 = (VAR_5 & VAR_0) >> VAR_1;

 *VAR_3 = (VAR_6 != 0x3) ? 1 : 0;

 return 0;
}
