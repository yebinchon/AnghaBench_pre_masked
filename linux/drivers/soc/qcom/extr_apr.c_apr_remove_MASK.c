
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int dev; } ;
struct apr {int rxwq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct apr* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rpmsg_device *VAR_1)
{
 struct apr *VAR_2 = FUNC_1(&VAR_1->dev);

 FUNC_2(&VAR_1->dev, ((void*)0), VAR_0);
 FUNC_3(VAR_2->rxwq);
 FUNC_0(VAR_2->rxwq);
}
