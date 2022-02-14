
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct serdes_macro {int port; struct serdes_ctrl* ctrl; int idx; } ;
struct serdes_ctrl {int dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 struct serdes_macro* FUNC_2 (int ,int,int ) ;
 struct phy* FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct phy*,struct serdes_macro*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct serdes_ctrl *VAR_3, u8 VAR_4, struct phy **VAR_5)
{
 struct serdes_macro *VAR_6;

 *VAR_5 = FUNC_3(VAR_3->dev, ((void*)0), &VAR_2);
 if (FUNC_0(*VAR_5))
  return FUNC_1(*VAR_5);

 VAR_6 = FUNC_2(VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->idx = VAR_4;
 VAR_6->ctrl = VAR_3;
 VAR_6->port = -1;

 FUNC_4(*VAR_5, VAR_6);

 return 0;
}
