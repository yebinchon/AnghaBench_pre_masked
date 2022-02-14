
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct q6v5 {int running; int dev; int q6v5; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct q6v5*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct rproc *VAR_1)
{
 struct q6v5 *VAR_2 = (struct q6v5 *)VAR_1->priv;
 int VAR_3;

 VAR_2->running = 0;

 VAR_3 = FUNC_2(&VAR_2->q6v5);
 if (VAR_3 == -VAR_0)
  FUNC_0(VAR_2->dev, "timed out on wait\n");

 FUNC_1(VAR_2);

 return 0;
}
