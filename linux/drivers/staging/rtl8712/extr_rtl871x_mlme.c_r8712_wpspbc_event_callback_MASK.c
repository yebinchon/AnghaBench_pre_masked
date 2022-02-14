
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int wps_hw_pbc_pressed; } ;
struct _adapter {TYPE_1__ securitypriv; } ;



void FUNC_0(struct _adapter *VAR_0, u8 *VAR_1)
{
 if (!VAR_0->securitypriv.wps_hw_pbc_pressed)
  VAR_0->securitypriv.wps_hw_pbc_pressed = 1;
}
