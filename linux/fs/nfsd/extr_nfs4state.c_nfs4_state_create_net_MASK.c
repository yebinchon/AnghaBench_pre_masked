
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_opens; int list; } ;
struct nfsd_net {int grace_ended; int * conf_id_hashtbl; int * unconf_id_hashtbl; int laundromat_work; int blocked_locks_lru; int blocked_locks_lock; int s2s_cp_stateids; int s2s_cp_lock; int client_lock; int del_recall_lru; int close_lru; int client_lru; TYPE_1__ nfsd4_manager; int boot_time; void* unconf_name_tree; void* conf_name_tree; int * sessionid_hashtbl; } ;
struct net {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,int,int ) ;
 int VAR_5 ;
 struct nfsd_net* FUNC_7 (struct net*,int ) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_7)
{
 struct nfsd_net *VAR_8 = FUNC_7(VAR_7, VAR_6);
 int VAR_9;

 VAR_8->conf_id_hashtbl = FUNC_6(VAR_0,
         sizeof(struct list_head),
         VAR_2);
 if (!VAR_8->conf_id_hashtbl)
  goto err;
 VAR_8->unconf_id_hashtbl = FUNC_6(VAR_0,
           sizeof(struct list_head),
           VAR_2);
 if (!VAR_8->unconf_id_hashtbl)
  goto err_unconf_id;
 VAR_8->sessionid_hashtbl = FUNC_6(VAR_4,
           sizeof(struct list_head),
           VAR_2);
 if (!VAR_8->sessionid_hashtbl)
  goto err_sessionid;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_1(&VAR_8->conf_id_hashtbl[VAR_9]);
  FUNC_1(&VAR_8->unconf_id_hashtbl[VAR_9]);
 }
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_1(&VAR_8->sessionid_hashtbl[VAR_9]);
 VAR_8->conf_name_tree = VAR_3;
 VAR_8->unconf_name_tree = VAR_3;
 VAR_8->boot_time = FUNC_3();
 VAR_8->grace_ended = 0;
 VAR_8->nfsd4_manager.block_opens = 1;
 FUNC_1(&VAR_8->nfsd4_manager.list);
 FUNC_1(&VAR_8->client_lru);
 FUNC_1(&VAR_8->close_lru);
 FUNC_1(&VAR_8->del_recall_lru);
 FUNC_8(&VAR_8->client_lock);
 FUNC_8(&VAR_8->s2s_cp_lock);
 FUNC_4(&VAR_8->s2s_cp_stateids);

 FUNC_8(&VAR_8->blocked_locks_lock);
 FUNC_1(&VAR_8->blocked_locks_lru);

 FUNC_0(&VAR_8->laundromat_work, VAR_5);
 FUNC_2(VAR_7);

 return 0;

err_sessionid:
 FUNC_5(VAR_8->unconf_id_hashtbl);
err_unconf_id:
 FUNC_5(VAR_8->conf_id_hashtbl);
err:
 return -VAR_1;
}
