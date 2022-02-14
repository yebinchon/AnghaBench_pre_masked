
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct ath10k *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = VAR_2 & 0xfffff;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3 |= 0x100000 | VAR_4;
 return VAR_3;
}
