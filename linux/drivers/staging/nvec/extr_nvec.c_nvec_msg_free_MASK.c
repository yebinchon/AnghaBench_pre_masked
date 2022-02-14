
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {int used; } ;
struct nvec_chip {int msg_pool; int dev; struct nvec_msg tx_scratch; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,struct nvec_msg*) ;

void FUNC_2(struct nvec_chip *VAR_0, struct nvec_msg *VAR_1)
{
 if (VAR_1 != &VAR_0->tx_scratch)
  FUNC_1(VAR_0->dev, "INFO: Free %ti\n", VAR_1 - VAR_0->msg_pool);
 FUNC_0(&VAR_1->used, 0);
}
