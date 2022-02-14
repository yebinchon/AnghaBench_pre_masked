
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static u8 FUNC_6(struct sk_buff *VAR_4, u8 VAR_5)
{
 __le16 VAR_6 = FUNC_4(VAR_4);

 if (FUNC_5(FUNC_0(VAR_6)))
  return VAR_0;
 if (FUNC_2(VAR_6) || FUNC_1(VAR_6))
  return VAR_2;
 if (FUNC_3(VAR_6))
  return VAR_1;





 if (VAR_4->priority == 7)
  return VAR_3;
 return VAR_4->priority;
}
