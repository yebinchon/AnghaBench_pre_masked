
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct port100 {int dummy; } ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct port100*,int ) ;
 struct sk_buff* FUNC_5 (struct port100*,int ,struct sk_buff*) ;

__attribute__((used)) static u64 FUNC_6(struct port100 *VAR_2)
{
 struct sk_buff *VAR_3;
 struct sk_buff *VAR_4;
 u64 VAR_5;

 VAR_3 = FUNC_4(VAR_2, 0);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_2, VAR_1, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_4->len < 8)
  VAR_5 = 0;
 else
  VAR_5 = FUNC_2(*(__be64 *)VAR_4->data);

 FUNC_3(VAR_4);

 return VAR_5;
}
