
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct venus_hfi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct venus_hfi_device *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_3 && !VAR_4)
  return 1;

 return 0;
}
