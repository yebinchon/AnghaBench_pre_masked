
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int pause; int asym_pause; int lp_advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;

int FUNC_5(struct phy_device *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_4(VAR_9, VAR_7, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 if (!(VAR_10 & VAR_5)) {
  FUNC_0(VAR_0,
       VAR_9->lp_advertising);
  FUNC_2(VAR_9->lp_advertising, 0);
  FUNC_3(VAR_9->lp_advertising, 0);
  VAR_9->pause = 0;
  VAR_9->asym_pause = 0;

  return 0;
 }

 FUNC_1(VAR_0, VAR_9->lp_advertising,
    VAR_10 & VAR_6);


 VAR_10 = FUNC_4(VAR_9, VAR_7, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(VAR_9->lp_advertising, VAR_10);
 VAR_9->pause = VAR_10 & VAR_2 ? 1 : 0;
 VAR_9->asym_pause = VAR_10 & VAR_1 ? 1 : 0;


 VAR_10 = FUNC_4(VAR_9, VAR_7, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(VAR_9->lp_advertising, VAR_10);

 return 0;
}
