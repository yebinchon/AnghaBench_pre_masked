
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tx_mgmt_hdr {scalar_t__ cookie; } ;
struct tx_frame_hdr {scalar_t__ cookie; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath9k_htc_priv {scalar_t__ mgmt_ep; scalar_t__ data_bk_ep; scalar_t__ data_be_ep; scalar_t__ data_vi_ep; scalar_t__ data_vo_ep; scalar_t__ cab_ep; } ;



__attribute__((used)) static inline bool FUNC_0(struct ath9k_htc_priv *VAR_0,
    struct sk_buff *VAR_1,
    u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_3 == VAR_0->mgmt_ep) {
  struct tx_mgmt_hdr *VAR_5;
  VAR_5 = (struct tx_mgmt_hdr *) VAR_1->data;
  VAR_4 = VAR_5->cookie;
 } else if ((VAR_3 == VAR_0->data_bk_ep) ||
     (VAR_3 == VAR_0->data_be_ep) ||
     (VAR_3 == VAR_0->data_vi_ep) ||
     (VAR_3 == VAR_0->data_vo_ep) ||
     (VAR_3 == VAR_0->cab_ep)) {
  struct tx_frame_hdr *VAR_6;
  VAR_6 = (struct tx_frame_hdr *) VAR_1->data;
  VAR_4 = VAR_6->cookie;
 }

 if (VAR_4 == VAR_2)
  return 1;

 return 0;
}
