
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct afs_vnode {TYPE_2__ cb_lock; int flags; TYPE_1__* volume; int cb_v_break; int cb_s_break; int cb_interest; int io_lock; } ;
struct afs_server_list {int lock; struct afs_server_entry* servers; } ;
struct afs_server_entry {struct afs_cb_interest* cb_interest; struct afs_server* server; } ;
struct afs_server {int cb_s_break; } ;
struct afs_cb_interest {struct afs_server* server; } ;
struct TYPE_4__ {int cb_v_break; } ;


 int VAR_0 ;
 int FUNC_0 (struct afs_cb_interest*) ;
 int VAR_1 ;
 struct afs_cb_interest* FUNC_1 (struct afs_server*,struct afs_vnode*) ;
 void* FUNC_2 (struct afs_cb_interest*) ;
 int FUNC_3 (int ,struct afs_cb_interest*) ;
 int FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct afs_cb_interest*) ;
 struct afs_cb_interest* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct afs_vnode *VAR_2,
        struct afs_server_list *VAR_3,
        unsigned int VAR_4)
{
 struct afs_server_entry *VAR_5 = &VAR_3->servers[VAR_4];
 struct afs_cb_interest *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 struct afs_server *VAR_10 = VAR_5->server;

again:
 VAR_7 = FUNC_9(VAR_2->cb_interest,
      FUNC_7(&VAR_2->io_lock));
 if (VAR_7 && FUNC_6(VAR_7 == VAR_5->cb_interest))
  return 0;

 FUNC_10(&VAR_3->lock);
 VAR_6 = FUNC_2(VAR_5->cb_interest);
 FUNC_11(&VAR_3->lock);

 if (VAR_7) {
  if (VAR_7 == VAR_6) {
   FUNC_3(FUNC_4(VAR_2), VAR_6);
   return 0;
  }




  if (VAR_6 && VAR_7->server == VAR_6->server) {
   FUNC_13(&VAR_2->cb_lock);
   VAR_9 = FUNC_9(VAR_2->cb_interest,
       FUNC_7(&VAR_2->cb_lock.lock));
   FUNC_8(VAR_2->cb_interest, VAR_6);
   FUNC_14(&VAR_2->cb_lock);
   FUNC_3(FUNC_4(VAR_2), VAR_9);
   return 0;
  }


  if (!VAR_6 && VAR_7->server == VAR_10) {
   FUNC_12(&VAR_3->lock);
   if (VAR_5->cb_interest) {
    FUNC_15(&VAR_3->lock);
    FUNC_3(FUNC_4(VAR_2), VAR_6);
    goto again;
   }

   VAR_5->cb_interest = VAR_6;
   FUNC_15(&VAR_3->lock);
   return 0;
  }
 }

 if (!VAR_6) {
  VAR_8 = FUNC_1(VAR_10, VAR_2);
  if (!VAR_8)
   return -VAR_1;

  FUNC_12(&VAR_3->lock);
  if (!VAR_5->cb_interest) {
   VAR_5->cb_interest = FUNC_2(VAR_8);
   VAR_6 = VAR_8;
   VAR_8 = ((void*)0);
  } else {
   VAR_6 = FUNC_2(VAR_5->cb_interest);
  }
  FUNC_15(&VAR_3->lock);
  FUNC_3(FUNC_4(VAR_2), VAR_8);
 }

 FUNC_0(VAR_6);




 FUNC_13(&VAR_2->cb_lock);

 VAR_9 = FUNC_9(VAR_2->cb_interest,
     FUNC_7(&VAR_2->cb_lock.lock));
 FUNC_8(VAR_2->cb_interest, VAR_6);
 VAR_2->cb_s_break = VAR_6->server->cb_s_break;
 VAR_2->cb_v_break = VAR_2->volume->cb_v_break;
 FUNC_5(VAR_0, &VAR_2->flags);

 FUNC_14(&VAR_2->cb_lock);
 FUNC_3(FUNC_4(VAR_2), VAR_9);
 return 0;
}
