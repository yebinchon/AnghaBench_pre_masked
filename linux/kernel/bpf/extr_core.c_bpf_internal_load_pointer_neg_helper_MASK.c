
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct sk_buff {void* head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*) ;
 void* FUNC_2 (struct sk_buff const*) ;

void *FUNC_3(const struct sk_buff *VAR_2, int VAR_3, unsigned int VAR_4)
{
 u8 *VAR_5 = ((void*)0);

 if (VAR_3 >= VAR_1)
  VAR_5 = FUNC_1(VAR_2) + VAR_3 - VAR_1;
 else if (VAR_3 >= VAR_0)
  VAR_5 = FUNC_0(VAR_2) + VAR_3 - VAR_0;

 if (VAR_5 >= VAR_2->head && VAR_5 + VAR_4 <= FUNC_2(VAR_2))
  return VAR_5;

 return ((void*)0);
}
