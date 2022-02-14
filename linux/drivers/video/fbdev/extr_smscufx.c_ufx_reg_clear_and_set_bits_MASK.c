
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufx_data {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct ufx_data*,int ,int *) ;
 int FUNC_2 (struct ufx_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ufx_data *VAR_0, u32 VAR_1,
 u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 FUNC_0(VAR_5, "ufx_reg_clear_and_set_bits error reading "
  "0x%x", VAR_1);

 VAR_4 &= (~VAR_2);
 VAR_4 |= VAR_3;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4);
 FUNC_0(VAR_5, "ufx_reg_clear_and_set_bits error writing "
  "0x%x", VAR_1);

 return 0;
}
