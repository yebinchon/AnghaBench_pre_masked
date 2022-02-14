
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct fm10k_hw_stat {scalar_t__ base_h; scalar_t__ base_l; } ;
struct fm10k_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fm10k_hw*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct fm10k_hw *VAR_1, u32 VAR_2,
       struct fm10k_hw_stat *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u64 VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_2 + 1);


 do {
  VAR_6 = VAR_5;
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  VAR_5 = FUNC_0(VAR_1, VAR_2 + 1);
 } while (VAR_5 != VAR_6);

 VAR_7 = ((u64)(VAR_5 - VAR_3->base_h) << 32) + VAR_4;
 VAR_7 -= VAR_3->base_l;

 return VAR_7 & VAR_0;
}
