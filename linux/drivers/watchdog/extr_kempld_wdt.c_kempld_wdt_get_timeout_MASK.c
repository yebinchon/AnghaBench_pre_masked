
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct kempld_wdt_stage {unsigned int mask; int id; } ;
struct kempld_wdt_data {struct kempld_device_data* pld; } ;
struct kempld_device_data {int pld_clock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 unsigned int* VAR_0 ;
 unsigned int FUNC_5 (struct kempld_device_data*,int ) ;
 int FUNC_6 (struct kempld_device_data*,int ) ;

__attribute__((used)) static unsigned int FUNC_7(struct kempld_wdt_data *VAR_1,
      struct kempld_wdt_stage *VAR_2)
{
 struct kempld_device_data *VAR_3 = VAR_1->pld;
 unsigned int VAR_4;
 u64 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u8 VAR_8;

 if (!VAR_2->mask)
  return 0;

 VAR_8 = FUNC_6(VAR_3, FUNC_0(VAR_2->id));
 VAR_5 = FUNC_5(VAR_3, FUNC_1(VAR_2->id));
 VAR_6 = VAR_0[FUNC_2(VAR_8)];

 VAR_5 = (VAR_5 & VAR_2->mask) * VAR_6;
 VAR_7 = FUNC_4(VAR_5, VAR_3->pld_clock);
 if (VAR_7)
  VAR_5++;

 VAR_4 = VAR_5;
 FUNC_3(VAR_4 != VAR_5);

 return VAR_4;
}
