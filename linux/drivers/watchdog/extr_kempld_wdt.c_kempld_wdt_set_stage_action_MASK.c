
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kempld_wdt_stage {int id; int mask; } ;
struct kempld_wdt_data {struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kempld_device_data*) ;
 int FUNC_2 (struct kempld_device_data*,int ) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (struct kempld_device_data*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct kempld_wdt_data *VAR_4,
     struct kempld_wdt_stage *VAR_5,
     u8 VAR_6)
{
 struct kempld_device_data *VAR_7 = VAR_4->pld;
 u8 VAR_8;

 if (!VAR_5 || !VAR_5->mask)
  return -VAR_1;

 FUNC_1(VAR_7);
 VAR_8 = FUNC_2(VAR_7, FUNC_0(VAR_5->id));
 VAR_8 &= ~VAR_2;
 VAR_8 |= (VAR_6 & VAR_2);

 if (VAR_6 == VAR_0)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;

 FUNC_4(VAR_7, FUNC_0(VAR_5->id), VAR_8);
 FUNC_3(VAR_7);

 return 0;
}
