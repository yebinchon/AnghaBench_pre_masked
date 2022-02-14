
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,void const*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

struct sk_buff *
FUNC_3(const void *VAR_1, int VAR_2,
     int VAR_3, int VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_0(VAR_2 + VAR_3 + VAR_4,
   VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_2(VAR_5, VAR_2);
 if (VAR_1 && VAR_3)
  FUNC_1(VAR_5, VAR_1, VAR_3);

 return VAR_5;
}
