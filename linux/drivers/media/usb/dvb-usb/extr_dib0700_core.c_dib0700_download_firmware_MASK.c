
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_device {int dummy; } ;
struct hexline {int addr; int len; int chk; int type; int data; } ;
struct firmware {int dummy; } ;
struct TYPE_12__ {int num_adapters; TYPE_5__* adapter; } ;
struct TYPE_11__ {TYPE_4__* fe; } ;
struct TYPE_7__ {int buffersize; } ;
struct TYPE_8__ {TYPE_1__ bulk; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_10__ {TYPE_3__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 int FUNC_1 (struct usb_device*,int) ;
 int FUNC_2 (struct firmware const*,struct hexline*,int*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int ) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int) ;
 int VAR_9 ;
 int FUNC_9 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_10 (struct usb_device*,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_device*,int) ;

int FUNC_13(struct usb_device *VAR_10, const struct firmware *VAR_11)
{
 struct hexline VAR_12;
 int VAR_13 = 0, VAR_14, VAR_15, VAR_16, VAR_17;
 u8 *VAR_18;
 u32 VAR_19;

 VAR_18 = FUNC_6(260, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 while ((VAR_14 = FUNC_2(VAR_11, &VAR_12, &VAR_13)) > 0) {
  FUNC_0("writing to address 0x%08x (buffer: 0x%02x %02x)\n",
    VAR_12.addr, VAR_12.len, VAR_12.chk);

  VAR_18[0] = VAR_12.len;
  VAR_18[1] = (VAR_12.addr >> 8) & 0xff;
  VAR_18[2] = VAR_12.addr & 0xff;
  VAR_18[3] = VAR_12.type;
  FUNC_7(&VAR_18[4],VAR_12.data,VAR_12.len);
  VAR_18[4+VAR_12.len] = VAR_12.chk;

  VAR_14 = FUNC_9(VAR_10,
   FUNC_12(VAR_10, 0x01),
   VAR_18,
   VAR_12.len + 5,
   &VAR_15,
   1000);

  if (VAR_14 < 0) {
   FUNC_3("firmware download failed at %d with %d",VAR_13,VAR_14);
   goto out;
  }
 }

 if (VAR_14 == 0) {

  if ((VAR_14 = FUNC_1(VAR_10, 0x70000000)) == 0) {
   FUNC_4("firmware started successfully.");
   FUNC_8(500);
  }
 } else
  VAR_14 = -VAR_0;


 if (VAR_9 < 1)
  VAR_9 = 1;


 FUNC_10(VAR_10, FUNC_11(VAR_10, 0),
      VAR_3,
      VAR_6 | VAR_5, 0, 0,
      VAR_18, 16, VAR_4);
 VAR_19 = (VAR_18[8] << 24) | (VAR_18[9] << 16) | (VAR_18[10] << 8) | VAR_18[11];



 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  for (VAR_17 = 0; VAR_17 < VAR_8[VAR_16].num_adapters;
    VAR_17++) {
   if (VAR_19 >= 0x10201) {
    VAR_8[VAR_16].adapter[VAR_17].fe[0].stream.u.bulk.buffersize = 188*VAR_9;
   } else {


    VAR_8[VAR_16].adapter[VAR_17].fe[0].stream.u.bulk.buffersize = ((188*VAR_9+188/2)/512)*512;
    if (VAR_8[VAR_16].adapter[VAR_17].fe[0].stream.u.bulk.buffersize < 512)
     VAR_8[VAR_16].adapter[VAR_17].fe[0].stream.u.bulk.buffersize = 512;
   }
  }
 }
out:
 FUNC_5(VAR_18);
 return VAR_14;
}
