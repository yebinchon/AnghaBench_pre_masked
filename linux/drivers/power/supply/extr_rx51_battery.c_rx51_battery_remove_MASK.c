
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx51_device_info {int channel_temp; int channel_bsi; int channel_vbat; int bat; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rx51_device_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct rx51_device_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->bat);

 FUNC_0(VAR_1->channel_vbat);
 FUNC_0(VAR_1->channel_bsi);
 FUNC_0(VAR_1->channel_temp);

 return 0;
}
