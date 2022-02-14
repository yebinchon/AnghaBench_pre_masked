
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int devid; int chiprev; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; } ;
struct bootrom_id_le {int chiprev; int chip; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_usbdev_info*,int ,struct bootrom_id_le*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct brcmf_usbdev_info *VAR_4)
{
 struct bootrom_id_le VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_0(VAR_3, "Enter\n");

 if (VAR_4 == ((void*)0))
  return 0;


 VAR_5.chip = FUNC_2(0xDEAD);
 FUNC_1(VAR_4, VAR_1, &VAR_5, sizeof(VAR_5));

 VAR_6 = FUNC_3(VAR_5.chip);
 VAR_7 = FUNC_3(VAR_5.chiprev);

 if ((VAR_6 & 0x4300) == 0x4300)
  FUNC_0(VAR_3, "chip %x rev 0x%x\n", VAR_6, VAR_7);
 else
  FUNC_0(VAR_3, "chip %d rev 0x%x\n", VAR_6, VAR_7);
 if (VAR_6 == VAR_0) {
  FUNC_0(VAR_3, "firmware already downloaded\n");
  FUNC_1(VAR_4, VAR_2, &VAR_5, sizeof(VAR_5));
  return 0;
 } else {
  VAR_4->bus_pub.devid = VAR_6;
  VAR_4->bus_pub.chiprev = VAR_7;
 }
 return 1;
}
