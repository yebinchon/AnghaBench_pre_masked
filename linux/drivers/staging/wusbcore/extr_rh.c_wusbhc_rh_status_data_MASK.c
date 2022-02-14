
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int ports_max; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {scalar_t__ change; } ;


 size_t FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,size_t) ;
 struct wusbhc* FUNC_2 (struct usb_hcd*) ;
 TYPE_1__* FUNC_3 (struct wusbhc*,size_t) ;

int FUNC_4(struct usb_hcd *VAR_0, char *VAR_1)
{
 struct wusbhc *VAR_2 = FUNC_2(VAR_0);
 size_t VAR_3, VAR_4, VAR_5 = 0;



 VAR_4 = FUNC_0(VAR_2->ports_max + 1, 8);


 FUNC_1(VAR_1, 0, VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_2->ports_max; VAR_3++) {

  if (FUNC_3(VAR_2, VAR_3)->change) {
   const int VAR_6 = VAR_3+1;

   VAR_1[VAR_6/8] |= (1 << (VAR_6 % 8));
   VAR_5++;
  }
 }

 return VAR_5 ? VAR_4 : 0;
}
