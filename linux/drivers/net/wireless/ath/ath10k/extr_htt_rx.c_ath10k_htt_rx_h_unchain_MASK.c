
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ ring2_more_count; } ;
struct TYPE_6__ {int info1; } ;
struct TYPE_5__ {TYPE_3__ common; } ;
struct htt_rx_desc {TYPE_1__ frag_info; TYPE_2__ msdu_start; } ;
struct ath10k {int dummy; } ;
typedef enum rx_msdu_decap_format { ____Placeholder_rx_msdu_decap_format } rx_msdu_decap_format ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,unsigned long*) ;
 struct sk_buff* FUNC_4 (struct sk_buff_head*) ;
 scalar_t__ FUNC_5 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_6(struct ath10k *VAR_2,
        struct sk_buff_head *VAR_3,
        unsigned long *VAR_4,
        unsigned long *VAR_5)
{
 struct sk_buff *VAR_6;
 struct htt_rx_desc *VAR_7;
 enum rx_msdu_decap_format VAR_8;

 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = (void *)VAR_6->data - sizeof(*VAR_7);
 VAR_8 = FUNC_0(FUNC_1(VAR_7->msdu_start.common.info1),
     VAR_1);






 if (VAR_8 != VAR_0 ||
     FUNC_5(VAR_3) != 1 + VAR_7->frag_info.ring2_more_count) {
  *VAR_4 += FUNC_5(VAR_3);
  FUNC_2(VAR_3);
  return;
 }

 FUNC_3(VAR_3, VAR_5);
}
