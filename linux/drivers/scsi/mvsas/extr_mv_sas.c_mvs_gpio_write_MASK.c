
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_ha_struct {struct mvs_prv_info* lldd_ha; } ;
struct mvs_prv_info {struct mvs_info** mvi; } ;
struct mvs_info {int dummy; } ;
struct TYPE_2__ {int (* gpio_write ) (struct mvs_prv_info*,int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct mvs_prv_info*,int ,int ,int ,int *) ;

int FUNC_1(struct sas_ha_struct *VAR_2, u8 VAR_3, u8 VAR_4,
   u8 VAR_5, u8 *VAR_6)
{
 struct mvs_prv_info *VAR_7 = VAR_2->lldd_ha;
 struct mvs_info *VAR_8 = VAR_7->mvi[0];

 if (VAR_1->gpio_write) {
  return VAR_1->gpio_write(VAR_7, VAR_3,
   VAR_4, VAR_5, VAR_6);
 }

 return -VAR_0;
}
