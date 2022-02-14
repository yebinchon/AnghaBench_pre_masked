
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct r8192_priv {int wx_mutex; int reset_wq; } ;
struct net_device {int dev_addr; } ;


 int FUNC_0 (int ,int ) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, void *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;

 FUNC_2(&VAR_2->wx_mutex);

 FUNC_0(VAR_0->dev_addr, VAR_3->sa_data);

 FUNC_4(&VAR_2->reset_wq);
 FUNC_3(&VAR_2->wx_mutex);

 return 0;
}
