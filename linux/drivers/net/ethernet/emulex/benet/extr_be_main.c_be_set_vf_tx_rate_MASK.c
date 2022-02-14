
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct be_adapter {int num_vfs; TYPE_2__* vf_cfg; TYPE_1__* pdev; } ;
struct TYPE_4__ {int tx_rate; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*,int,int,int) ;
 int FUNC_1 (struct be_adapter*,int*,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct be_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, int VAR_4,
        int VAR_5, int VAR_6)
{
 struct be_adapter *VAR_7 = FUNC_4(VAR_3);
 struct device *VAR_8 = &VAR_7->pdev->dev;
 int VAR_9, VAR_10 = 0;
 u16 VAR_11 = 0;
 u8 VAR_12;

 if (!FUNC_6(VAR_7))
  return -VAR_2;

 if (VAR_4 >= VAR_7->num_vfs)
  return -VAR_0;

 if (VAR_5)
  return -VAR_0;

 if (!VAR_6)
  goto config_qos;

 VAR_10 = FUNC_1(VAR_7, &VAR_11,
       &VAR_12, 0);
 if (VAR_10)
  goto err;

 if (!VAR_12) {
  FUNC_3(VAR_8, "TX-rate setting not allowed when link is down\n");
  VAR_10 = -VAR_1;
  goto err;
 }

 if (VAR_6 < 100 || VAR_6 > VAR_11) {
  FUNC_3(VAR_8, "TX-rate must be between 100 and %d Mbps\n",
   VAR_11);
  VAR_10 = -VAR_0;
  goto err;
 }


 VAR_9 = VAR_11 / 100;
 if (FUNC_5(VAR_7) && (VAR_6 % VAR_9)) {
  FUNC_3(VAR_8, "TX-rate must be a multiple of %d Mbps\n",
   VAR_9);
  VAR_10 = -VAR_0;
  goto err;
 }

config_qos:
 VAR_10 = FUNC_0(VAR_7, VAR_6, VAR_11, VAR_4 + 1);
 if (VAR_10)
  goto err;

 VAR_7->vf_cfg[VAR_4].tx_rate = VAR_6;
 return 0;

err:
 FUNC_3(VAR_8, "TX-rate setting of %dMbps on VF%d failed\n",
  VAR_6, VAR_4);
 return FUNC_2(VAR_10);
}
