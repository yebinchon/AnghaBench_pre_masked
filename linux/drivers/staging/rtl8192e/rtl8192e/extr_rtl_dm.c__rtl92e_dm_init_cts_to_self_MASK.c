
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int bCTSToSelfEnable; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0((struct net_device *)VAR_0);

 VAR_1->rtllib->bCTSToSelfEnable = 1;
}
