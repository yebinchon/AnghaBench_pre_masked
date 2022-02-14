
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct rtw_tx_pkt_info {int sn; int report; int short_gi; int ls; int ampdu_en; int ldpc; int stbc; int ampdu_density; int ampdu_factor; int seq; int bw; int sec_type; int use_rate; int dis_rate_fallback; int rate; int rate_id; int bmc; int qsel; int pkt_offset; int offset; int tx_pkt_size; } ;
typedef int __le32 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;

void FUNC_21(struct rtw_tx_pkt_info *VAR_0, struct sk_buff *VAR_1)
{
 __le32 *VAR_2 = (__le32 *)VAR_1->data;

 FUNC_19(VAR_2, VAR_0->tx_pkt_size);
 FUNC_11(VAR_2, VAR_0->offset);
 FUNC_12(VAR_2, VAR_0->pkt_offset);
 FUNC_13(VAR_2, VAR_0->qsel);
 FUNC_2(VAR_2, VAR_0->bmc);
 FUNC_14(VAR_2, VAR_0->rate_id);
 FUNC_3(VAR_2, VAR_0->rate);
 FUNC_8(VAR_2, VAR_0->dis_rate_fallback);
 FUNC_20(VAR_2, VAR_0->use_rate);
 FUNC_15(VAR_2, VAR_0->sec_type);
 FUNC_4(VAR_2, VAR_0->bw);
 FUNC_18(VAR_2, VAR_0->seq);
 FUNC_10(VAR_2, VAR_0->ampdu_factor);
 FUNC_1(VAR_2, VAR_0->ampdu_density);
 FUNC_7(VAR_2, VAR_0->stbc);
 FUNC_5(VAR_2, VAR_0->ldpc);
 FUNC_0(VAR_2, VAR_0->ampdu_en);
 FUNC_9(VAR_2, VAR_0->ls);
 FUNC_6(VAR_2, VAR_0->short_gi);
 FUNC_16(VAR_2, VAR_0->report);
 FUNC_17(VAR_2, VAR_0->sn);
}
