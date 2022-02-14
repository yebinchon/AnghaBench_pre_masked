
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct u64_stats_sync {int dummy; } ;


 unsigned int FUNC_0 (struct u64_stats_sync*) ;
 scalar_t__ FUNC_1 (struct u64_stats_sync*,unsigned int) ;

__attribute__((used)) static void FUNC_2(u64 *VAR_0, u64 *VAR_1,
     struct u64_stats_sync *VAR_2)
{
 unsigned int VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_2);
  *(VAR_1) = *VAR_0;
 } while (FUNC_1(VAR_2, VAR_3));
}
