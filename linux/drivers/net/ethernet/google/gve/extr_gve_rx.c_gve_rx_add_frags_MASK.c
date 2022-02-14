
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct napi_struct {int dummy; } ;
struct gve_rx_slot_page_info {scalar_t__ page_offset; int page; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct napi_struct*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct net_device *VAR_2,
     struct napi_struct *VAR_3,
     struct gve_rx_slot_page_info *VAR_4,
     u16 VAR_5)
{
 struct sk_buff *VAR_6 = FUNC_0(VAR_3);

 if (FUNC_2(!VAR_6))
  return ((void*)0);

 FUNC_1(VAR_6, 0, VAR_4->page,
   VAR_4->page_offset +
   VAR_0, VAR_5, VAR_1 / 2);

 return VAR_6;
}
