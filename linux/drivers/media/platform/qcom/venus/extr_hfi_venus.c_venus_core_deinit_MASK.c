
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int suspended; int power_enabled; } ;
struct venus_core {int dummy; } ;


 int VAR_0 ;
 struct venus_hfi_device* FUNC_0 (struct venus_core*) ;
 int FUNC_1 (struct venus_hfi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct venus_core *VAR_1)
{
 struct venus_hfi_device *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0);
 VAR_2->suspended = 1;
 VAR_2->power_enabled = 0;

 return 0;
}
