
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ encapsulation; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0)
{
 if (VAR_0->encapsulation)
  return FUNC_1(VAR_0) +
         FUNC_0(VAR_0);
 return FUNC_2(VAR_0) + FUNC_3(VAR_0);
}
