
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;

void FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = (VAR_0->len > VAR_1) ? FUNC_0(VAR_1) : 0;

 if (!VAR_2)
  return;

 FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_0->data, VAR_0->data + VAR_2, VAR_1);
}
