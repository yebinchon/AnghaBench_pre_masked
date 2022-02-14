
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {int num_ports; scalar_t__ minors_reserved; TYPE_1__** port; } ;
struct TYPE_2__ {int minor; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct usb_serial *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_ports; ++VAR_3)
  FUNC_0(&VAR_0, VAR_2->port[VAR_3]->minor);
 FUNC_2(&VAR_1);
 VAR_2->minors_reserved = 0;
}
