
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmimux_priv {struct net_device* real_dev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qmimux_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct qmimux_priv *VAR_3 = FUNC_0(VAR_2);
 struct net_device *VAR_4 = VAR_3->real_dev;

 if (!(VAR_3->real_dev->flags & VAR_1))
  return -VAR_0;

 if (FUNC_1(VAR_4))
  FUNC_2(VAR_2);
 return 0;
}
