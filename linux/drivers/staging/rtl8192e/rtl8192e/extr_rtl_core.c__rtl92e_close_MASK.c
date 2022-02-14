
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {int wx_mutex; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int softmac_features; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 if ((FUNC_3(VAR_2->rtllib, 0)) &&
  !(VAR_2->rtllib->softmac_features & VAR_0)) {
  FUNC_5(VAR_2->rtllib);
 }

 FUNC_1(&VAR_2->wx_mutex);

 VAR_3 = FUNC_0(VAR_1, 1);

 FUNC_2(&VAR_2->wx_mutex);

 return VAR_3;

}
