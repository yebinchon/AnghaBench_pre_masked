
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct fwentry {int intfw_size; int intfw; int board_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int ,int ,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct usb_device*) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_2, struct fwentry *VAR_3)
{
 int VAR_4;
 int VAR_5 = !FUNC_1(VAR_3->board_type);

 VAR_4 = FUNC_3(VAR_2, VAR_3->intfw, VAR_3->intfw_size,
       VAR_5 ? 0 : 2 * VAR_1);

 if (VAR_4 < 0) {
  FUNC_4(&VAR_2->dev,
   "downloading internal fw failed with %d\n", VAR_4);
  goto exit;
 }

 FUNC_0(VAR_0, "sending REMAP");


 if (VAR_5) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0) {
   FUNC_4(&VAR_2->dev,
    "sending REMAP failed with %d\n", VAR_4);
   goto exit;
  }
 }

 FUNC_0(VAR_0, "sleeping for 2 seconds");
 FUNC_5(2 * VAR_1 + 1);
 FUNC_6(VAR_2);

exit:
 return VAR_4;
}
