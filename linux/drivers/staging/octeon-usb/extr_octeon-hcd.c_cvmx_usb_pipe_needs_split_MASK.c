
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prtspd; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct octeon_hcd {TYPE_2__ usbcx_hprt; } ;
struct cvmx_usb_pipe {scalar_t__ device_speed; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct octeon_hcd *VAR_1,
         struct cvmx_usb_pipe *VAR_2)
{
 return VAR_2->device_speed != VAR_0 &&
        VAR_1->usbcx_hprt.s.prtspd == VAR_0;
}
