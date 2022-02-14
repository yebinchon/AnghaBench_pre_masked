
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tuner_sif_gpio; TYPE_1__* tuner_gpio; int name; } ;
struct cx231xx {scalar_t__ model; TYPE_2__ board; int dev; } ;
struct TYPE_3__ {scalar_t__ bit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx231xx*,scalar_t__,int) ;
 int FUNC_1 (struct cx231xx*,int,int) ;
 int FUNC_2 (struct cx231xx*,int ) ;
 int FUNC_3 (int ,char*,int ,scalar_t__) ;

void FUNC_4(struct cx231xx *VAR_2)
{
 FUNC_3(VAR_2->dev, "Identified as %s (card=%d)\n",
  VAR_2->board.name, VAR_2->model);

 if (VAR_1 == VAR_2->model) {

  FUNC_1(VAR_2, 0x03, 0x01);
 }


 if (VAR_2->board.tuner_gpio) {
  FUNC_0(VAR_2, VAR_2->board.tuner_gpio->bit, 1);
  FUNC_1(VAR_2, VAR_2->board.tuner_gpio->bit, 1);
 }
 if (VAR_2->board.tuner_sif_gpio >= 0)
  FUNC_0(VAR_2, VAR_2->board.tuner_sif_gpio, 1);




 FUNC_2(VAR_2, VAR_0);




}
