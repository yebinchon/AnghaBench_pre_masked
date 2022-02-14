
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct port100 {int dummy; } ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct port100*,int ) ;
 struct sk_buff* FUNC_4 (struct port100*,int ,struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_5(struct port100 *VAR_1)
{
 struct sk_buff *VAR_2;
 struct sk_buff *VAR_3;
 u16 VAR_4;

 VAR_2 = FUNC_3(VAR_1, 0);
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_4(VAR_1, VAR_0,
         VAR_2);
 if (FUNC_0(VAR_3))
  return 0;

 VAR_4 = FUNC_2(*(__le16 *)VAR_3->data);

 FUNC_1(VAR_3);

 return VAR_4;
}
