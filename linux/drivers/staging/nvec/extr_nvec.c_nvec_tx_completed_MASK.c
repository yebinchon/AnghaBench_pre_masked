
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvec_chip {scalar_t__ state; TYPE_1__* tx; int dev; } ;
struct TYPE_2__ {scalar_t__ pos; scalar_t__ size; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nvec_chip*,int ) ;

__attribute__((used)) static void FUNC_2(struct nvec_chip *VAR_0)
{

 if (VAR_0->tx->pos != VAR_0->tx->size) {
  FUNC_0(VAR_0->dev, "premature END_TRANS, resending\n");
  VAR_0->tx->pos = 0;
  FUNC_1(VAR_0, 0);
 } else {
  VAR_0->state = 0;
 }
}
