
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_4(struct sk_buff *VAR_0, bool VAR_1)
{
 if (VAR_1)
  return (FUNC_1(VAR_0) +
   FUNC_0(VAR_0) - VAR_0->data);
 else
  return (FUNC_2(VAR_0) +
   FUNC_3(VAR_0) - VAR_0->data);
}
