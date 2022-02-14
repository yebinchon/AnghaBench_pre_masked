
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;
 const u32 VAR_4 = 0xff000000U;
 const u32 VAR_5 = 0x00ffffffU;

 VAR_3 = (VAR_4 & (VAR_1 ^ VAR_2)) ? -VAR_0 : 0;
 if (VAR_3 < 0)
  goto err_exit;
 VAR_3 = ((VAR_5 & VAR_1) > (VAR_5 & VAR_2)) ?
  -VAR_0 : 0;
err_exit:
 return VAR_3;
}
