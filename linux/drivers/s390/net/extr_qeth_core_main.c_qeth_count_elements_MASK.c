
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
typedef scalar_t__ addr_t ;


 unsigned int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

unsigned int FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);
 addr_t VAR_3 = (addr_t)VAR_0->data + FUNC_2(VAR_0);
 addr_t VAR_4 = (addr_t)VAR_0->data + VAR_1;

 if (VAR_4 != VAR_3)
  VAR_2 += FUNC_1(VAR_4, VAR_3);
 return VAR_2;
}
