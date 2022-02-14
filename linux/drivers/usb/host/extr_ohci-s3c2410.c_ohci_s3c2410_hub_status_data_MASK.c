
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct s3c2410_hcd_port {int oc_changed; int flags; } ;
struct s3c2410_hcd_info {struct s3c2410_hcd_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct usb_hcd*,char*) ;
 struct s3c2410_hcd_info* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int
FUNC_3(struct usb_hcd *VAR_1, char *VAR_2)
{
 struct s3c2410_hcd_info *VAR_3 = FUNC_2(VAR_1);
 struct s3c2410_hcd_port *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
  return VAR_5;

 VAR_4 = &VAR_3->port[0];



 for (VAR_6 = 0; VAR_6 < 2; VAR_4++, VAR_6++) {
  if (VAR_4->oc_changed == 1 &&
      VAR_4->flags & VAR_0) {
   FUNC_0(VAR_1->self.controller,
    "oc change on port %d\n", VAR_6);

   if (VAR_5 < 1)
    VAR_5 = 1;

   VAR_2[0] |= 1<<(VAR_6+1);
  }
 }

 return VAR_5;
}
