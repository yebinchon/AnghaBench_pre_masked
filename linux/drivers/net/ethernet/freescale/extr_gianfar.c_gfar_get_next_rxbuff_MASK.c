
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct gfar_rx_buff {int page_offset; struct page* page; int dma; } ;
struct gfar_priv_rx_q {size_t next_to_clean; int dev; struct gfar_rx_buff* rx_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (void*,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct gfar_rx_buff*,int ,struct sk_buff*,int) ;
 int FUNC_4 (struct gfar_priv_rx_q*,struct gfar_rx_buff*) ;
 int FUNC_5 (struct gfar_priv_rx_q*) ;
 scalar_t__ FUNC_6 (int) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct gfar_priv_rx_q *VAR_5,
         u32 VAR_6, struct sk_buff *VAR_7)
{
 struct gfar_rx_buff *VAR_8 = &VAR_5->rx_buff[VAR_5->next_to_clean];
 struct page *VAR_9 = VAR_8->page;
 bool VAR_10 = 0;

 if (FUNC_6(!VAR_7)) {
  void *VAR_11 = FUNC_7(VAR_9) + VAR_8->page_offset;

  VAR_7 = FUNC_0(VAR_11, VAR_2);
  if (FUNC_9(!VAR_7)) {
   FUNC_5(VAR_5);
   return ((void*)0);
  }
  FUNC_8(VAR_7, VAR_4);
  VAR_10 = 1;
 }

 FUNC_1(VAR_5->dev, VAR_8->dma, VAR_8->page_offset,
          VAR_1, VAR_0);

 if (FUNC_3(VAR_8, VAR_6, VAR_7, VAR_10)) {

  FUNC_4(VAR_5, VAR_8);
 } else {

  FUNC_2(VAR_5->dev, VAR_8->dma,
          VAR_3, VAR_0);
 }


 VAR_8->page = ((void*)0);

 return VAR_7;
}
