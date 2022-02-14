
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srdy; } ;
struct ifx_spi_device {int spi_timer; int flags; TYPE_1__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifx_spi_device*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct ifx_spi_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ifx_spi_device *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5->gpio.srdy);
 if (!VAR_6) {
  if (!FUNC_4(VAR_2,
          &VAR_5->flags)) {
   FUNC_2(&VAR_5->spi_timer,VAR_4 + VAR_3*VAR_0);

  }
 }
 FUNC_1(VAR_5, VAR_1);
 FUNC_3(VAR_5);
}
