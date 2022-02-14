
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwtty_transaction {int fw_txn; struct fwtty_port* port; int callback; } ;
struct fwtty_port {int dummy; } ;
struct fwtty_peer {int generation; int speed; int node_id; TYPE_1__* serial; } ;
typedef int fwtty_transaction_cb ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int ,int *,int,int ,int,int ,unsigned long long,void*,size_t,int ,struct fwtty_transaction*) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct fwtty_peer *VAR_1,
     struct fwtty_transaction *VAR_2, int VAR_3,
     unsigned long long VAR_4, void *VAR_5,
     size_t VAR_6, fwtty_transaction_cb VAR_7,
     struct fwtty_port *VAR_8)
{
 int VAR_9;

 VAR_2->callback = VAR_7;
 VAR_2->port = VAR_8;

 VAR_9 = VAR_1->generation;
 FUNC_1();
 FUNC_0(VAR_1->serial->card, &VAR_2->fw_txn, VAR_3,
   VAR_1->node_id, VAR_9, VAR_1->speed, VAR_4, VAR_5,
   VAR_6, VAR_0, VAR_2);
}
