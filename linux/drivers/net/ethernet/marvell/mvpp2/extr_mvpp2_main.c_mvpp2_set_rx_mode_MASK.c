
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int mc; int uc; } ;
struct mvpp2_port {int id; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct mvpp2_port*,int *) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct mvpp2_port*,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct mvpp2_port* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_6)
{
 struct mvpp2_port *VAR_7 = FUNC_5(VAR_6);


 FUNC_1(VAR_7);

 if (VAR_6->flags & VAR_1) {
  FUNC_3(VAR_7, 1);
  return;
 }

 FUNC_3(VAR_7, 0);

 if (FUNC_6(VAR_6) > VAR_5 ||
     FUNC_0(VAR_7, &VAR_6->uc))
  FUNC_2(VAR_7->priv, VAR_7->id,
       VAR_3, 1);

 if (VAR_6->flags & VAR_0) {
  FUNC_2(VAR_7->priv, VAR_7->id,
       VAR_2, 1);
  return;
 }

 if (FUNC_4(VAR_6) > VAR_4 ||
     FUNC_0(VAR_7, &VAR_6->mc))
  FUNC_2(VAR_7->priv, VAR_7->id,
       VAR_2, 1);
}
