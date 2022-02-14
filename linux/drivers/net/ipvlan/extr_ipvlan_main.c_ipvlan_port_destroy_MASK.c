
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ dev; } ;
struct net_device {int dummy; } ;
struct ipvl_port {scalar_t__ mode; int ida; int backlog; int wq; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ipvl_port*) ;
 struct ipvl_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ipvl_port*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct ipvl_port *VAR_2 = FUNC_5(VAR_1);
 struct sk_buff *VAR_3;

 if (VAR_2->mode == VAR_0)
  FUNC_4(VAR_2);
 FUNC_8(VAR_1);
 FUNC_1(&VAR_2->wq);
 while ((VAR_3 = FUNC_0(&VAR_2->backlog)) != ((void*)0)) {
  if (VAR_3->dev)
   FUNC_2(VAR_3->dev);
  FUNC_7(VAR_3);
 }
 FUNC_3(&VAR_2->ida);
 FUNC_6(VAR_2);
}
