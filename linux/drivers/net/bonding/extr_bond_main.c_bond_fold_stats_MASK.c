
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct rtnl_link_stats64 {int dummy; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;



__attribute__((used)) static void FUNC_0(struct rtnl_link_stats64 *VAR_0,
       const struct rtnl_link_stats64 *VAR_1,
       const struct rtnl_link_stats64 *VAR_2)
{
 const u64 *VAR_3 = (const u64 *)VAR_1;
 const u64 *VAR_4 = (const u64 *)VAR_2;
 u64 *VAR_5 = (u64 *)VAR_0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < sizeof(*VAR_0) / sizeof(u64); VAR_6++) {
  u64 VAR_7 = VAR_3[VAR_6];
  u64 VAR_8 = VAR_4[VAR_6];
  s64 VAR_9 = VAR_7 - VAR_8;


  if (((VAR_7 | VAR_8) >> 32) == 0)
   VAR_9 = (s64)(s32)((u32)VAR_7 - (u32)VAR_8);




  if (VAR_9 > 0)
   VAR_5[VAR_6] += VAR_9;
 }
}
