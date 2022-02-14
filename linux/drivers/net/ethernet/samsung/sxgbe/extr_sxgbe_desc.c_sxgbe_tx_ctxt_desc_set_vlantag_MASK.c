
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_tx_ctxt_desc {int vltag_valid; int vlan_tag; } ;



__attribute__((used)) static void FUNC_0(struct sxgbe_tx_ctxt_desc *VAR_0,
        int VAR_1, int VAR_2)
{
 if (VAR_1) {
  VAR_0->vltag_valid = VAR_1;
  VAR_0->vlan_tag = VAR_2;
 }
}
