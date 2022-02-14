
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* fetch_cal_eeprom ) (struct ath10k*,void**,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,void**,size_t*) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_1,
           void **VAR_2,
           size_t *VAR_3)
{
 if (!VAR_1->hif.ops->fetch_cal_eeprom)
  return -VAR_0;

 return VAR_1->hif.ops->fetch_cal_eeprom(VAR_1, VAR_2, VAR_3);
}
