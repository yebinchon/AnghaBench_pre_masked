
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hclge_priv_buf {size_t tx_buf_size; } ;
struct hclge_pkt_buf_alloc {struct hclge_priv_buf* priv_buf; } ;
struct hclge_dev {size_t pkt_buf_size; int hw_tc_map; size_t tx_buf_size; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_2,
    struct hclge_pkt_buf_alloc *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = VAR_2->pkt_buf_size;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct hclge_priv_buf *VAR_6 = &VAR_3->priv_buf[VAR_4];

  if (VAR_2->hw_tc_map & FUNC_0(VAR_4)) {
   if (VAR_5 < VAR_2->tx_buf_size)
    return -VAR_0;

   VAR_6->tx_buf_size = VAR_2->tx_buf_size;
  } else {
   VAR_6->tx_buf_size = 0;
  }

  VAR_5 -= VAR_6->tx_buf_size;
 }

 return 0;
}
