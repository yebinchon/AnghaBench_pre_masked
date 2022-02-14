
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stbc_cap; int ldpc_cap; scalar_t__ ht_option; } ;
struct sta_info {int ldpc; int stbc; TYPE_1__ htpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

void FUNC_1(struct sta_info *VAR_2)
{
 if (VAR_2->htpriv.ht_option) {
  if (FUNC_0(VAR_2->htpriv.ldpc_cap, VAR_0))
   VAR_2->ldpc = 1;

  if (FUNC_0(VAR_2->htpriv.stbc_cap, VAR_1))
   VAR_2->stbc = 1;
 } else {
  VAR_2->ldpc = 0;
  VAR_2->stbc = 0;
 }
}
