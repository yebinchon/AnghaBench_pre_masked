
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genevehdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline struct genevehdr *FUNC_1(const struct sk_buff *VAR_0)
{
 return (struct genevehdr *)(FUNC_0(VAR_0) + 1);
}
