
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_priv_buf {scalar_t__ buf_size; scalar_t__ enable; } ;
struct hclge_pkt_buf_alloc {struct hclge_priv_buf* priv_buf; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct hclge_pkt_buf_alloc *VAR_1)
{
 struct hclge_priv_buf *VAR_2;
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = &VAR_1->priv_buf[VAR_4];
  if (VAR_2->enable)
   VAR_3 += VAR_2->buf_size;
 }
 return VAR_3;
}
