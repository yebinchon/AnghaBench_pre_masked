
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int po; int reset; } ;
struct ifx_spi_device {scalar_t__ mdm_reset_state; TYPE_2__* spi_dev; int mdm_reset_wait; TYPE_1__ gpio; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ifx_spi_device *VAR_3)
{
 int VAR_4;






 FUNC_3(VAR_2, &VAR_3->mdm_reset_state);
 FUNC_1(VAR_3->gpio.po, 0);
 FUNC_1(VAR_3->gpio.reset, 0);
 FUNC_2(25);
 FUNC_1(VAR_3->gpio.reset, 1);
 FUNC_2(1);
 FUNC_1(VAR_3->gpio.po, 1);
 FUNC_2(1);
 FUNC_1(VAR_3->gpio.po, 0);
 VAR_4 = FUNC_5(VAR_3->mdm_reset_wait,
     FUNC_4(VAR_1,
       &VAR_3->mdm_reset_state),
     VAR_0);
 if (!VAR_4)
  FUNC_0(&VAR_3->spi_dev->dev, "Modem reset timeout: (state:%lx)",
    VAR_3->mdm_reset_state);

 VAR_3->mdm_reset_state = 0;
 return VAR_4;
}
