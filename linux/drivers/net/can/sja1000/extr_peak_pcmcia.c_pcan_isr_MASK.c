
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcan_pccard {int chan_count; TYPE_1__* channel; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_2__ {struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcan_pccard*) ;
 scalar_t__ FUNC_1 (int,struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct pcan_pccard *VAR_5 = VAR_4;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  int VAR_7 = 1;
  int VAR_8;


  for (VAR_8 = 0; VAR_8 < VAR_5->chan_count; VAR_8++) {
   struct net_device *VAR_9;





   if (!FUNC_0(VAR_5)) {

    return VAR_1;
   }





   VAR_9 = VAR_5->channel[VAR_8].netdev;
   if (VAR_9 &&
       FUNC_1(VAR_3, VAR_9) == VAR_0)
    VAR_7 = 0;
  }

  if (VAR_7)
   break;
 }

 return (VAR_6) ? VAR_0 : VAR_1;
}
