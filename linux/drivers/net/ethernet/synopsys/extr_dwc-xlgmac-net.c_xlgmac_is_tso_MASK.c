
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1)
{
 if (VAR_1->ip_summed != VAR_0)
  return 0;

 if (!FUNC_0(VAR_1))
  return 0;

 return 1;
}
