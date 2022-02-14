
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ s32 ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static ktime_t FUNC_3(u32 VAR_0, u32 VAR_1,
      s32 VAR_2)
{
 ktime_t VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  VAR_3 = FUNC_0(VAR_3, (u64)VAR_2);
 else
  VAR_3 = FUNC_2(VAR_3, (u64)-VAR_2);
 return VAR_3;
}
