
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_frags; int gso_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;

__attribute__((used)) static u16 FUNC_5(const struct sk_buff *VAR_1)
{
 u16 VAR_2;
 u16 VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1)->nr_frags + 1;

 if (FUNC_1(VAR_1)) {
  VAR_3 = FUNC_3(VAR_1) + FUNC_4(VAR_1);
  if (VAR_3 < FUNC_0(VAR_1))
   VAR_2++;
  if (FUNC_2(VAR_1)->gso_type & VAR_0)
   VAR_2++;
 }
 return VAR_2;
}
