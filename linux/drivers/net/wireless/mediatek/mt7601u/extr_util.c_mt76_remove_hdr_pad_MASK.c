
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

void FUNC_3(struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->data + 2, VAR_0->data, VAR_1);
 FUNC_2(VAR_0, 2);
}
