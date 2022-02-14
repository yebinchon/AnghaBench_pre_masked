
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmimux_priv {int stats64; struct net_device* real_dev; } ;
struct net_device {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct qmimux_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*) ;
 int FUNC_4 (struct net_device*,struct list_head*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
         struct list_head *VAR_1)
{
 struct qmimux_priv *VAR_2 = FUNC_2(VAR_0);
 struct net_device *VAR_3 = VAR_2->real_dev;

 FUNC_1(VAR_2->stats64);
 FUNC_3(VAR_3, VAR_0);
 FUNC_4(VAR_0, VAR_1);


 FUNC_0(VAR_3);
}
