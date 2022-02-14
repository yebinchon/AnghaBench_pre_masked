
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int wx_mutex; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->wx_mutex);

 VAR_2 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->wx_mutex);

 return VAR_2;
}
