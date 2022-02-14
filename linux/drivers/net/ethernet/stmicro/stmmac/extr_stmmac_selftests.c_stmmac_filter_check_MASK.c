
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_2)
{
 if (!(VAR_2->dev->flags & VAR_1))
  return 0;

 FUNC_0(VAR_2->dev, "Test can't be run in promiscuous mode!\n");
 return -VAR_0;
}
