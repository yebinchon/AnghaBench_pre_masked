
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct renesas_usb3 {int gadget; TYPE_1__* driver; scalar_t__ disabled_count; } ;
struct TYPE_2__ {int (* disconnect ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct renesas_usb3*,int ,int ) ;
 int FUNC_2 (struct renesas_usb3*,int) ;
 int FUNC_3 (struct renesas_usb3*) ;
 int FUNC_4 (struct renesas_usb3*) ;
 int FUNC_5 (struct renesas_usb3*,int ) ;

__attribute__((used)) static void FUNC_6(struct renesas_usb3 *VAR_14)
{
 VAR_14->disabled_count = 0;
 FUNC_5(VAR_14, 0);
 FUNC_1(VAR_14, VAR_0, VAR_1);
 FUNC_4(VAR_14);
 FUNC_2(VAR_14, VAR_5 | VAR_11 |
      VAR_10 | VAR_8 |
      VAR_13 | VAR_12 |
      VAR_9 | VAR_6 |
      VAR_4 | VAR_7);
 FUNC_1(VAR_14, VAR_3, VAR_2);
 FUNC_3(VAR_14);

 if (VAR_14->driver)
  VAR_14->driver->disconnect(&VAR_14->gadget);
}
