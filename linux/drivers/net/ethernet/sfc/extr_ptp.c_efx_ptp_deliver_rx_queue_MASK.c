
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff_head *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_3(VAR_0))) {
  FUNC_0();
  FUNC_2(VAR_1);
  FUNC_1();
 }
}
