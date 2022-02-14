
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9170 {int cmd_wait; int cmd_lock; scalar_t__ readlen; int tx_anch; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar9170*,int ,int ) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ar9170 *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, VAR_0, VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_4(&VAR_2->udev->dev, "kill pending tx urbs.\n");

 FUNC_7(&VAR_2->tx_anch);
 FUNC_2(VAR_2);


 FUNC_5(&VAR_2->cmd_lock);
 VAR_2->readlen = 0;
 FUNC_6(&VAR_2->cmd_lock);
 FUNC_3(&VAR_2->cmd_wait);






}
