
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ihex_binrec {int* data; int len; int addr; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_6__ {int MajorVersion; int MinorVersion; int BuildNumber; } ;
struct TYPE_5__ {int iDownloadFile; } ;
struct edgeport_serial {TYPE_4__* serial; TYPE_2__ boot_descriptor; TYPE_1__ product_info; } ;
struct device {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_8__ {TYPE_3__* dev; } ;
struct TYPE_7__ {struct device dev; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct ihex_binrec* FUNC_4 (struct ihex_binrec const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,struct device*) ;
 int FUNC_8 (TYPE_4__*,int,int,int ,int*) ;

__attribute__((used)) static void FUNC_9(struct edgeport_serial *VAR_0)
{
 struct device *VAR_1 = &VAR_0->serial->dev->dev;
 __u32 VAR_2;
 __u32 VAR_3;
 __u8 VAR_4;
 __u8 VAR_5;
 __u16 VAR_6;
 __u32 VAR_7;
 const struct ihex_binrec *VAR_8;
 const struct firmware *VAR_9;
 const char *VAR_10;
 int VAR_11;

 switch (VAR_0->product_info.iDownloadFile) {
 case 128:
  VAR_10 = "edgeport/boot.fw";
  break;
 case 129:
  VAR_10 = "edgeport/boot2.fw";
  break;
 default:
  return;
 }

 VAR_11 = FUNC_7(&VAR_9, VAR_10,
      &VAR_0->serial->dev->dev);
 if (VAR_11) {
  FUNC_3(VAR_1, "Failed to load image \"%s\" err %d\n",
         VAR_10, VAR_11);
  return;
 }

 VAR_8 = (const struct ihex_binrec *)VAR_9->data;
 VAR_4 = VAR_8->data[0];
 VAR_5 = VAR_8->data[1];
 VAR_6 = (VAR_8->data[2] << 8) | VAR_8->data[3];


 VAR_2 = (VAR_0->boot_descriptor.MajorVersion << 24) +
       (VAR_0->boot_descriptor.MinorVersion << 16) +
        FUNC_5(VAR_0->boot_descriptor.BuildNumber);

 VAR_3 = (VAR_4 << 24) +
       (VAR_5 << 16) +
        VAR_6;

 FUNC_2(VAR_1, "Current Boot Image version %d.%d.%d\n",
     VAR_0->boot_descriptor.MajorVersion,
     VAR_0->boot_descriptor.MinorVersion,
     FUNC_5(VAR_0->boot_descriptor.BuildNumber));


 if (VAR_3 > VAR_2) {
  FUNC_2(VAR_1, "**Update Boot Image from %d.%d.%d to %d.%d.%d\n",
      VAR_0->boot_descriptor.MajorVersion,
      VAR_0->boot_descriptor.MinorVersion,
      FUNC_5(VAR_0->boot_descriptor.BuildNumber),
      VAR_4, VAR_5, VAR_6);

  FUNC_2(VAR_1, "Downloading new Boot Image\n");

  for (VAR_8 = FUNC_4(VAR_8); VAR_8;
       VAR_8 = FUNC_4(VAR_8)) {
   VAR_7 = FUNC_1(VAR_8->addr);
   VAR_11 = FUNC_8(VAR_0->serial,
          VAR_7 >> 16,
          VAR_7 & 0xFFFF,
          FUNC_0(VAR_8->len),
          &VAR_8->data[0]);
   if (VAR_11 < 0) {
    FUNC_3(&VAR_0->serial->dev->dev,
     "rom_write failed (%x, %x, %d)\n",
     VAR_7 >> 16, VAR_7 & 0xFFFF,
     FUNC_0(VAR_8->len));
    break;
   }
  }
 } else {
  FUNC_2(VAR_1, "Boot Image -- already up to date\n");
 }
 FUNC_6(VAR_9);
}
