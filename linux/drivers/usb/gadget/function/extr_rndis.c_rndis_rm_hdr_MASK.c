
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct gether {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

int FUNC_7(struct gether *VAR_3,
   struct sk_buff *VAR_4,
   struct sk_buff_head *VAR_5)
{

 __le32 *VAR_6 = (void *)VAR_4->data;


 if (FUNC_0(VAR_2)
   != FUNC_2(VAR_6++)) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 VAR_6++;


 if (!FUNC_4(VAR_4, FUNC_3(VAR_6++) + 8)) {
  FUNC_1(VAR_4);
  return -VAR_1;
 }
 FUNC_6(VAR_4, FUNC_3(VAR_6++));

 FUNC_5(VAR_5, VAR_4);
 return 0;
}
