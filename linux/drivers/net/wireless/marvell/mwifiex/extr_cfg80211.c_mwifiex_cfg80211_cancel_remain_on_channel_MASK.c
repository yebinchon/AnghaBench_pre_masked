
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct mwifiex_roc_cfg {int dummy; } ;
struct TYPE_2__ {scalar_t__ cookie; int chan; } ;
struct mwifiex_private {int adapter; TYPE_1__ roc_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wireless_dev*,scalar_t__,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,char*,scalar_t__) ;
 struct mwifiex_private* FUNC_3 (int ) ;
 int FUNC_4 (struct mwifiex_private*,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_4,
       struct wireless_dev *VAR_5, u64 VAR_6)
{
 struct mwifiex_private *VAR_7 = FUNC_3(VAR_5->netdev);
 int VAR_8;

 if (VAR_6 != VAR_7->roc_cfg.cookie)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7, VAR_2,
      &VAR_7->roc_cfg.chan, 0);

 if (!VAR_8) {
  FUNC_0(VAR_5, VAR_6,
         &VAR_7->roc_cfg.chan,
         VAR_1);

  FUNC_1(&VAR_7->roc_cfg, 0, sizeof(struct mwifiex_roc_cfg));

  FUNC_2(VAR_7->adapter, VAR_3,
       "info: cancel ROC, cookie = 0x%llx\n", VAR_6);
 }

 return VAR_8;
}
