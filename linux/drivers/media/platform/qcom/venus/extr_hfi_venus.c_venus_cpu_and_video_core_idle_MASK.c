
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_hfi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct venus_hfi_device*,int ) ;

__attribute__((used)) static bool FUNC_1(struct venus_hfi_device *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_5 = FUNC_0(VAR_4, VAR_0);

 if (VAR_6 & VAR_3 &&
     VAR_5 & VAR_1)
  return 1;

 return 0;
}
