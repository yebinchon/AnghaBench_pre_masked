
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct TYPE_4__ {TYPE_1__* vdev_param; } ;
struct ath10k {TYPE_2__ wmi; int conf_mutex; } ;
struct TYPE_3__ {int ldpc; int sgi; int nss; int fixed_rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (struct ath10k*,int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k_vif *VAR_1,
         u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct ath10k *VAR_6 = VAR_1->ar;
 u32 VAR_7;
 int VAR_8;

 FUNC_3(&VAR_6->conf_mutex);

 FUNC_0(VAR_6, VAR_0, "mac set fixed rate params vdev %i rate 0x%02hhx nss %hhu sgi %hhu\n",
     VAR_1->vdev_id, VAR_2, VAR_3, VAR_4);

 VAR_7 = VAR_6->wmi.vdev_param->fixed_rate;
 VAR_8 = FUNC_2(VAR_6, VAR_1->vdev_id, VAR_7, VAR_2);
 if (VAR_8) {
  FUNC_1(VAR_6, "failed to set fixed rate param 0x%02x: %d\n",
       VAR_2, VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6->wmi.vdev_param->nss;
 VAR_8 = FUNC_2(VAR_6, VAR_1->vdev_id, VAR_7, VAR_3);
 if (VAR_8) {
  FUNC_1(VAR_6, "failed to set nss param %d: %d\n", VAR_3, VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6->wmi.vdev_param->sgi;
 VAR_8 = FUNC_2(VAR_6, VAR_1->vdev_id, VAR_7, VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_6, "failed to set sgi param %d: %d\n", VAR_4, VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6->wmi.vdev_param->ldpc;
 VAR_8 = FUNC_2(VAR_6, VAR_1->vdev_id, VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_6, "failed to set ldpc param %d: %d\n", VAR_5, VAR_8);
  return VAR_8;
 }

 return 0;
}
