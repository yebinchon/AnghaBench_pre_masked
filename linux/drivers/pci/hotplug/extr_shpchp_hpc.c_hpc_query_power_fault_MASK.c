
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slot {int hp_slot; struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_2(struct slot *VAR_1)
{
 struct controller *VAR_2 = VAR_1->ctrl;
 u32 VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_1->hp_slot));


 return !(VAR_3 & VAR_0);
}
