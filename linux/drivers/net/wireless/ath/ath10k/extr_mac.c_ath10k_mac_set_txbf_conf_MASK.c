
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct TYPE_4__ {TYPE_1__* vdev_param; } ;
struct ath10k {int vht_cap_info; TYPE_2__ wmi; } ;
struct TYPE_3__ {int txbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 scalar_t__ FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k_vif *VAR_11)
{
 u32 VAR_12 = 0;
 struct ath10k *VAR_13 = VAR_11->ar;
 int VAR_14;
 int VAR_15;

 if (FUNC_3(VAR_13) != VAR_5)
  return 0;

 VAR_14 = FUNC_2(VAR_13);
 if (VAR_13->vht_cap_info & (VAR_2 |
    VAR_0))
  VAR_12 |= FUNC_0(VAR_14, VAR_6);

 VAR_15 = FUNC_1(VAR_13);
 if (VAR_13->vht_cap_info & (VAR_3 |
    VAR_1))
  VAR_12 |= FUNC_0(VAR_15, VAR_4);

 if (!VAR_12)
  return 0;

 if (VAR_13->vht_cap_info & VAR_3)
  VAR_12 |= VAR_10;

 if (VAR_13->vht_cap_info & VAR_1)
  VAR_12 |= (VAR_8 |
     VAR_10);

 if (VAR_13->vht_cap_info & VAR_2)
  VAR_12 |= VAR_9;

 if (VAR_13->vht_cap_info & VAR_0)
  VAR_12 |= (VAR_7 |
     VAR_9);

 return FUNC_4(VAR_13, VAR_11->vdev_id,
      VAR_13->wmi.vdev_param->txbf, VAR_12);
}
