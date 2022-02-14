
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ems_pcmcia_card {int channels; struct net_device** net_dev; int base_addr; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ems_pcmcia_card *VAR_4 = VAR_3;
 struct net_device *VAR_5;
 irqreturn_t VAR_6 = VAR_1;
 int VAR_7, VAR_8;


 if (FUNC_0(VAR_4->base_addr) != 0xAA55)
  return VAR_0;

 do {
  VAR_8 = 0;


  for (VAR_7 = 0; VAR_7 < VAR_4->channels; VAR_7++) {
   VAR_5 = VAR_4->net_dev[VAR_7];
   if (!VAR_5)
    continue;

   if (FUNC_1(VAR_2, VAR_5) == VAR_0)
    VAR_8 = 1;
  }

  if (VAR_8)
   VAR_6 = VAR_0;

 } while (VAR_8);

 return VAR_6;
}
