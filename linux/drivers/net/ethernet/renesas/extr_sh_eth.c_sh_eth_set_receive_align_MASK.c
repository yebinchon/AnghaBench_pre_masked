
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1)
{
 uintptr_t VAR_2 = (uintptr_t)VAR_1->data & (VAR_0 - 1);

 if (VAR_2)
  FUNC_0(VAR_1, VAR_0 - VAR_2);
}
