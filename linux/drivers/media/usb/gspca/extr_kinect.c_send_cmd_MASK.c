
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef unsigned int uint16_t ;
struct usb_device {int dummy; } ;
struct sd {unsigned int cam_tag; void* ibuf; void* obuf; } ;
struct gspca_dev {struct usb_device* dev; } ;
struct cam_hdr {int* magic; int cmd; int tag; void* len; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,...) ;
 int FUNC_2 (struct usb_device*,void*,int) ;
 int FUNC_3 (struct usb_device*,void*,unsigned int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_2, uint16_t VAR_3, void *VAR_4,
  unsigned int VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_2;
 struct usb_device *VAR_9 = VAR_2->dev;
 int VAR_10, VAR_11;
 uint8_t *VAR_12 = VAR_8->obuf;
 uint8_t *VAR_13 = VAR_8->ibuf;
 struct cam_hdr *VAR_14 = (void *)VAR_12;
 struct cam_hdr *VAR_15 = (void *)VAR_13;

 if (VAR_5 & 1 || VAR_5 > (0x400 - sizeof(*VAR_14))) {
  FUNC_6("send_cmd: Invalid command length (0x%x)\n", VAR_5);
  return -1;
 }

 VAR_14->magic[0] = 0x47;
 VAR_14->magic[1] = 0x4d;
 VAR_14->cmd = FUNC_0(VAR_3);
 VAR_14->tag = FUNC_0(VAR_8->cam_tag);
 VAR_14->len = FUNC_0(VAR_5 / 2);

 FUNC_5(VAR_12+sizeof(*VAR_14), VAR_4, VAR_5);

 VAR_10 = FUNC_3(VAR_9, VAR_12, VAR_5 + sizeof(*VAR_14));
 FUNC_1(VAR_2, VAR_0, "Control cmd=%04x tag=%04x len=%04x: %d\n",
    VAR_3,
    VAR_8->cam_tag, VAR_5, VAR_10);
 if (VAR_10 < 0) {
  FUNC_6("send_cmd: Output control transfer failed (%d)\n", VAR_10);
  return VAR_10;
 }

 do {
  VAR_11 = FUNC_2(VAR_9, VAR_13, 0x200);
 } while (VAR_11 == 0);
 FUNC_1(VAR_2, VAR_0, "Control reply: %d\n", VAR_11);
 if (VAR_11 < (int)sizeof(*VAR_15)) {
  FUNC_6("send_cmd: Input control transfer failed (%d)\n",
         VAR_11);
  return VAR_11 < 0 ? VAR_11 : -VAR_1;
 }
 VAR_11 -= sizeof(*VAR_15);

 if (VAR_15->magic[0] != 0x52 || VAR_15->magic[1] != 0x42) {
  FUNC_6("send_cmd: Bad magic %02x %02x\n",
         VAR_15->magic[0], VAR_15->magic[1]);
  return -1;
 }
 if (VAR_15->cmd != VAR_14->cmd) {
  FUNC_6("send_cmd: Bad cmd %02x != %02x\n",
         VAR_15->cmd, VAR_14->cmd);
  return -1;
 }
 if (VAR_15->tag != VAR_14->tag) {
  FUNC_6("send_cmd: Bad tag %04x != %04x\n",
         VAR_15->tag, VAR_14->tag);
  return -1;
 }
 if (FUNC_4(VAR_15->len) != (VAR_11/2)) {
  FUNC_6("send_cmd: Bad len %04x != %04x\n",
         FUNC_4(VAR_15->len), (int)(VAR_11/2));
  return -1;
 }

 if (VAR_11 > VAR_7) {
  FUNC_7("send_cmd: Data buffer is %d bytes long, but got %d bytes\n",
   VAR_7, VAR_11);
  FUNC_5(VAR_6, VAR_13+sizeof(*VAR_15), VAR_7);
 } else {
  FUNC_5(VAR_6, VAR_13+sizeof(*VAR_15), VAR_11);
 }

 VAR_8->cam_tag++;

 return VAR_11;
}
