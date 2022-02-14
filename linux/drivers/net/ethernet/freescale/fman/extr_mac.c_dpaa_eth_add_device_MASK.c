
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mac_priv_s {int dev; int cell_index; } ;
struct mac_device {struct mac_priv_s* priv; } ;
struct dpaa_eth_data {int fman_hw_id; int mac_hw_id; struct mac_device* mac_dev; } ;
typedef int data ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,struct dpaa_eth_data*,int) ;
 struct platform_device* FUNC_5 (char*,int) ;
 int FUNC_6 (struct platform_device*) ;

__attribute__((used)) static struct platform_device *FUNC_7(int VAR_2,
         struct mac_device *VAR_3)
{
 struct platform_device *VAR_4;
 struct dpaa_eth_data VAR_5;
 struct mac_priv_s *VAR_6;
 static int VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->priv;

 VAR_5.mac_dev = VAR_3;
 VAR_5.mac_hw_id = VAR_6->cell_index;
 VAR_5.fman_hw_id = VAR_2;

 FUNC_1(&VAR_1);
 VAR_4 = FUNC_5("dpaa-ethernet", VAR_7);
 if (!VAR_4) {
  VAR_8 = -VAR_0;
  goto no_mem;
 }

 VAR_4->dev.parent = VAR_6->dev;

 VAR_8 = FUNC_4(VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8)
  goto err;

 VAR_7++;
 FUNC_2(&VAR_1);

 return VAR_4;

err:
 FUNC_6(VAR_4);
no_mem:
 FUNC_2(&VAR_1);

 return FUNC_0(VAR_8);
}
