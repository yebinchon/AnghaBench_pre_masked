
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int soc_version; } ;
struct ath10k_snoc {int flags; TYPE_1__ target_info; } ;
struct ath10k_bus_params {int chip_id; int dev_type; } ;
struct ath10k {int dev_flags; int restart_work; int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath10k*,struct ath10k_bus_params*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct ath10k *VAR_6, u64 VAR_7)
{
 struct ath10k_snoc *VAR_8 = FUNC_2(VAR_6);
 struct ath10k_bus_params VAR_9 = {};
 int VAR_10;

 if (FUNC_5(VAR_4, &VAR_8->flags))
  return 0;

 switch (VAR_7) {
 case 128:
  if (FUNC_5(VAR_3, &VAR_8->flags)) {
   FUNC_3(VAR_6->workqueue, &VAR_6->restart_work);
   break;
  }

  VAR_9.dev_type = VAR_0;
  VAR_9.chip_id = VAR_8->target_info.soc_version;
  VAR_10 = FUNC_0(VAR_6, &VAR_9);
  if (VAR_10) {
   FUNC_1(VAR_6, "Failed to register driver core: %d\n",
       VAR_10);
   return VAR_10;
  }
  FUNC_4(VAR_3, &VAR_8->flags);
  break;
 case 129:
  FUNC_4(VAR_2, &VAR_8->flags);
  FUNC_4(VAR_1, &VAR_6->dev_flags);
  break;
 default:
  FUNC_1(VAR_6, "invalid fw indication: %llx\n", VAR_7);
  return -VAR_5;
 }

 return 0;
}
