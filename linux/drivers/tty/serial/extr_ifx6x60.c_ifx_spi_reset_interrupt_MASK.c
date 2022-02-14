
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_out; } ;
struct ifx_spi_device {int mdm_reset_wait; int mdm_reset_state; int tty_port; TYPE_1__ gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct ifx_spi_device *VAR_6 = VAR_5;
 int VAR_7 = FUNC_1(VAR_6->gpio.reset_out);
 int VAR_8 = FUNC_3(VAR_3, &VAR_6->mdm_reset_state);

 if (VAR_7 == 0) {

  FUNC_2(VAR_2, &VAR_6->mdm_reset_state);
  if (!VAR_8) {

   FUNC_4(&VAR_6->tty_port, 0);
  }
 } else {

  FUNC_0(VAR_2, &VAR_6->mdm_reset_state);
  if (VAR_8) {
   FUNC_2(VAR_1, &VAR_6->mdm_reset_state);
   FUNC_5(&VAR_6->mdm_reset_wait);
  }
 }
 return VAR_0;
}
