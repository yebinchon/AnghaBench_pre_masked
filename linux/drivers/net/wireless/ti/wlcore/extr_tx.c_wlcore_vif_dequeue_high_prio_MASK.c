
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int last_tx_hlid; int links_map; } ;
struct wl1271 {int num_links; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (struct wl1271*,int,int,int*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct wl1271 *VAR_0,
          struct wl12xx_vif *VAR_1,
          u8 VAR_2, u8 *VAR_3,
          u8 *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 int VAR_6, VAR_7, VAR_8;


 VAR_8 = (VAR_1->last_tx_hlid + 1) % VAR_0->num_links;


 for (VAR_6 = 0; VAR_6 < VAR_0->num_links; VAR_6++) {
  VAR_7 = (VAR_8 + VAR_6) % VAR_0->num_links;


  if (!FUNC_0(VAR_7, VAR_1->links_map))
   continue;

  VAR_5 = FUNC_1(VAR_0, VAR_7, VAR_2,
         VAR_4);
  if (!VAR_5)
   continue;

  VAR_1->last_tx_hlid = VAR_7;
  break;
 }

 if (!VAR_5)
  VAR_1->last_tx_hlid = 0;

 *VAR_3 = VAR_1->last_tx_hlid;
 return VAR_5;
}
