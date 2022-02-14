
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct slvl_device {int channel; TYPE_1__* chan; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int rx_function; } ;


 struct slvl_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct net_device*,TYPE_1__*) ;
 int FUNC_4 (struct net_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct slvl_device *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_2->channel;





 VAR_2->chan->rx_function = VAR_0;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 switch (VAR_3) {
  case 0:
   FUNC_4(VAR_1, VAR_2->chan);
   break;
  case 1:
   FUNC_3(VAR_1, VAR_2->chan);
   break;
 }
 return 0;
}
