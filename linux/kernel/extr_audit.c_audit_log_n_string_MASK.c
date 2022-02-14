
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct audit_buffer {struct sk_buff* skb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct audit_buffer*,int) ;
 int FUNC_2 (unsigned char*,char const*,size_t) ;
 int FUNC_3 (struct sk_buff*,size_t) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct audit_buffer *VAR_0, const char *VAR_1,
   size_t VAR_2)
{
 int VAR_3, VAR_4;
 unsigned char *VAR_5;
 struct sk_buff *VAR_6;

 if (!VAR_0)
  return;

 FUNC_0(!VAR_0->skb);
 VAR_6 = VAR_0->skb;
 VAR_3 = FUNC_5(VAR_6);
 VAR_4 = VAR_2 + 3;
 if (VAR_4 > VAR_3) {
  VAR_3 = FUNC_1(VAR_0, VAR_4);
  if (!VAR_3)
   return;
 }
 VAR_5 = FUNC_4(VAR_6);
 *VAR_5++ = '"';
 FUNC_2(VAR_5, VAR_1, VAR_2);
 VAR_5 += VAR_2;
 *VAR_5++ = '"';
 *VAR_5 = 0;
 FUNC_3(VAR_6, VAR_2 + 2);
}
