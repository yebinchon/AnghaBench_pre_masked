
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ath5k_hw {int ah_mac_srev; int dev; } ;
struct ar231x_board_config {int devid; } ;


 struct ar231x_board_config* FUNC_0 (int *) ;
 struct platform_device* FUNC_1 (int ) ;

int FUNC_2(struct ath5k_hw *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_1(VAR_0->dev);
 struct ar231x_board_config *VAR_2 = FUNC_0(&VAR_1->dev);
 VAR_0->ah_mac_srev = VAR_2->devid;
 return 0;
}
