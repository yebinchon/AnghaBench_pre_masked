
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct sk_buff {scalar_t__ priority; } ;


 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_2(uint VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_1, VAR_0);
  VAR_1->priority = 0;
 }

 return VAR_1;
}
