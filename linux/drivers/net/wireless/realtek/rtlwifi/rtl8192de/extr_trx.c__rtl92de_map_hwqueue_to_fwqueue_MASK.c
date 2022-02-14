
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static u8 FUNC_4(struct sk_buff *VAR_2, u8 VAR_3)
{
 __le16 VAR_4 = FUNC_2(VAR_2);

 if (FUNC_3(FUNC_0(VAR_4)))
  return VAR_0;
 if (FUNC_1(VAR_4))
  return VAR_1;

 return VAR_2->priority;
}
