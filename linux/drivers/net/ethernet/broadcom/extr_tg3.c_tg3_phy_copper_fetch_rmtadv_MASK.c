
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rmt_adv; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct tg3 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = 0;

 if (!(VAR_3->phy_flags & VAR_2)) {
  u32 VAR_6;

  if (FUNC_2(VAR_3, VAR_1, &VAR_6))
   return 0;

  VAR_5 = FUNC_1(VAR_6);
 }

 if (FUNC_2(VAR_3, VAR_0, VAR_4))
  return 0;

 VAR_5 |= FUNC_0(*VAR_4);
 VAR_3->link_config.rmt_adv = VAR_5;

 return 1;
}
