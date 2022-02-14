
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct kempld_device_data {int dummy; } ;


 int FUNC_0 (struct kempld_device_data*,scalar_t__) ;

u32 FUNC_1(struct kempld_device_data *VAR_0, u8 VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) | FUNC_0(VAR_0, VAR_1 + 2) << 16;
}
