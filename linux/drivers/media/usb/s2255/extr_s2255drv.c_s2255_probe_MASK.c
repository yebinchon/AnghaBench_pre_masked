
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_8__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; } ;
struct usb_device_id {int idProduct; } ;
struct s2255_vc {int idx; int vb_lock; int qlock; int wait_vidstatus; int wait_setmode; struct s2255_dev* dev; } ;
struct s2255_fw {int dummy; } ;
struct s2255_dev {int pid; int dsp_fw_ver; struct s2255_dev* cmdbuf; int lock; struct s2255_dev* fw_data; TYPE_3__* udev; int timer; int fw_urb; struct s2255_dev* pfw_data; TYPE_6__* fw; struct s2255_vc* vc; int wait_fw; scalar_t__ read_endpoint; struct usb_interface* interface; int cmdlock; int num_channels; } ;
typedef scalar_t__ __le32 ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct s2255_dev*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (TYPE_6__*) ;
 scalar_t__ FUNC_15 (TYPE_6__**,int ,int *) ;
 int FUNC_16 (struct s2255_dev*) ;
 int FUNC_17 (struct s2255_dev*) ;
 int FUNC_18 (int *,char*) ;
 int FUNC_19 (struct s2255_dev*) ;
 int FUNC_20 (struct s2255_dev*) ;
 int VAR_10 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ,int ) ;
 int FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (struct usb_endpoint_descriptor*) ;
 int FUNC_25 (int ) ;
 TYPE_3__* FUNC_26 (int ) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_29(struct usb_interface *VAR_11,
         const struct usb_device_id *VAR_12)
{
 struct s2255_dev *VAR_13 = ((void*)0);
 struct usb_host_interface *VAR_14;
 struct usb_endpoint_descriptor *VAR_15;
 int VAR_16;
 int VAR_17 = -VAR_2;
 __le32 *VAR_18;
 int VAR_19;


 VAR_13 = FUNC_8(sizeof(struct s2255_dev), VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_18(&VAR_11->dev, "out of memory\n");
  return -VAR_2;
 }

 VAR_13->cmdbuf = FUNC_8(VAR_6, VAR_4);
 if (VAR_13->cmdbuf == ((void*)0)) {
  FUNC_18(&VAR_11->dev, "out of memory\n");
  goto errorFWDATA1;
 }

 FUNC_0(&VAR_13->num_channels, 0);
 VAR_13->pid = VAR_12->idProduct;
 VAR_13->fw_data = FUNC_8(sizeof(struct s2255_fw), VAR_4);
 if (!VAR_13->fw_data)
  goto errorFWDATA1;
 FUNC_11(&VAR_13->lock);
 FUNC_11(&VAR_13->cmdlock);

 VAR_13->udev = FUNC_26(FUNC_6(VAR_11));
 if (VAR_13->udev == ((void*)0)) {
  FUNC_3(&VAR_11->dev, "null usb device\n");
  VAR_17 = -VAR_1;
  goto errorUDEV;
 }
 FUNC_2(&VAR_11->dev, "dev: %p, udev %p interface %p\n",
  VAR_13, VAR_13->udev, VAR_11);
 VAR_13->interface = VAR_11;

 VAR_14 = VAR_11->cur_altsetting;
 FUNC_2(&VAR_11->dev, "num EP: %d\n",
  VAR_14->desc.bNumEndpoints);
 for (VAR_16 = 0; VAR_16 < VAR_14->desc.bNumEndpoints; ++VAR_16) {
  VAR_15 = &VAR_14->endpoint[VAR_16].desc;
  if (!VAR_13->read_endpoint && FUNC_24(VAR_15)) {

   VAR_13->read_endpoint = VAR_15->bEndpointAddress;
  }
 }

 if (!VAR_13->read_endpoint) {
  FUNC_3(&VAR_11->dev, "Could not find bulk-in endpoint\n");
  goto errorEP;
 }
 FUNC_22(&VAR_13->timer, VAR_10, 0);
 FUNC_5(&VAR_13->fw_data->wait_fw);
 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  struct s2255_vc *VAR_20 = &VAR_13->vc[VAR_16];
  VAR_20->idx = VAR_16;
  VAR_20->dev = VAR_13;
  FUNC_5(&VAR_20->wait_setmode);
  FUNC_5(&VAR_20->wait_vidstatus);
  FUNC_21(&VAR_20->qlock);
  FUNC_11(&VAR_20->vb_lock);
 }

 VAR_13->fw_data->fw_urb = FUNC_23(0, VAR_4);
 if (!VAR_13->fw_data->fw_urb)
  goto errorFWURB;

 VAR_13->fw_data->pfw_data = FUNC_8(VAR_0, VAR_4);
 if (!VAR_13->fw_data->pfw_data) {
  FUNC_3(&VAR_11->dev, "out of memory!\n");
  goto errorFWDATA2;
 }

 if (FUNC_15(&VAR_13->fw_data->fw,
        VAR_3, &VAR_13->udev->dev)) {
  FUNC_3(&VAR_11->dev, "sensoray 2255 failed to get firmware\n");
  goto errorREQFW;
 }

 VAR_19 = VAR_13->fw_data->fw->size;
 VAR_18 = (__le32 *) &VAR_13->fw_data->fw->data[VAR_19 - 8];

 if (*VAR_18 != VAR_8) {
  FUNC_3(&VAR_11->dev, "Firmware invalid.\n");
  VAR_17 = -VAR_1;
  goto errorFWMARKER;
 } else {

  __le32 *VAR_21;
  VAR_21 = (__le32 *) &VAR_13->fw_data->fw->data[VAR_19 - 4];
  FUNC_12("s2255 dsp fw version %x\n", FUNC_9(*VAR_21));
  VAR_13->dsp_fw_ver = FUNC_9(*VAR_21);
  if (VAR_13->dsp_fw_ver < VAR_7)
   FUNC_12("s2255: f2255usb.bin out of date.\n");
  if (VAR_13->pid == 0x2257 &&
    VAR_13->dsp_fw_ver < VAR_9)
   FUNC_13("2257 needs firmware %d or above.\n",
    VAR_9);
 }
 FUNC_28(VAR_13->udev);

 VAR_17 = FUNC_16(VAR_13);
 if (VAR_17)
  goto errorBOARDINIT;
 FUNC_19(VAR_13);

 VAR_17 = FUNC_20(VAR_13);
 if (VAR_17)
  goto errorBOARDINIT;
 FUNC_4(&VAR_11->dev, "Sensoray 2255 detected\n");
 return 0;
errorBOARDINIT:
 FUNC_17(VAR_13);
errorFWMARKER:
 FUNC_14(VAR_13->fw_data->fw);
errorREQFW:
 FUNC_7(VAR_13->fw_data->pfw_data);
errorFWDATA2:
 FUNC_25(VAR_13->fw_data->fw_urb);
errorFWURB:
 FUNC_1(&VAR_13->timer);
errorEP:
 FUNC_27(VAR_13->udev);
errorUDEV:
 FUNC_7(VAR_13->fw_data);
 FUNC_10(&VAR_13->lock);
errorFWDATA1:
 FUNC_7(VAR_13->cmdbuf);
 FUNC_7(VAR_13);
 FUNC_13("Sensoray 2255 driver load failed: 0x%x\n", VAR_17);
 return VAR_17;
}
