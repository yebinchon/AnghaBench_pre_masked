
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_fpix {int work_struct; } ;
struct gspca_dev {TYPE_1__** urb; int dev; } ;
struct TYPE_2__ {int pipe; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_2)
{
 struct usb_fpix *VAR_3 = (struct usb_fpix *) VAR_2;
 int VAR_4, VAR_5;


 VAR_4 = FUNC_0(VAR_2, 0);
 if (VAR_4 < 0) {
  FUNC_1("init failed %d\n", VAR_4);
  return VAR_4;
 }



 VAR_4 = FUNC_3(VAR_2->dev,
   VAR_2->urb[0]->pipe,
   VAR_2->urb[0]->transfer_buffer,
   VAR_0, &VAR_5,
   VAR_1);
 if (VAR_4 < 0) {
  FUNC_1("usb_bulk_msg failed %d\n", VAR_4);
  return VAR_4;
 }


 VAR_4 = FUNC_0(VAR_2, 1);
 if (VAR_4 < 0) {
  FUNC_1("frame request failed %d\n", VAR_4);
  return VAR_4;
 }


 FUNC_4(VAR_2->dev, VAR_2->urb[0]->pipe);

 FUNC_2(&VAR_3->work_struct);

 return 0;
}
