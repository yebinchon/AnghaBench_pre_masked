
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ice_rx_buf {int pagecnt_bias; int page_offset; int dma; struct sk_buff* skb; int page; } ;
struct ice_ring {size_t next_to_clean; int dev; struct ice_rx_buf* rx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int const,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct ice_rx_buf *
FUNC_2(struct ice_ring *VAR_1, struct sk_buff **VAR_2,
        const unsigned int VAR_3)
{
 struct ice_rx_buf *VAR_4;

 VAR_4 = &VAR_1->rx_buf[VAR_1->next_to_clean];
 FUNC_1(VAR_4->page);
 *VAR_2 = VAR_4->skb;

 if (!VAR_3)
  return VAR_4;

 FUNC_0(VAR_1->dev, VAR_4->dma,
          VAR_4->page_offset, VAR_3,
          VAR_0);


 VAR_4->pagecnt_bias--;

 return VAR_4;
}
