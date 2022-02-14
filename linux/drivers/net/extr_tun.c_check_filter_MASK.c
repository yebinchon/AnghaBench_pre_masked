
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_filter {int count; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct tap_filter*,struct sk_buff const*) ;

__attribute__((used)) static int FUNC_1(struct tap_filter *VAR_0, const struct sk_buff *VAR_1)
{
 if (!VAR_0->count)
  return 1;

 return FUNC_0(VAR_0, VAR_1);
}
