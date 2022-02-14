
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0)
{
 struct sk_buff *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  VAR_0->next = ((void*)0);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
