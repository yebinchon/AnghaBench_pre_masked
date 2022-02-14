
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_num; } ;
struct sisusb_usb_data {int lock; int scrbuf_size; scalar_t__ scrbuf; int con_rolled_over; } ;


 int FUNC_0 (int *) ;
 struct sisusb_usb_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vc_data*,struct sisusb_usb_data*) ;
 int FUNC_3 (struct sisusb_usb_data*,struct vc_data*) ;
 int FUNC_4 (struct vc_data*,int,int ,void*,int ) ;

__attribute__((used)) static void
FUNC_5(struct vc_data *VAR_0, int VAR_1)
{
 struct sisusb_usb_data *VAR_2;

 VAR_2 = FUNC_1(VAR_0->vc_num);
 if (!VAR_2)
  return;



 if (FUNC_2(VAR_0, VAR_2)) {
  FUNC_0(&VAR_2->lock);
  return;
 }

 FUNC_4(VAR_0, VAR_1, VAR_2->con_rolled_over,
   (void *)VAR_2->scrbuf, VAR_2->scrbuf_size);

 FUNC_3(VAR_2, VAR_0);

 FUNC_0(&VAR_2->lock);
}
