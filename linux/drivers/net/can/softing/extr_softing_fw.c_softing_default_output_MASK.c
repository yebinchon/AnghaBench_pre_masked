
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct softing_priv {int chip; struct softing* card; } ;
struct softing {TYPE_1__* pdat; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int generation; } ;


 struct softing_priv* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_0)
{
 struct softing_priv *VAR_1 = FUNC_0(VAR_0);
 struct softing *VAR_2 = VAR_1->card;

 switch (VAR_1->chip) {
 case 1000:
  return (VAR_2->pdat->generation < 2) ? 0xfb : 0xfa;
 case 5:
  return 0x60;
 default:
  return 0x40;
 }
}
