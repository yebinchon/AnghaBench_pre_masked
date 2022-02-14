
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_1, unsigned int VAR_2)
{

 if (FUNC_1(VAR_2 < VAR_0))
  return 0;

 if (FUNC_2(VAR_1))
  return FUNC_0(VAR_1);


 return VAR_2 != VAR_0;
}
