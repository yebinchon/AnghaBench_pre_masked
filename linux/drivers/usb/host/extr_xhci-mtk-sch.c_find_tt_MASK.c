
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_tt {struct mu3h_sch_tt** hcpriv; TYPE_1__* hub; scalar_t__ multi; } ;
struct usb_device {int ttport; struct usb_tt* tt; } ;
struct mu3h_sch_tt {unsigned int tt_port; struct usb_tt* usb_tt; int ep_list; } ;
struct TYPE_2__ {int maxchild; } ;


 int VAR_0 ;
 struct mu3h_sch_tt* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct mu3h_sch_tt** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct mu3h_sch_tt**) ;
 struct mu3h_sch_tt* FUNC_4 (int,int ) ;

__attribute__((used)) static struct mu3h_sch_tt *FUNC_5(struct usb_device *VAR_2)
{
 struct usb_tt *VAR_3 = VAR_2->tt;
 struct mu3h_sch_tt *VAR_4, **VAR_5, **VAR_6;
 unsigned int VAR_7;
 bool VAR_8 = 0;

 if (!VAR_3)
  return ((void*)0);






 VAR_5 = ((void*)0);
 if (VAR_3->multi) {
  VAR_5 = VAR_3->hcpriv;
  if (!VAR_5) {
   VAR_5 = FUNC_2(VAR_3->hub->maxchild,
     sizeof(*VAR_5), VAR_1);
   if (!VAR_5)
    return FUNC_0(-VAR_0);
   VAR_3->hcpriv = VAR_5;
   VAR_8 = 1;
  }
  VAR_7 = VAR_2->ttport - 1;
  VAR_6 = &VAR_5[VAR_7];
 } else {
  VAR_7 = 0;
  VAR_6 = (struct mu3h_sch_tt **) &VAR_3->hcpriv;
 }

 VAR_4 = *VAR_6;
 if (!VAR_4) {
  VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
  if (!VAR_4) {
   if (VAR_8) {
    VAR_3->hcpriv = ((void*)0);
    FUNC_3(VAR_5);
   }
   return FUNC_0(-VAR_0);
  }
  FUNC_1(&VAR_4->ep_list);
  VAR_4->usb_tt = VAR_3;
  VAR_4->tt_port = VAR_7;
  *VAR_6 = VAR_4;
 }

 return VAR_4;
}
