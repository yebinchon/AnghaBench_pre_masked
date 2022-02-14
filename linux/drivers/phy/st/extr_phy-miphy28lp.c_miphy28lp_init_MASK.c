
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct miphy28lp_phy {int type; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int miphy_mutex; } ;


 int VAR_0 ;



 int FUNC_0 (struct miphy28lp_phy*) ;
 int FUNC_1 (struct miphy28lp_phy*) ;
 int FUNC_2 (struct miphy28lp_phy*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct miphy28lp_phy* FUNC_5 (struct phy*) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_1)
{
 struct miphy28lp_phy *VAR_2 = FUNC_5(VAR_1);
 struct miphy28lp_dev *VAR_3 = VAR_2->phydev;
 int VAR_4;

 FUNC_3(&VAR_3->miphy_mutex);

 switch (VAR_2->type) {

 case 129:
  VAR_4 = FUNC_1(VAR_2);
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_2);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 FUNC_4(&VAR_3->miphy_mutex);

 return VAR_4;
}
