
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ high; scalar_t__ low; } ;
struct hclge_priv_buf {scalar_t__ enable; scalar_t__ buf_size; TYPE_2__ wl; } ;
struct hclge_pkt_buf_alloc {struct hclge_priv_buf* priv_buf; } ;
struct TYPE_3__ {unsigned int hw_pfc_map; } ;
struct hclge_dev {unsigned int hw_tc_map; TYPE_1__ tm_info; scalar_t__ pkt_buf_size; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct hclge_dev*,struct hclge_pkt_buf_alloc*) ;
 scalar_t__ FUNC_2 (struct hclge_pkt_buf_alloc*) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_pkt_buf_alloc*,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct hclge_dev *VAR_1,
       struct hclge_pkt_buf_alloc *VAR_2)
{
 u32 VAR_3 = VAR_1->pkt_buf_size - FUNC_2(VAR_2);
 int VAR_4 = FUNC_1(VAR_1, VAR_2);
 int VAR_5;


 for (VAR_5 = VAR_0 - 1; VAR_5 >= 0; VAR_5--) {
  struct hclge_priv_buf *VAR_6 = &VAR_2->priv_buf[VAR_5];
  unsigned int VAR_7 = FUNC_0((unsigned int)VAR_5);

  if (VAR_1->hw_tc_map & VAR_7 &&
      !(VAR_1->tm_info.hw_pfc_map & VAR_7)) {

   VAR_6->wl.low = 0;
   VAR_6->wl.high = 0;
   VAR_6->buf_size = 0;
   VAR_6->enable = 0;
   VAR_4--;
  }

  if (FUNC_3(VAR_1, VAR_2, VAR_3) ||
      VAR_4 == 0)
   break;
 }

 return FUNC_3(VAR_1, VAR_2, VAR_3);
}
