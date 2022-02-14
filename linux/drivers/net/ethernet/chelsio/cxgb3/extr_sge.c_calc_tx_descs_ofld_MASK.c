
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_6(const struct sk_buff *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (VAR_1->len <= VAR_0)
  return 1;

 VAR_2 = FUNC_5(VAR_1) / 8;
 VAR_3 = FUNC_2(VAR_1)->nr_frags;
 if (FUNC_3(VAR_1) != FUNC_4(VAR_1))
  VAR_3++;
 return FUNC_0(VAR_2 + FUNC_1(VAR_3));
}
