
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_desc {int dst_addr_l; } ;
struct wcn36xx_dxe_ctl {struct sk_buff* skb; struct wcn36xx_dxe_desc* desc; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
    struct wcn36xx_dxe_ctl *VAR_4,
    gfp_t VAR_5)
{
 struct wcn36xx_dxe_desc *VAR_6 = VAR_4->desc;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_5);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_6->dst_addr_l = FUNC_2(VAR_3,
      FUNC_5(VAR_7),
      VAR_2,
      VAR_0);
 if (FUNC_3(VAR_3, VAR_6->dst_addr_l)) {
  FUNC_1(VAR_3, "unable to map skb\n");
  FUNC_4(VAR_7);
  return -VAR_1;
 }
 VAR_4->skb = VAR_7;

 return 0;
}
