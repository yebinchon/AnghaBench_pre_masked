
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; unsigned char* data; scalar_t__ mac_len; } ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,unsigned char) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2;
 unsigned char VAR_3;
 unsigned char *VAR_4;
 int VAR_5;




 VAR_2 = FUNC_1(2 * VAR_1->len + VAR_1->mac_len);
 if (!VAR_2) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }


 FUNC_7(VAR_2);
 FUNC_6(VAR_2, VAR_1->mac_len);
 FUNC_3(FUNC_4(VAR_2), FUNC_4(VAR_1), VAR_1->mac_len);
 VAR_2->mac_len = VAR_1->mac_len;


 VAR_4 = VAR_1->data;
 VAR_5 = VAR_1->len;
 while (VAR_5--) {
  VAR_3 = FUNC_0(*VAR_4++);
  if (VAR_3 == VAR_0)
   FUNC_5(VAR_2, VAR_3);
  FUNC_5(VAR_2, VAR_3);
 }
 FUNC_2(VAR_1);
 return VAR_2;
}
