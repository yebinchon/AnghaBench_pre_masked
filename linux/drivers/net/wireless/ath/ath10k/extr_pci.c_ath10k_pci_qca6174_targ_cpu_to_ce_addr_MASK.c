
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath10k*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct ath10k *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = VAR_3 & 0xfffff;

 VAR_4 = (FUNC_0(VAR_2, VAR_1 + VAR_0)
     & 0x7ff) << 21;
 VAR_4 |= ((VAR_3 >= 0x100000) ? 0x100000 : 0) | VAR_5;
 return VAR_4;
}
