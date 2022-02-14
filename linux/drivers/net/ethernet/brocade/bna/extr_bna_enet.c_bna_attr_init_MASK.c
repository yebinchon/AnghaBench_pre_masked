
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_query_complete; int max_rit_size; int num_mcmac; int num_ucmac; int num_rxp; int num_txq; } ;
struct bna_ioceth {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct bna_ioceth *VAR_5)
{
 VAR_5->attr.num_txq = VAR_2;
 VAR_5->attr.num_rxp = VAR_1;
 VAR_5->attr.num_ucmac = VAR_3;
 VAR_5->attr.num_mcmac = VAR_4;
 VAR_5->attr.max_rit_size = VAR_0;
 VAR_5->attr.fw_query_complete = 0;
}
