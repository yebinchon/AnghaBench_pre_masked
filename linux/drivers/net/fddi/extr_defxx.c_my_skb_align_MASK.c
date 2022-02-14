
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct sk_buff*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, int VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_0->data;
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_0, VAR_3 - VAR_2);
}
