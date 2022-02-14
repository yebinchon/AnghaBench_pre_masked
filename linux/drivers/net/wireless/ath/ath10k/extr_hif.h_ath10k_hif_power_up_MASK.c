
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
typedef enum ath10k_firmware_mode { ____Placeholder_ath10k_firmware_mode } ath10k_firmware_mode ;
struct TYPE_3__ {int (* power_up ) (struct ath10k*,int) ;} ;


 int FUNC_0 (struct ath10k*,int) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_0,
          enum ath10k_firmware_mode VAR_1)
{
 return VAR_0->hif.ops->power_up(VAR_0, VAR_1);
}
