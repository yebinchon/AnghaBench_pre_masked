
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ expires; } ;
struct pps_gpio_device_data {TYPE_4__ echo_timer; scalar_t__ echo_timeout; TYPE_2__* pps; int echo_pin; } ;
struct TYPE_7__ {int mode; } ;
struct pps_device {TYPE_3__ params; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_6__ {TYPE_1__ params; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct pps_device *VAR_3, int VAR_4, void *VAR_5)
{

 struct pps_gpio_device_data *VAR_6 = VAR_5;

 switch (VAR_4) {
 case 129:
  if (VAR_3->params.mode & VAR_0)
   FUNC_1(VAR_6->echo_pin, 1);
  break;

 case 128:
  if (VAR_3->params.mode & VAR_1)
   FUNC_1(VAR_6->echo_pin, 1);
  break;
 }


 if (VAR_6->pps->params.mode & (VAR_0 | VAR_1)) {
  VAR_6->echo_timer.expires = VAR_2 + VAR_6->echo_timeout;
  FUNC_0(&VAR_6->echo_timer);
 }
}
