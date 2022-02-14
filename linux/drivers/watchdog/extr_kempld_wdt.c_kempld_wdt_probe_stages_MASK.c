
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct kempld_wdt_stage {int mask; int id; } ;
struct kempld_wdt_data {struct kempld_wdt_stage* stage; struct kempld_device_data* pld; } ;
struct kempld_device_data {int feature_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_device_data*,int) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (struct kempld_device_data*,int,int) ;
 struct kempld_wdt_data* FUNC_5 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_4)
{
 struct kempld_wdt_data *VAR_5 = FUNC_5(VAR_4);
 struct kempld_device_data *VAR_6 = VAR_5->pld;
 struct kempld_wdt_stage *VAR_7;
 struct kempld_wdt_stage *VAR_8;
 u8 VAR_9, VAR_10, VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14;

 VAR_7 = &VAR_5->stage[VAR_2];
 VAR_8 = &VAR_5->stage[VAR_3];

 VAR_7->mask = 0;
 VAR_8->mask = 0;

 for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
  VAR_9 = FUNC_0(VAR_13);
  VAR_12 = 0;

  FUNC_1(VAR_6);

  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   VAR_11 = FUNC_2(VAR_6, VAR_9 + VAR_14);
   FUNC_4(VAR_6, VAR_9 + VAR_14, 0x00);
   VAR_10 = FUNC_2(VAR_6, VAR_9 + VAR_14);

   if (VAR_10 != 0x00)
    break;
   FUNC_4(VAR_6, VAR_9 + VAR_14, VAR_11);
   VAR_12 |= 0xff << (VAR_14 * 8);
  }
  FUNC_3(VAR_6);


  if (!VAR_8->mask) {
   VAR_8->mask = VAR_12;
   VAR_8->id = VAR_13;
  } else {
   if (VAR_6->feature_mask & VAR_1) {
    VAR_7->mask = VAR_8->mask;
    VAR_8->mask = VAR_12;
    VAR_7->id = VAR_8->id;
    VAR_8->id = VAR_13;
   }
   break;
  }
 }

 if (!VAR_8->mask)
  return -VAR_0;

 return 0;
}
