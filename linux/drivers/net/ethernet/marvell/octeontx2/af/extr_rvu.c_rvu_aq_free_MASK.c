
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int dev; } ;
struct admin_queue {int res; int inst; } ;


 int FUNC_0 (int ,struct admin_queue*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct rvu *VAR_0, struct admin_queue *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(VAR_0->dev, VAR_1->inst);
 FUNC_1(VAR_0->dev, VAR_1->res);
 FUNC_0(VAR_0->dev, VAR_1);
}
