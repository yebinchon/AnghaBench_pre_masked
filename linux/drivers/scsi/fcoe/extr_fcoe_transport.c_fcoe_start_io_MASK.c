
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;

int FUNC_3(struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != 0)
  return VAR_4;
 FUNC_1(VAR_2);
 return 0;
}
