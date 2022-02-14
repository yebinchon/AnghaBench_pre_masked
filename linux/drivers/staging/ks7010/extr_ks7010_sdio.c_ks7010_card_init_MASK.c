
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_wlan_private {scalar_t__ version_size; scalar_t__ dev_state; int net_dev; int confirm_wait; scalar_t__ mac_address_valid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct ks_wlan_private *VAR_4)
{
 FUNC_1(&VAR_4->confirm_wait);


 FUNC_0(VAR_4, VAR_3);

 if (!FUNC_4
     (&VAR_4->confirm_wait, 5 * VAR_2)) {
  FUNC_3(VAR_4->net_dev, "wait time out!! SME_START\n");
 }

 if (VAR_4->mac_address_valid && VAR_4->version_size != 0)
  VAR_4->dev_state = VAR_0;

 FUNC_2(VAR_4);

 if (!FUNC_4
     (&VAR_4->confirm_wait, 5 * VAR_2)) {
  FUNC_3(VAR_4->net_dev, "wait time out!! wireless parameter set\n");
 }

 if (VAR_4->dev_state >= VAR_0) {
  FUNC_3(VAR_4->net_dev, "DEVICE READY!!\n");
  VAR_4->dev_state = VAR_1;
 }
}
