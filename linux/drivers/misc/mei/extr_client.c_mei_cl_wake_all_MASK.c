
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int wait; int ev_wait; int tx_wait; int rx_wait; struct mei_device* dev; } ;


 int FUNC_0 (struct mei_device*,struct mei_cl*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mei_cl *VAR_0)
{
 struct mei_device *VAR_1 = VAR_0->dev;


 if (FUNC_1(&VAR_0->rx_wait)) {
  FUNC_0(VAR_1, VAR_0, "Waking up reading client!\n");
  FUNC_3(&VAR_0->rx_wait);
 }

 if (FUNC_1(&VAR_0->tx_wait)) {
  FUNC_0(VAR_1, VAR_0, "Waking up writing client!\n");
  FUNC_3(&VAR_0->tx_wait);
 }

 if (FUNC_1(&VAR_0->ev_wait)) {
  FUNC_0(VAR_1, VAR_0, "Waking up waiting for event clients!\n");
  FUNC_3(&VAR_0->ev_wait);
 }

 if (FUNC_1(&VAR_0->wait)) {
  FUNC_0(VAR_1, VAR_0, "Waking up ctrl write clients!\n");
  FUNC_2(&VAR_0->wait);
 }
}
