
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int disabled; int * queues; scalar_t__ num_queues; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct xenvif *VAR_0)
{
 FUNC_0(VAR_0->dev, "fatal error; disabling device\n");
 VAR_0->disabled = 1;

 if (VAR_0->num_queues)
  FUNC_1(&VAR_0->queues[0]);
}
