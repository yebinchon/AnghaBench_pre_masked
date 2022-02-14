
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {scalar_t__ id; int dev; } ;
struct ath5k_hw {int dev; } ;
struct ar231x_board_config {TYPE_1__* config; } ;
struct TYPE_2__ {int * wlan1_mac; int * wlan0_mac; } ;


 int VAR_0 ;
 struct ar231x_board_config* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ath5k_hw *VAR_1, u8 *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_1->dev);
 struct ar231x_board_config *VAR_4 = FUNC_0(&VAR_3->dev);
 u8 *VAR_5;

 if (FUNC_2(VAR_1->dev)->id == 0)
  VAR_5 = VAR_4->config->wlan0_mac;
 else
  VAR_5 = VAR_4->config->wlan1_mac;

 FUNC_1(VAR_2, VAR_5, VAR_0);
 return 0;
}
