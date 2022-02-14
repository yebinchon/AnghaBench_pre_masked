
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int ,int,int ,unsigned long long,void*,size_t,int ,struct fwtty_transaction*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fwtty_transaction* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct fwtty_peer *VAR_4, int VAR_5,
     unsigned long long VAR_6, void *VAR_7,
     size_t VAR_8, fwtty_transaction_cb VAR_9,
     struct fwtty_port *VAR_10)
{
 struct fwtty_transaction *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->callback = VAR_9;
 VAR_11->port = VAR_10;

 VAR_12 = VAR_4->generation;
 FUNC_2();
 FUNC_0(VAR_4->serial->card, &VAR_11->fw_txn, VAR_5,
   VAR_4->node_id, VAR_12, VAR_4->speed, VAR_6, VAR_7,
   VAR_8, VAR_2, VAR_11);
 return 0;
}
