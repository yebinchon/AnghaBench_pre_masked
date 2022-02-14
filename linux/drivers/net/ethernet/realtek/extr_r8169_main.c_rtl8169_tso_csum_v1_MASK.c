
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct iphdr {scalar_t__ protocol; } ;
struct TYPE_2__ {int gso_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_9, u32 *VAR_10)
{
 u32 VAR_11 = FUNC_3(VAR_9)->gso_size;

 if (VAR_11) {
  VAR_10[0] |= VAR_7;
  VAR_10[0] |= FUNC_2(VAR_11, VAR_8) << VAR_4;
 } else if (VAR_9->ip_summed == VAR_0) {
  const struct iphdr *VAR_12 = FUNC_1(VAR_9);

  if (VAR_12->protocol == VAR_1)
   VAR_10[0] |= VAR_3 | VAR_5;
  else if (VAR_12->protocol == VAR_2)
   VAR_10[0] |= VAR_3 | VAR_6;
  else
   FUNC_0(1);
 }
}
