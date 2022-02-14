
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct max3421_hcd {int port_status; int spi_thread; int todo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct usb_hcd *VAR_4)
{
 struct max3421_hcd *VAR_5 = FUNC_0(VAR_4);

 VAR_5->port_status &= ~(VAR_1 |
          VAR_2);
 VAR_5->port_status |= VAR_3;
 FUNC_1(VAR_0, &VAR_5->todo);
 FUNC_2(VAR_5->spi_thread);
 return 0;
}
