
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gbe_slave {int slave_num; int link_state; int open; } ;
struct gbe_priv {int dummy; } ;


 int FUNC_0 (struct gbe_priv*,int) ;
 scalar_t__ FUNC_1 (struct gbe_slave*) ;
 scalar_t__ FUNC_2 (struct gbe_slave*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct gbe_slave*) ;
 int FUNC_5 (struct gbe_priv*,int*) ;
 int FUNC_6 (struct gbe_priv*,struct net_device*,struct gbe_slave*,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct gbe_priv *VAR_0,
       struct gbe_slave *VAR_1,
       struct net_device *VAR_2)
{
 bool VAR_3 = 1, VAR_4;
 int VAR_5 = VAR_1->slave_num, VAR_6;

 if (!VAR_1->open)
  return;

 if (FUNC_1(VAR_1))
  FUNC_5(VAR_0,
          &VAR_3);
 if (FUNC_2(VAR_1))
  VAR_3 =
  FUNC_7(FUNC_0(VAR_0, VAR_5), VAR_5);

 VAR_4 = FUNC_4(VAR_1);
 VAR_6 = VAR_4 & VAR_3;

 if (FUNC_3(&VAR_1->link_state, VAR_6) != VAR_6)
  FUNC_6(VAR_0, VAR_2, VAR_1,
           VAR_6);
}
