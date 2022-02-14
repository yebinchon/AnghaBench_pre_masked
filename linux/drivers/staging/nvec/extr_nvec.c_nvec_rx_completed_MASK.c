
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct nvec_chip {int rx_work; int ec_transfer; TYPE_1__* rx; scalar_t__ state; int rx_lock; int rx_data; int dev; } ;
struct TYPE_4__ {scalar_t__ pos; scalar_t__* data; int node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nvec_chip*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct nvec_chip *VAR_1)
{
 if (VAR_1->rx->pos != FUNC_5(VAR_1->rx)) {
  FUNC_1(VAR_1->dev, "RX incomplete: Expected %u bytes, got %u\n",
   (uint)FUNC_5(VAR_1->rx),
   (uint)VAR_1->rx->pos);

  FUNC_3(VAR_1, VAR_1->rx);
  VAR_1->state = 0;


  if (VAR_1->rx->data[0] == VAR_0)
   FUNC_0(&VAR_1->ec_transfer);

  return;
 }

 FUNC_7(&VAR_1->rx_lock);





 FUNC_2(&VAR_1->rx->node, &VAR_1->rx_data);

 FUNC_8(&VAR_1->rx_lock);

 VAR_1->state = 0;

 if (!FUNC_4(VAR_1->rx))
  FUNC_0(&VAR_1->ec_transfer);

 FUNC_6(&VAR_1->rx_work);
}
