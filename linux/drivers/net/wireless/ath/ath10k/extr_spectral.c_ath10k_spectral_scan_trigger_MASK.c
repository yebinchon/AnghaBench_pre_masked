
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_vif {int vdev_id; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct ath10k {TYPE_1__ spectral; int conf_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath10k_vif* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_5)
{
 struct ath10k_vif *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_2(&VAR_5->conf_mutex);

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_0;
 VAR_8 = VAR_6->vdev_id;

 if (VAR_5->spectral.mode == VAR_1)
  return 0;

 VAR_7 = FUNC_1(VAR_5, VAR_8,
           VAR_3,
           VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_8,
           VAR_4,
           VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
