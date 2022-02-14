
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;
struct napi_struct {int dummy; } ;
struct ixgb_buffer {struct sk_buff* skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (struct napi_struct*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct napi_struct *VAR_2,
     struct ixgb_buffer *VAR_3,
     u32 VAR_4, struct sk_buff **VAR_5)
{
 struct sk_buff *VAR_6;

 if (VAR_4 > VAR_1)
  return;

 VAR_6 = FUNC_0(VAR_2, VAR_4);
 if (!VAR_6)
  return;

 FUNC_1(VAR_6, -VAR_0,
           (*VAR_5)->data - VAR_0,
           VAR_4 + VAR_0);

 VAR_3->skb = *VAR_5;
 *VAR_5 = VAR_6;
}
