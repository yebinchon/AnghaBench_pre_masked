
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {struct net_device* mesh_dev; } ;
struct TYPE_2__ {int size; } ;
struct cmd_ds_802_11_ad_hoc_stop {TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_ad_hoc_stop*) ;
 int FUNC_2 (struct lbs_private*,int) ;
 int FUNC_3 (struct cmd_ds_802_11_ad_hoc_stop*,int ,int) ;
 struct lbs_private* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_2, struct net_device *VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_4(VAR_2);
 struct cmd_ds_802_11_ad_hoc_stop VAR_5;
 int VAR_6 = 0;

 if (VAR_3 == VAR_4->mesh_dev)
  return -VAR_1;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.hdr.size = FUNC_0(sizeof(VAR_5));
 VAR_6 = FUNC_1(VAR_4, VAR_0, &VAR_5);


 FUNC_2(VAR_4, 1);

 return VAR_6;
}
