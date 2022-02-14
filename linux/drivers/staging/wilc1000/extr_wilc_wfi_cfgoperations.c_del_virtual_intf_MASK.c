
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; int netdev; } ;
struct wiphy {int dummy; } ;
struct wilc_vif {int idx; int iftype; scalar_t__ monitor_flag; int ndev; } ;
struct wilc {int vif_num; int vif_mutex; struct wilc_vif** vif; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wiphy*,struct wireless_dev*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wilc_vif* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wilc_vif*) ;
 int FUNC_6 (struct wilc_vif*,int ,int ,int) ;
 int FUNC_7 (struct wilc*,int) ;
 struct wilc* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_3, struct wireless_dev *VAR_4)
{
 struct wilc *VAR_5 = FUNC_8(VAR_3);
 struct wilc_vif *VAR_6;
 int VAR_7;

 if (VAR_4->iftype == VAR_1 ||
     VAR_4->iftype == VAR_2)
  FUNC_7(VAR_5, 1);
 VAR_6 = FUNC_3(VAR_4->netdev);
 FUNC_0(VAR_3, VAR_4, VAR_0);
 FUNC_4(VAR_6->ndev);
 VAR_6->monitor_flag = 0;

 FUNC_1(&VAR_5->vif_mutex);
 FUNC_6(VAR_6, 0, 0, 0);
 for (VAR_7 = VAR_6->idx; VAR_7 < VAR_5->vif_num; VAR_7++) {
  if ((VAR_7 + 1) >= VAR_5->vif_num) {
   VAR_5->vif[VAR_7] = ((void*)0);
  } else {
   VAR_6 = VAR_5->vif[VAR_7 + 1];
   VAR_6->idx = VAR_7;
   VAR_5->vif[VAR_7] = VAR_6;
   FUNC_6(VAR_6, FUNC_5(VAR_6),
      VAR_6->iftype, VAR_6->idx);
  }
 }
 VAR_5->vif_num--;
 FUNC_2(&VAR_5->vif_mutex);

 return 0;
}
