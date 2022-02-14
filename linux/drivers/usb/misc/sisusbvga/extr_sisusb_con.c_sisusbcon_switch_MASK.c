
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {unsigned long vc_origin; scalar_t__ vc_screenbuf; scalar_t__ vc_screenbuf_size; int vc_num; } ;
struct sisusb_usb_data {unsigned long scrbuf; unsigned long scrbuf_size; int lock; TYPE_1__* sisusb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sisusb_usb_data*,char*,int ,int) ;
 struct sisusb_usb_data* FUNC_5 (int ) ;
 int FUNC_6 (struct sisusb_usb_data*,struct vc_data*,int ,int ) ;
 scalar_t__ FUNC_7 (struct vc_data*,struct sisusb_usb_data*) ;

__attribute__((used)) static int
FUNC_8(struct vc_data *VAR_0)
{
 struct sisusb_usb_data *VAR_1;
 int VAR_2;






 VAR_1 = FUNC_5(VAR_0->vc_num);
 if (!VAR_1)
  return 0;




 if (FUNC_7(VAR_0, VAR_1)) {
  FUNC_3(&VAR_1->lock);
  return 0;
 }





 if (VAR_0->vc_origin == (unsigned long)VAR_0->vc_screenbuf) {
  FUNC_3(&VAR_1->lock);
  FUNC_0(&VAR_1->sisusb_dev->dev, "ASSERT ORIGIN != SCREENBUF!\n");
  return 0;
 }


 VAR_2 = FUNC_2((int)VAR_0->vc_screenbuf_size,
   (int)(VAR_1->scrbuf + VAR_1->scrbuf_size - VAR_0->vc_origin));


 FUNC_1((u16 *)VAR_0->vc_origin, (u16 *)VAR_0->vc_screenbuf, VAR_2);

 FUNC_4(VAR_1, (char *)VAR_0->vc_origin,
   FUNC_6(VAR_1, VAR_0, 0, 0), VAR_2);

 FUNC_3(&VAR_1->lock);

 return 0;
}
