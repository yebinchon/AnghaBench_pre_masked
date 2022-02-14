
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int data; } ;


 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(u32 VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_2(VAR_1, VAR_0);
 if (VAR_0)
  FUNC_1(VAR_1->data, 0, VAR_0);

 return VAR_1;
}
