
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath9k_htc_priv {int dev; TYPE_1__* htc; int data_vo_ep; int data_vi_ep; int data_bk_ep; int data_be_ep; int mgmt_ep; int uapsd_ep; int cab_ep; int beacon_ep; int wmi_cmd_ep; int wmi; } ;
struct TYPE_3__ {int credits; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ath9k_htc_priv*,int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ath9k_htc_priv *VAR_10, u16 VAR_11,
       u32 VAR_12)
{
 int VAR_13;


 VAR_13 = FUNC_2(VAR_10->htc, VAR_10->wmi, &VAR_10->wmi_cmd_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_0, VAR_8,
        &VAR_10->beacon_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_1, VAR_9,
        &VAR_10->cab_ep);
 if (VAR_13)
  goto err;



 VAR_13 = FUNC_1(VAR_10, VAR_7, VAR_9,
        &VAR_10->uapsd_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_6, VAR_9,
        &VAR_10->mgmt_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_2, VAR_9,
        &VAR_10->data_be_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_3, VAR_9,
        &VAR_10->data_bk_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_4, VAR_9,
        &VAR_10->data_vi_ep);
 if (VAR_13)
  goto err;


 VAR_13 = FUNC_1(VAR_10, VAR_5, VAR_9,
        &VAR_10->data_vo_ep);
 if (VAR_13)
  goto err;







 if (FUNC_0(VAR_12))
  VAR_10->htc->credits = 45;
 else
  VAR_10->htc->credits = 33;

 VAR_13 = FUNC_5(VAR_10->htc);
 if (VAR_13)
  goto err;

 FUNC_4(VAR_10->dev, "ath9k_htc: HTC initialized with %d credits\n",
   VAR_10->htc->credits);

 return 0;

err:
 FUNC_3(VAR_10->dev, "ath9k_htc: Unable to initialize HTC services\n");
 return VAR_13;
}
