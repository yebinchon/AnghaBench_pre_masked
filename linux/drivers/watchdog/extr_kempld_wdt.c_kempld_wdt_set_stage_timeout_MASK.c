
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct kempld_wdt_stage {int mask; int id; } ;
struct kempld_wdt_data {struct kempld_device_data* pld; } ;
struct kempld_device_data {int pld_clock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct kempld_device_data*) ;
 int* VAR_3 ;
 int FUNC_5 (struct kempld_device_data*,int ) ;
 int FUNC_6 (struct kempld_device_data*) ;
 int FUNC_7 (struct kempld_device_data*,int ,int) ;
 int FUNC_8 (struct kempld_device_data*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct kempld_wdt_data *VAR_4,
     struct kempld_wdt_stage *VAR_5,
     unsigned int VAR_6)
{
 struct kempld_device_data *VAR_7 = VAR_4->pld;
 u32 VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 VAR_8 = VAR_3[VAR_1];

 if (!VAR_5)
  return -VAR_0;

 VAR_9 = (u64)VAR_6 * VAR_7->pld_clock;
 VAR_11 = FUNC_3(VAR_9, VAR_8);
 if (VAR_11)
  VAR_9++;

 if (VAR_9 > VAR_5->mask)
  return -VAR_0;

 VAR_10 = VAR_9 & VAR_5->mask;

 FUNC_4(VAR_7);
 VAR_12 = FUNC_5(VAR_7, FUNC_0(VAR_5->id));
 VAR_12 &= ~VAR_2;
 VAR_12 |= FUNC_2(VAR_1);
 FUNC_8(VAR_7, FUNC_0(VAR_5->id), VAR_12);
 FUNC_7(VAR_7, FUNC_1(VAR_5->id),
   VAR_10);
 FUNC_6(VAR_7);

 return 0;
}
