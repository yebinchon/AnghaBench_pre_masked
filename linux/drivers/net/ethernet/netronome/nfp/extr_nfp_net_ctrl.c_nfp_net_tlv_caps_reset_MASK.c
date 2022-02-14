
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_tlv_caps {int me_freq_mhz; int mbox_len; int mbox_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_net_tlv_caps*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct nfp_net_tlv_caps *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->me_freq_mhz = 1200;
 VAR_2->mbox_off = VAR_0;
 VAR_2->mbox_len = VAR_1;
}
