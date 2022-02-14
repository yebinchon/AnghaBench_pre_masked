
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct hexline {int len; int* data; int addr; int chk; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int cpu_cs_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (struct firmware const*,struct hexline*,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_device*,int ,int*,int) ;

int FUNC_6(struct usb_device *VAR_5, const struct firmware *VAR_6, int VAR_7)
{
 struct hexline *VAR_8;
 u8 *VAR_9;
 int VAR_10, VAR_11 = 0;
 u16 VAR_12 = VAR_4[VAR_7].cpu_cs_register;

 VAR_9 = FUNC_4(sizeof(*VAR_8), VAR_3);
 if (!VAR_9)
  return -VAR_2;
 VAR_8 = (struct hexline *)VAR_9;


 VAR_9[0] = 1;
 if (FUNC_5(VAR_5, VAR_12, VAR_9, 1) != 1)
  FUNC_2("could not stop the USB controller CPU.");

 while ((VAR_10 = FUNC_1(VAR_6, VAR_8, &VAR_11)) > 0) {
  FUNC_0("writing to address 0x%04x (buffer: 0x%02x %02x)\n", VAR_8->addr, VAR_8->len, VAR_8->chk);
  VAR_10 = FUNC_5(VAR_5, VAR_8->addr, VAR_8->data, VAR_8->len);

  if (VAR_10 != VAR_8->len) {
   FUNC_2("error while transferring firmware (transferred size: %d, block size: %d)",
    VAR_10, VAR_8->len);
   VAR_10 = -VAR_0;
   break;
  }
 }
 if (VAR_10 < 0) {
  FUNC_2("firmware download failed at %d with %d",VAR_11,VAR_10);
  FUNC_3(VAR_9);
  return VAR_10;
 }

 if (VAR_10 == 0) {

  VAR_9[0] = 0;
  if (FUNC_5(VAR_5, VAR_12, VAR_9, 1) != 1) {
   FUNC_2("could not restart the USB controller CPU.");
   VAR_10 = -VAR_0;
  }
 } else
  VAR_10 = -VAR_1;

 FUNC_3(VAR_9);

 return VAR_10;
}
