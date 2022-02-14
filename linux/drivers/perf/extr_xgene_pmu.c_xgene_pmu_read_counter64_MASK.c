
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct xgene_pmu_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct xgene_pmu_dev*,int) ;

__attribute__((used)) static inline u64 FUNC_1(struct xgene_pmu_dev *VAR_0,
        int VAR_1)
{
 u32 VAR_2, VAR_3;







 do {
  VAR_3 = FUNC_0(VAR_0, 2 * VAR_1 + 1);
  VAR_2 = FUNC_0(VAR_0, 2 * VAR_1);
 } while (VAR_3 != FUNC_0(VAR_0, 2 * VAR_1 + 1));

 return (((u64)VAR_3 << 32) | VAR_2);
}
