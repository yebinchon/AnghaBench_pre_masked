
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,scalar_t__) ;

u64 FUNC_1(struct qed_hwfn *VAR_4)
{
 u32 VAR_5 = VAR_2 -
          VAR_1;
 u32 VAR_6 = VAR_3 -
          VAR_1;
 u32 VAR_7 = 0, VAR_8 = 0;
 u64 VAR_9 = 0;

 VAR_8 = FUNC_0(VAR_4,
    VAR_0 +
    VAR_5 * 8);
 VAR_7 = FUNC_0(VAR_4,
    VAR_0 +
    VAR_6 * 8);
 VAR_9 = ((u64)VAR_7 << 32) + (u64)VAR_8;

 return VAR_9;
}
