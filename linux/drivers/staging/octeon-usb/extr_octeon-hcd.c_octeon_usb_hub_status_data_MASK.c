
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct octeon_hcd {int lock; } ;
struct cvmx_usb_port_status {int connect_change; } ;


 struct cvmx_usb_port_status FUNC_0 (struct octeon_hcd*) ;
 struct octeon_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_0, char *VAR_1)
{
 struct octeon_hcd *VAR_2 = FUNC_1(VAR_0);
 struct cvmx_usb_port_status VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_4);
 VAR_1[0] = VAR_3.connect_change << 1;

 return VAR_1[0] != 0;
}
