
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_chipcommon {TYPE_1__* dev; } ;
struct ssb_bus {int chip_id; } ;
struct pmu_res_updown_tab_entry {int resource; int updown; } ;
struct pmu_res_depend_tab_entry {int resource; int task; int depend; } ;
struct TYPE_2__ {int dev; struct ssb_bus* bus; } ;


 unsigned int FUNC_0 (void*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_3 (struct ssb_chipcommon*,int ) ;
 int FUNC_4 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_5 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_6 (int ,char*,int) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static void FUNC_7(struct ssb_chipcommon *VAR_17)
{
 struct ssb_bus *VAR_18 = VAR_17->dev->bus;
 u32 VAR_19 = 0, VAR_20 = 0;
 unsigned int VAR_21;
 const struct pmu_res_updown_tab_entry *VAR_22 = ((void*)0);
 unsigned int VAR_23 = 0;
 const struct pmu_res_depend_tab_entry *VAR_24 = ((void*)0);
 unsigned int VAR_25 = 0;

 switch (VAR_18->chip_id) {
 case 0x4312:
   VAR_19 = 0xCBB;
   break;
 case 0x4322:
 case 43222:




  break;
 case 0x4325:

  VAR_19 = (1 << VAR_7) |
     (1 << VAR_9);
  if (FUNC_3(VAR_17, VAR_0) &
      VAR_1)
   VAR_19 |= (1 << VAR_8);

  VAR_20 = 0xFFFFF;
  VAR_22 = VAR_15;
  VAR_23 = FUNC_0(VAR_15);
  VAR_24 = VAR_13;
  VAR_25 = FUNC_0(VAR_13);
  break;
 case 0x4328:
  VAR_19 = (1 << VAR_11) |
     (1 << VAR_10) |
     (1 << VAR_12);

  VAR_20 = 0xFFFFF;
  VAR_22 = VAR_16;
  VAR_23 = FUNC_0(VAR_16);
  VAR_24 = VAR_14;
  VAR_25 = FUNC_0(VAR_14);
  break;
 case 0x5354:

  VAR_20 = 0xFFFFF;
  break;
 default:
  FUNC_6(VAR_17->dev->dev, "ERROR: PMU resource config unknown for device %04X\n",
   VAR_18->chip_id);
 }

 if (VAR_22) {
  for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
   FUNC_5(VAR_17, VAR_5,
           VAR_22[VAR_21].resource);
   FUNC_5(VAR_17, VAR_6,
           VAR_22[VAR_21].updown);
  }
 }
 if (VAR_24) {
  for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
   FUNC_5(VAR_17, VAR_5,
           VAR_24[VAR_21].resource);
   switch (VAR_24[VAR_21].task) {
   case 128:
    FUNC_5(VAR_17, VAR_4,
            VAR_24[VAR_21].depend);
    break;
   case 130:
    FUNC_4(VAR_17, VAR_4,
          VAR_24[VAR_21].depend);
    break;
   case 129:
    FUNC_2(VAR_17, VAR_4,
           ~(VAR_24[VAR_21].depend));
    break;
   default:
    FUNC_1(1);
   }
  }
 }


 if (VAR_19)
  FUNC_5(VAR_17, VAR_3, VAR_19);
 if (VAR_20)
  FUNC_5(VAR_17, VAR_2, VAR_20);
}
