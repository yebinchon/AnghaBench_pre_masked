
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct brcms_c_info {int hw; } ;


 int FUNC_0 (int ,int*,int*) ;

u64 FUNC_1(struct brcms_c_info *VAR_0)
{
 u32 VAR_1, VAR_2;
 u64 VAR_3;

 FUNC_0(VAR_0->hw, &VAR_2, &VAR_1);

 VAR_3 = VAR_1;
 VAR_3 <<= 32;
 VAR_3 |= VAR_2;

 return VAR_3;
}
