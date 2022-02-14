
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dummy; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct bonding {int dummy; } ;


 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct slave*) ;

__attribute__((used)) static bool FUNC_2(struct sk_buff *VAR_3,
         struct slave *VAR_4,
         struct bonding *VAR_5)
{
 if (FUNC_1(VAR_4)) {
  if (FUNC_0(VAR_5) == VAR_0 &&
      VAR_3->pkt_type != VAR_1 &&
      VAR_3->pkt_type != VAR_2)
   return 0;
  return 1;
 }
 return 0;
}
