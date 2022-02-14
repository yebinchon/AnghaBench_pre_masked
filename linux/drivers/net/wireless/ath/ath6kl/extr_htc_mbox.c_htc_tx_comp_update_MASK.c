
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {int tx_lock; int cred_dist_list; int credit_info; } ;
struct TYPE_4__ {scalar_t__ cred_used; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct htc_packet {TYPE_2__ info; int act_len; int endpoint; int status; int buf; int * completion; } ;
struct TYPE_6__ {int txq_depth; int cred_to_dist; } ;
struct htc_endpoint {int txq; TYPE_3__ cred_dist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (char*,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct htc_target *VAR_3,
          struct htc_endpoint *VAR_4,
          struct htc_packet *VAR_5)
{
 VAR_5->completion = ((void*)0);
 VAR_5->buf += VAR_2;

 if (!VAR_5->status)
  return;

 FUNC_2("req failed (status:%d, ep:%d, len:%d creds:%d)\n",
     VAR_5->status, VAR_5->endpoint, VAR_5->act_len,
     VAR_5->info.tx.cred_used);


 FUNC_4(&VAR_3->tx_lock);
 VAR_4->cred_dist.cred_to_dist +=
    VAR_5->info.tx.cred_used;
 VAR_4->cred_dist.txq_depth = FUNC_3(&VAR_4->txq);

 FUNC_1(VAR_0, "htc tx ctxt 0x%p dist 0x%p\n",
     VAR_3->credit_info, &VAR_3->cred_dist_list);

 FUNC_0(VAR_3->credit_info,
     &VAR_3->cred_dist_list,
     VAR_1);

 FUNC_5(&VAR_3->tx_lock);
}
