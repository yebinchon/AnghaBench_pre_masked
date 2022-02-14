
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_params {int mac_mode; } ;
struct mac_driver {int (* mac_free ) (int *) ;} ;
struct TYPE_2__ {int * mac; } ;
struct hns_mac_cb {TYPE_1__ priv; int mac_id; int half_duplex; int speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hns_mac_cb*) ;
 scalar_t__ FUNC_2 (struct hns_mac_cb*,struct mac_params*) ;
 int FUNC_3 (struct hns_mac_cb*,int ,int) ;
 int FUNC_4 (struct mac_params*,struct hns_mac_cb*) ;
 int FUNC_5 (struct hns_mac_cb*,int ,int ,int) ;
 int FUNC_6 (struct hns_mac_cb*) ;
 scalar_t__ FUNC_7 (struct hns_mac_cb*,struct mac_params*) ;
 int FUNC_8 (struct mac_params*,int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct hns_mac_cb *VAR_2)
{
 int VAR_3;
 struct mac_params VAR_4;
 struct mac_driver *VAR_5;

 FUNC_1(VAR_2);

 FUNC_8(&VAR_4, 0, sizeof(struct mac_params));
 FUNC_4(&VAR_4, VAR_2);

 if (FUNC_0(VAR_4.mac_mode) < VAR_1)
  VAR_5 = (struct mac_driver *)FUNC_2(VAR_2, &VAR_4);
 else
  VAR_5 = (struct mac_driver *)FUNC_7(VAR_2, &VAR_4);

 if (!VAR_5)
  return -VAR_0;

 VAR_2->priv.mac = (void *)VAR_5;
 FUNC_6(VAR_2);

 FUNC_3(VAR_2, VAR_2->speed, !VAR_2->half_duplex);

 VAR_3 = FUNC_5(VAR_2, VAR_2->mac_id, 0, 1);
 if (VAR_3)
  goto free_mac_drv;

 return 0;

free_mac_drv:
 VAR_5->mac_free(VAR_2->priv.mac);
 VAR_2->priv.mac = ((void*)0);

 return VAR_3;
}
