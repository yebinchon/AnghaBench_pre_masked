
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;
struct port100 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct port100*,int) ;
 struct sk_buff* FUNC_4 (struct port100*,int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct port100 *VAR_2, u8 VAR_3)
{
 struct sk_buff *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2, 1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5(VAR_4, VAR_3);

 VAR_5 = FUNC_4(VAR_2, VAR_1, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = VAR_5->data[0];

 FUNC_2(VAR_5);

 return VAR_6;
}
