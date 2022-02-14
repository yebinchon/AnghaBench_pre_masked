
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct max2175 {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (struct max2175*) ;
 scalar_t__ FUNC_1 (struct max2175*) ;
 scalar_t__ FUNC_2 (struct max2175*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct max2175*,int) ;
 int FUNC_4 (struct max2175*,int) ;
 int FUNC_5 (struct max2175*,char*) ;

__attribute__((used)) static int FUNC_6(struct max2175 *VAR_1, u64 VAR_2,
         u32 VAR_3)
{
 s64 VAR_4, VAR_5;
 int VAR_6;

 FUNC_5(VAR_1, "rf_freq: non AM bands\n");

 if (FUNC_2(VAR_1))
  VAR_5 = 128000;
 else if (FUNC_1(VAR_1))
  VAR_5 = 228000;
 else
  return FUNC_3(VAR_1, VAR_2);

 if (FUNC_0(VAR_1) == (VAR_3 == VAR_0))
  VAR_4 = VAR_2 + VAR_5;
 else
  VAR_4 = VAR_2 - VAR_5;

 VAR_6 = FUNC_3(VAR_1, VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_4(VAR_1, -VAR_5);
}
