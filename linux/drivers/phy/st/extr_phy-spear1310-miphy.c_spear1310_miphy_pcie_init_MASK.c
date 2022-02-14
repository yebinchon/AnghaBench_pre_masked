
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear1310_miphy_priv {int id; int misc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct spear1310_miphy_priv *VAR_5)
{
 u32 VAR_6;

 FUNC_2(VAR_5->misc, VAR_1,
      VAR_4,
      VAR_3);

 switch (VAR_5->id) {
 case 0:
  VAR_6 = FUNC_1(0);
  break;
 case 1:
  VAR_6 = FUNC_1(1);
  break;
 case 2:
  VAR_6 = FUNC_1(2);
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_5->misc, VAR_2,
      FUNC_0(VAR_5->id), VAR_6);

 return 0;
}
