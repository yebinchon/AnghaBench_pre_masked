
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int ip_summed; scalar_t__ csum; } ;
struct mvpp2_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct mvpp2_port *VAR_8, u32 VAR_9,
     struct sk_buff *VAR_10)
{
 if (((VAR_9 & VAR_3) &&
      !(VAR_9 & VAR_2)) ||
     (VAR_9 & VAR_4))
  if (((VAR_9 & VAR_7) ||
       (VAR_9 & VAR_6)) &&
       (VAR_9 & VAR_5)) {
   VAR_10->csum = 0;
   VAR_10->ip_summed = VAR_1;
   return;
  }

 VAR_10->ip_summed = VAR_0;
}
