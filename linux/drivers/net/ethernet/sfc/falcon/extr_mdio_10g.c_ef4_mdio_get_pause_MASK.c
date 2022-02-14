
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mmds; } ;
struct ef4_nic {int wanted_fc; TYPE_1__ mdio; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ef4_nic*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

u8 FUNC_5(struct ef4_nic *VAR_6)
{
 FUNC_0(VAR_0 & (VAR_1 | VAR_2));

 if (!(VAR_6->wanted_fc & VAR_0))
  return VAR_6->wanted_fc;

 FUNC_1(!(VAR_6->mdio.mmds & VAR_4));

 return FUNC_4(
  FUNC_3(VAR_6->wanted_fc),
  FUNC_2(VAR_6, VAR_5, VAR_3));
}
