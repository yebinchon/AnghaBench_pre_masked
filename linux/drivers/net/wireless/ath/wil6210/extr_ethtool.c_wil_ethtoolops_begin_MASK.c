
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int mutex; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct wil6210_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct wil6210_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->mutex);

 FUNC_2(VAR_1, "ethtoolops_begin\n");

 return 0;
}
