
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_tx_ctxt_desc {int ivlan_tag_valid; int ivlan_tag; int ivlan_tag_ctl; } ;



__attribute__((used)) static void FUNC_0(struct sxgbe_tx_ctxt_desc *VAR_0,
         int VAR_1, int VAR_2,
         int VAR_3)
{
 if (VAR_1) {
  VAR_0->ivlan_tag_valid = VAR_1;
  VAR_0->ivlan_tag = VAR_2;
  VAR_0->ivlan_tag_ctl = VAR_3;
 }
}
