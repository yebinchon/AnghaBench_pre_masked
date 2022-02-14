
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ufx_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ufx_data*,int,scalar_t__*) ;
 int FUNC_2 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ufx_data *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_2(VAR_1, 0x3008, 0x00000001);
 FUNC_0(VAR_2, "ufx_lite_reset error writing 0x3008");

 VAR_2 = FUNC_1(VAR_1, 0x3008, &VAR_3);
 FUNC_0(VAR_2, "ufx_lite_reset error reading 0x3008");

 return (VAR_3 == 0) ? 0 : -VAR_0;
}
