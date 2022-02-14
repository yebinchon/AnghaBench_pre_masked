
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qeth_hdr_ext_tso {int hdr_tot_len; int imb_hdr_no; int hdr_type; int hdr_version; int hdr_len; unsigned int payload_len; unsigned int dg_hdr_len; int mss; } ;
struct qeth_hdr_tso {struct qeth_hdr_ext_tso ext; } ;
struct TYPE_2__ {int gso_size; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct qeth_hdr_tso *VAR_0,
         unsigned int VAR_1, struct sk_buff *VAR_2,
         unsigned int VAR_3)
{
 struct qeth_hdr_ext_tso *VAR_4 = &VAR_0->ext;

 VAR_4->hdr_tot_len = sizeof(*VAR_4);
 VAR_4->imb_hdr_no = 1;
 VAR_4->hdr_type = 1;
 VAR_4->hdr_version = 1;
 VAR_4->hdr_len = 28;
 VAR_4->payload_len = VAR_1;
 VAR_4->mss = FUNC_0(VAR_2)->gso_size;
 VAR_4->dg_hdr_len = VAR_3;
}
