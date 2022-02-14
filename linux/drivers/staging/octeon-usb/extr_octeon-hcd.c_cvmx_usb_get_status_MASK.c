
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prtconnsts; int prtspd; int prtpwr; int prtovrcurract; int prtena; } ;
union cvmx_usbcx_hprt {TYPE_1__ s; int u32; } ;
struct TYPE_4__ {scalar_t__ connected; } ;
struct octeon_hcd {TYPE_2__ port_status; int index; } ;
struct cvmx_usb_port_status {scalar_t__ connected; int connect_change; int port_speed; int port_powered; int port_over_current; int port_enabled; } ;
typedef int result ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct octeon_hcd*,int ) ;
 int FUNC_2 (struct cvmx_usb_port_status*,int ,int) ;

__attribute__((used)) static struct cvmx_usb_port_status FUNC_3(struct octeon_hcd *VAR_0)
{
 union cvmx_usbcx_hprt VAR_1;
 struct cvmx_usb_port_status VAR_2;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));

 VAR_1.u32 = FUNC_1(VAR_0, FUNC_0(VAR_0->index));
 VAR_2.port_enabled = VAR_1.s.prtena;
 VAR_2.port_over_current = VAR_1.s.prtovrcurract;
 VAR_2.port_powered = VAR_1.s.prtpwr;
 VAR_2.port_speed = VAR_1.s.prtspd;
 VAR_2.connected = VAR_1.s.prtconnsts;
 VAR_2.connect_change =
  VAR_2.connected != VAR_0->port_status.connected;

 return VAR_2;
}
