
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int ip_summed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct sk_buff *VAR_7, u64 VAR_8)
{
 u32 VAR_9 = 0;

 VAR_7->ip_summed = VAR_5;

 if (VAR_8 & VAR_1 || VAR_8 & VAR_0)
  return;

 VAR_9 = VAR_8 & VAR_3;

 if (VAR_9 == VAR_2 || VAR_9 == VAR_4)
  VAR_7->ip_summed = VAR_6;
}
