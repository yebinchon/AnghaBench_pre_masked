
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct TYPE_2__ {int spec_major; scalar_t__ spec_minor; int type; int number; int major; int minor; void* buildnr; } ;
struct kempld_device_data {void* feature_mask; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct kempld_device_data*) ;
 void* FUNC_7 (struct kempld_device_data*,int ) ;
 int FUNC_8 (struct kempld_device_data*,int ) ;
 int FUNC_9 (struct kempld_device_data*) ;

__attribute__((used)) static int FUNC_10(struct kempld_device_data *VAR_4)
{
 u16 VAR_5;
 u8 VAR_6;

 FUNC_6(VAR_4);

 VAR_5 = FUNC_7(VAR_4, VAR_3);
 VAR_6 = FUNC_8(VAR_4, VAR_2);
 VAR_4->info.buildnr = FUNC_7(VAR_4, VAR_0);

 VAR_4->info.minor = FUNC_3(VAR_5);
 VAR_4->info.major = FUNC_2(VAR_5);
 VAR_4->info.number = FUNC_4(VAR_5);
 VAR_4->info.type = FUNC_5(VAR_5);

 if (VAR_6 == 0xff) {
  VAR_4->info.spec_minor = 0;
  VAR_4->info.spec_major = 1;
 } else {
  VAR_4->info.spec_minor = FUNC_1(VAR_6);
  VAR_4->info.spec_major = FUNC_0(VAR_6);
 }

 if (VAR_4->info.spec_major > 0)
  VAR_4->feature_mask = FUNC_7(VAR_4, VAR_1);
 else
  VAR_4->feature_mask = 0;

 FUNC_9(VAR_4);

 return 0;
}
