
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct wilc_vif {int ndev; struct wilc* wilc; } ;
struct wilc {int initialized; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct wilc_vif* FUNC_1 (int ) ;
 int FUNC_2 (struct wilc_vif*,int *) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_1, struct wireless_dev *VAR_2,
   int *VAR_3)
{
 int VAR_4;
 struct wilc_vif *VAR_5 = FUNC_1(VAR_2->netdev);
 struct wilc *VAR_6 = VAR_5->wilc;


 if (!VAR_6->initialized)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_5, (u8 *)VAR_3);
 if (VAR_4)
  FUNC_0(VAR_5->ndev, "Failed to get tx power\n");

 return VAR_4;
}
