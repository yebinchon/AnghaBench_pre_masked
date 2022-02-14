
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_priv_s {int dev; } ;
struct mac_device {int (* set_exception ) (int ,int ,int) ;int fman_mac; struct mac_priv_s* priv; } ;
struct fman_mac_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct fman_mac_params*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct mac_device*,struct fman_mac_params*) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct mac_device *VAR_2)
{
 int VAR_3;
 struct mac_priv_s *VAR_4;
 struct fman_mac_params VAR_5;
 u32 VAR_6;

 VAR_4 = VAR_2->priv;

 FUNC_8(VAR_2, &VAR_5);

 VAR_2->fman_mac = FUNC_3(&VAR_5);
 if (!VAR_2->fman_mac) {
  VAR_3 = -VAR_0;
  goto _return;
 }

 VAR_3 = FUNC_1(VAR_2->fman_mac, FUNC_7());
 if (VAR_3 < 0)
  goto _return_fm_mac_free;

 VAR_3 = FUNC_2(VAR_2->fman_mac, 1);
 if (VAR_3 < 0)
  goto _return_fm_mac_free;

 VAR_3 = FUNC_6(VAR_2->fman_mac);
 if (VAR_3 < 0)
  goto _return_fm_mac_free;


 VAR_3 = VAR_2->set_exception(VAR_2->fman_mac,
         VAR_1, 0);
 if (VAR_3 < 0)
  goto _return_fm_mac_free;

 VAR_3 = FUNC_5(VAR_2->fman_mac, &VAR_6);
 if (VAR_3 < 0)
  goto _return_fm_mac_free;

 FUNC_0(VAR_4->dev, "FMan dTSEC version: 0x%08x\n", VAR_6);

 goto _return;

_return_fm_mac_free:
 FUNC_4(VAR_2->fman_mac);

_return:
 return VAR_3;
}
