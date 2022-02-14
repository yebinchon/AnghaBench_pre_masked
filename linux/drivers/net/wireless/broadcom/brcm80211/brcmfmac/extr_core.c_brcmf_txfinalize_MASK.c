
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_proto; } ;
struct brcmf_if {TYPE_2__* ndev; int pend_8021x_wait; int pend_8021x_cnt; } ;
struct TYPE_3__ {int tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct brcmf_if *VAR_1, struct sk_buff *VAR_2, bool VAR_3)
{
 struct ethhdr *VAR_4;
 u16 VAR_5;

 VAR_4 = (struct ethhdr *)(VAR_2->data);
 VAR_5 = FUNC_2(VAR_4->h_proto);

 if (VAR_5 == VAR_0) {
  FUNC_0(&VAR_1->pend_8021x_cnt);
  if (FUNC_3(&VAR_1->pend_8021x_wait))
   FUNC_4(&VAR_1->pend_8021x_wait);
 }

 if (!VAR_3)
  VAR_1->ndev->stats.tx_errors++;

 FUNC_1(VAR_2);
}
