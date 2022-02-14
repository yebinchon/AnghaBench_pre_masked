
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {scalar_t__ vc_origin; scalar_t__ vc_screenbuf; scalar_t__ vc_screenbuf_size; int vc_num; } ;
struct sisusb_usb_data {int lock; scalar_t__ scrbuf_size; scalar_t__ scrbuf; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 struct sisusb_usb_data* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vc_data*,struct sisusb_usb_data*) ;

__attribute__((used)) static void
FUNC_5(struct vc_data *VAR_0)
{
 struct sisusb_usb_data *VAR_1;
 int VAR_2;





 VAR_1 = FUNC_3(VAR_0->vc_num);
 if (!VAR_1)
  return;



 if (FUNC_4(VAR_0, VAR_1)) {
  FUNC_2(&VAR_1->lock);
  return;
 }


 VAR_2 = FUNC_1((int)VAR_0->vc_screenbuf_size,
   (int)(VAR_1->scrbuf + VAR_1->scrbuf_size - VAR_0->vc_origin));


 FUNC_0((u16 *)VAR_0->vc_screenbuf, (u16 *)VAR_0->vc_origin, VAR_2);

 FUNC_2(&VAR_1->lock);
}
