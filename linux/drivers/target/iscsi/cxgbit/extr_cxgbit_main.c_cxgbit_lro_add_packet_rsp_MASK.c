
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct cxgbit_lro_pdu_cb {int flags; int complete; scalar_t__ pdulen; int ddigest; } ;
struct cxgbit_lro_cb {int complete; int pdu_idx; int pdu_totallen; int csk; } ;
struct cpl_rx_iscsi_ddp {int len; int ulp_crc; int ddpvld; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct cxgbit_lro_pdu_cb*,int ) ;
 struct cxgbit_lro_cb* FUNC_2 (struct sk_buff*) ;
 struct cxgbit_lro_pdu_cb* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct sk_buff *VAR_2, u8 VAR_3, const __be64 *VAR_4)
{
 struct cxgbit_lro_cb *VAR_5 = FUNC_2(VAR_2);
 struct cxgbit_lro_pdu_cb *VAR_6 = FUNC_3(VAR_2,
      VAR_5->pdu_idx);
 struct cpl_rx_iscsi_ddp *VAR_7 = (struct cpl_rx_iscsi_ddp *)(VAR_4 + 1);

 FUNC_1(VAR_5->csk, VAR_6, FUNC_0(VAR_7->ddpvld));

 VAR_6->flags |= VAR_1;
 VAR_6->ddigest = FUNC_4(VAR_7->ulp_crc);
 VAR_6->pdulen = FUNC_5(VAR_7->len);

 if (VAR_6->flags & VAR_0)
  VAR_6->complete = 1;

 VAR_5->pdu_totallen += VAR_6->pdulen;
 VAR_5->complete = 1;
 VAR_5->pdu_idx++;
}
