
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* card_power_off ) (struct rtsx_pcr*,int) ;} ;


 int FUNC_0 (struct rtsx_pcr*,int) ;

int FUNC_1(struct rtsx_pcr *VAR_0, int VAR_1)
{
 if (VAR_0->ops->card_power_off)
  return VAR_0->ops->card_power_off(VAR_0, VAR_1);

 return 0;
}
