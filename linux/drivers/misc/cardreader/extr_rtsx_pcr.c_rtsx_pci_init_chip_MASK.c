
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_slot {int dummy; } ;
struct rtsx_pcr {int slots; int state; int flags; int card_drive_sel; int sd30_drive_sel_3v3; int sd30_drive_sel_1v8; int aspm_en; TYPE_1__* ops; int num_slots; int ic_version; int pcr_mutex; int lock; } ;
struct TYPE_2__ {int (* fetch_vendor_settings ) (struct rtsx_pcr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtsx_pcr*,char*,int,...) ;
 int FUNC_5 (struct rtsx_pcr*) ;
 int FUNC_6 (struct rtsx_pcr*) ;
 int FUNC_7 (struct rtsx_pcr*) ;
 int FUNC_8 (struct rtsx_pcr*) ;
 int FUNC_9 (struct rtsx_pcr*) ;
 int FUNC_10 (struct rtsx_pcr*) ;
 int FUNC_11 (struct rtsx_pcr*) ;
 int FUNC_12 (struct rtsx_pcr*) ;
 int FUNC_13 (struct rtsx_pcr*) ;
 int FUNC_14 (struct rtsx_pcr*) ;
 int FUNC_15 (struct rtsx_pcr*) ;
 int FUNC_16 (struct rtsx_pcr*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct rtsx_pcr*) ;

__attribute__((used)) static int FUNC_19(struct rtsx_pcr *VAR_3)
{
 int VAR_4;

 FUNC_17(&VAR_3->lock);
 FUNC_3(&VAR_3->pcr_mutex);

 switch (FUNC_0(VAR_3)) {
 default:
 case 0x5209:
  FUNC_8(VAR_3);
  break;

 case 0x5229:
  FUNC_10(VAR_3);
  break;

 case 0x5289:
  FUNC_6(VAR_3);
  break;

 case 0x5227:
  FUNC_9(VAR_3);
  break;

 case 0x522A:
  FUNC_11(VAR_3);
  break;

 case 0x5249:
  FUNC_12(VAR_3);
  break;

 case 0x524A:
  FUNC_13(VAR_3);
  break;

 case 0x525A:
  FUNC_14(VAR_3);
  break;

 case 0x5287:
  FUNC_7(VAR_3);
  break;

 case 0x5286:
  FUNC_5(VAR_3);
  break;
 case 0x5260:
  FUNC_15(VAR_3);
  break;
 }

 FUNC_4(VAR_3, "PID: 0x%04x, IC version: 0x%02x\n",
   FUNC_0(VAR_3), VAR_3->ic_version);

 VAR_3->slots = FUNC_1(VAR_3->num_slots, sizeof(struct rtsx_slot),
   VAR_1);
 if (!VAR_3->slots)
  return -VAR_0;

 if (VAR_3->ops->fetch_vendor_settings)
  VAR_3->ops->fetch_vendor_settings(VAR_3);

 FUNC_4(VAR_3, "pcr->aspm_en = 0x%x\n", VAR_3->aspm_en);
 FUNC_4(VAR_3, "pcr->sd30_drive_sel_1v8 = 0x%x\n",
   VAR_3->sd30_drive_sel_1v8);
 FUNC_4(VAR_3, "pcr->sd30_drive_sel_3v3 = 0x%x\n",
   VAR_3->sd30_drive_sel_3v3);
 FUNC_4(VAR_3, "pcr->card_drive_sel = 0x%x\n",
   VAR_3->card_drive_sel);
 FUNC_4(VAR_3, "pcr->flags = 0x%x\n", VAR_3->flags);

 VAR_3->state = VAR_2;
 VAR_4 = FUNC_16(VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3->slots);
  return VAR_4;
 }

 return 0;
}
