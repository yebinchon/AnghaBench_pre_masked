
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ihex_binrec {int* data; int len; int addr; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_5__ {int iDownloadFile; int FirmwareMajorVersion; int FirmwareMinorVersion; int FirmwareBuildNumber; } ;
struct edgeport_serial {TYPE_4__* serial; TYPE_1__ product_info; } ;
struct device {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_7__ {TYPE_2__* dev; } ;
struct TYPE_6__ {struct device dev; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct ihex_binrec* FUNC_5 (struct ihex_binrec const*) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,struct device*) ;
 int FUNC_8 (TYPE_4__*,int,int,int ,int*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int,int,int,int *,int ,int) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_11(struct edgeport_serial *VAR_1)
{
 struct device *VAR_2 = &VAR_1->serial->dev->dev;
 const struct ihex_binrec *VAR_3;
 const struct firmware *VAR_4;
 const char *VAR_5;
 const char *VAR_6;
 int VAR_7;
 __u32 VAR_8;
 __u16 VAR_9;

 switch (VAR_1->product_info.iDownloadFile) {
  case 129:
   VAR_6 = "downloading firmware version (930)";
   VAR_5 = "edgeport/down.fw";
   break;

  case 130:
   VAR_6 = "downloading firmware version (80251)";
   VAR_5 = "edgeport/down2.fw";
   break;

  case 128:
   FUNC_3(VAR_2, "No download file specified, skipping download\n");
   return;

  default:
   return;
 }

 VAR_7 = FUNC_7(&VAR_4, VAR_5,
        &VAR_1->serial->dev->dev);
 if (VAR_7) {
  FUNC_4(VAR_2, "Failed to load image \"%s\" err %d\n",
         VAR_5, VAR_7);
  return;
 }

 VAR_3 = (const struct ihex_binrec *)VAR_4->data;
 VAR_9 = (VAR_3->data[2] << 8) | VAR_3->data[3];

 FUNC_3(VAR_2, "%s %d.%d.%d\n", VAR_6, VAR_3->data[0], VAR_3->data[1], VAR_9);

 VAR_1->product_info.FirmwareMajorVersion = VAR_3->data[0];
 VAR_1->product_info.FirmwareMinorVersion = VAR_3->data[1];
 VAR_1->product_info.FirmwareBuildNumber = FUNC_2(VAR_9);

 for (VAR_3 = FUNC_5(VAR_3); VAR_3;
      VAR_3 = FUNC_5(VAR_3)) {
  VAR_8 = FUNC_1(VAR_3->addr);
  VAR_7 = FUNC_8(VAR_1->serial,
         VAR_8 >> 16,
         VAR_8 & 0xFFFF,
         FUNC_0(VAR_3->len),
         &VAR_3->data[0]);
  if (VAR_7 < 0) {
   FUNC_4(&VAR_1->serial->dev->dev,
    "sram_write failed (%x, %x, %d)\n",
    VAR_8 >> 16, VAR_8 & 0xFFFF,
    FUNC_0(VAR_3->len));
   break;
  }
 }

 FUNC_3(VAR_2, "sending exec_dl_code\n");
 VAR_7 = FUNC_9 (VAR_1->serial->dev,
        FUNC_10(VAR_1->serial->dev, 0),
        VAR_0,
        0x40, 0x4000, 0x0001, ((void*)0), 0, 3000);

 FUNC_6(VAR_4);
}
