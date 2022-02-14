
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_priv_s {scalar_t__ max_speed; int dev; int fixed_link; } ;
struct mac_device {int fman_mac; struct mac_priv_s* priv; } ;
struct fman_mac_params {int phy_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct fman_mac_params*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mac_device*,struct fman_mac_params*) ;

__attribute__((used)) static int FUNC_9(struct mac_device *VAR_3)
{
 int VAR_4;
 struct mac_priv_s *VAR_5;
 struct fman_mac_params VAR_6;

 VAR_5 = VAR_3->priv;

 FUNC_8(VAR_3, &VAR_6);

 if (VAR_5->max_speed == VAR_2)
  VAR_6.phy_if = VAR_1;

 VAR_3->fman_mac = FUNC_5(&VAR_6);
 if (!VAR_3->fman_mac) {
  VAR_4 = -VAR_0;
  goto _return;
 }

 VAR_4 = FUNC_3(VAR_3->fman_mac, FUNC_1());
 if (VAR_4 < 0)
  goto _return_fm_mac_free;

 VAR_4 = FUNC_4(VAR_3->fman_mac, 1);
 if (VAR_4 < 0)
  goto _return_fm_mac_free;

 VAR_4 = FUNC_2(VAR_3->fman_mac, VAR_5->fixed_link);
 if (VAR_4 < 0)
  goto _return_fm_mac_free;

 VAR_4 = FUNC_7(VAR_3->fman_mac);
 if (VAR_4 < 0)
  goto _return_fm_mac_free;

 FUNC_0(VAR_5->dev, "FMan MEMAC\n");

 goto _return;

_return_fm_mac_free:
 FUNC_6(VAR_3->fman_mac);

_return:
 return VAR_4;
}
