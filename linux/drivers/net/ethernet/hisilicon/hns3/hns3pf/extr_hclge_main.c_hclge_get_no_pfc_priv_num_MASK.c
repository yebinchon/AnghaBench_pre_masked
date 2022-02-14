
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_priv_buf {scalar_t__ enable; } ;
struct hclge_pkt_buf_alloc {struct hclge_priv_buf* priv_buf; } ;
struct TYPE_2__ {int hw_pfc_map; } ;
struct hclge_dev {int hw_tc_map; TYPE_1__ tm_info; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_1,
         struct hclge_pkt_buf_alloc *VAR_2)
{
 struct hclge_priv_buf *VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->priv_buf[VAR_4];
  if (VAR_1->hw_tc_map & FUNC_0(VAR_4) &&
      !(VAR_1->tm_info.hw_pfc_map & FUNC_0(VAR_4)) &&
      VAR_3->enable)
   VAR_5++;
 }

 return VAR_5;
}
