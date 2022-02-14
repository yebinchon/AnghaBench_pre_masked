
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff_head *VAR_1, u16 VAR_2)
{
 struct sk_buff *VAR_3;

 while (VAR_2) {
  VAR_3 = FUNC_0(VAR_0);
  if (!VAR_3) {
   FUNC_1("netbuf allocation failed\n");
   return;
  }
  FUNC_2(VAR_1, VAR_3);
  VAR_2--;
 }
}
