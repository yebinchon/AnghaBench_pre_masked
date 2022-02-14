
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct urb {int status; struct usb_device* dev; struct s2255_fw* context; } ;
struct s2255_fw {int fw_loaded; int fw_size; int fw_state; int wait_fw; int * fw_urb; int pfw_data; TYPE_1__* fw; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct usb_device*,int ,int ,int,void (*) (struct urb*),struct s2255_fw*) ;
 int FUNC_6 (struct usb_device*,int) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_4)
{
 struct s2255_fw *VAR_5 = VAR_4->context;
 struct usb_device *VAR_6 = VAR_4->dev;
 int VAR_7;
 if (VAR_4->status) {
  FUNC_1(&VAR_6->dev, "URB failed with status %d\n", VAR_4->status);
  FUNC_0(&VAR_5->fw_state, VAR_2);

  FUNC_8(&VAR_5->wait_fw);
  return;
 }
 if (VAR_5->fw_urb == ((void*)0)) {
  FUNC_4(&VAR_6->dev, "disconnected\n");
  FUNC_0(&VAR_5->fw_state, VAR_2);

  FUNC_8(&VAR_5->wait_fw);
  return;
 }





 if (VAR_5->fw_loaded < VAR_5->fw_size) {
  VAR_7 = (VAR_5->fw_loaded + 512) > VAR_5->fw_size ?
      VAR_5->fw_size % 512 : 512;

  if (VAR_7 < 512)
   FUNC_3(VAR_5->pfw_data, 0, 512);

  FUNC_2(VAR_5->pfw_data,
         (char *) VAR_5->fw->data + VAR_5->fw_loaded, VAR_7);

  FUNC_5(VAR_5->fw_urb, VAR_6, FUNC_6(VAR_6, 2),
      VAR_5->pfw_data, 512,
      FUNC_9, VAR_5);
  if (FUNC_7(VAR_5->fw_urb, VAR_1) < 0) {
   FUNC_1(&VAR_6->dev, "failed submit URB\n");
   FUNC_0(&VAR_5->fw_state, VAR_2);

   FUNC_8(&VAR_5->wait_fw);
   return;
  }
  VAR_5->fw_loaded += VAR_7;
 } else
  FUNC_0(&VAR_5->fw_state, VAR_3);
 return;

}
