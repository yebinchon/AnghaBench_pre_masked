
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;
struct napi_struct {int dummy; } ;
struct gve_rx_slot_page_info {int page_offset; void* page_address; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_2 (struct napi_struct*,int ) ;
 int FUNC_3 (struct sk_buff*,void*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct net_device *VAR_1,
       struct napi_struct *VAR_2,
       struct gve_rx_slot_page_info *VAR_3,
       u16 VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_2(VAR_2, VAR_4);
 void *VAR_6 = VAR_3->page_address + VAR_0 +
     VAR_3->page_offset;

 if (FUNC_4(!VAR_5))
  return ((void*)0);

 FUNC_0(VAR_5, VAR_4);

 FUNC_3(VAR_5, VAR_6, VAR_4);

 VAR_5->protocol = FUNC_1(VAR_5, VAR_1);
 return VAR_5;
}
