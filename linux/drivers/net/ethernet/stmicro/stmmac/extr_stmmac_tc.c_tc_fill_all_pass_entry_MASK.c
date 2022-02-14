
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int match_data; int match_en; int af; int dma_ch_no; } ;
struct stmmac_tc_entry {int in_use; int is_last; int is_frag; int prio; TYPE_1__ val; scalar_t__ handle; } ;


 int FUNC_0 (struct stmmac_tc_entry*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct stmmac_tc_entry *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->in_use = 1;
 VAR_0->is_last = 1;
 VAR_0->is_frag = 0;
 VAR_0->prio = ~0x0;
 VAR_0->handle = 0;
 VAR_0->val.match_data = 0x0;
 VAR_0->val.match_en = 0x0;
 VAR_0->val.af = 1;
 VAR_0->val.dma_ch_no = 0x0;
}
