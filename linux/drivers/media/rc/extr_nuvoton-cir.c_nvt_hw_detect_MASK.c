
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvt_dev {int chip_major; int chip_minor; int cr_efdr; int cr_efir; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,char const*,int,int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 void* FUNC_3 (struct nvt_dev*,int ) ;
 int FUNC_4 (struct nvt_dev*) ;
 int FUNC_5 (struct nvt_dev*) ;
 char* FUNC_6 (struct nvt_dev*,int) ;
 struct device* FUNC_7 (struct nvt_dev*) ;

__attribute__((used)) static int FUNC_8(struct nvt_dev *VAR_6)
{
 struct device *VAR_7 = FUNC_7(VAR_6);
 const char *VAR_8;
 int VAR_9;

 FUNC_5(VAR_6);


 VAR_6->chip_major = FUNC_3(VAR_6, VAR_0);
 if (VAR_6->chip_major == 0xff) {
  FUNC_4(VAR_6);
  VAR_6->cr_efir = VAR_3;
  VAR_6->cr_efdr = VAR_2;
  FUNC_5(VAR_6);
  VAR_6->chip_major = FUNC_3(VAR_6, VAR_0);
 }
 VAR_6->chip_minor = FUNC_3(VAR_6, VAR_1);

 FUNC_4(VAR_6);

 VAR_9 = VAR_6->chip_major << 8 | VAR_6->chip_minor;
 if (VAR_9 == VAR_5) {
  FUNC_0(VAR_7, "No device found on either EFM port\n");
  return -VAR_4;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_9);


 if (!VAR_8)
  FUNC_2(VAR_7,
    "unknown chip, id: 0x%02x 0x%02x, it may not work...",
    VAR_6->chip_major, VAR_6->chip_minor);
 else
  FUNC_1(VAR_7, "found %s or compatible: chip id: 0x%02x 0x%02x",
    VAR_8, VAR_6->chip_major, VAR_6->chip_minor);

 return 0;
}
