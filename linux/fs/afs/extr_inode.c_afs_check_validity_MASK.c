
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct afs_volume {int cb_v_break; } ;
struct afs_vnode {unsigned int cb_break; unsigned int cb_s_break; unsigned int cb_v_break; int cb_expires_at; int cb_lock; int fid; int flags; int cb_interest; struct afs_volume* volume; } ;
struct afs_server {int cb_s_break; } ;
struct afs_cb_interest {int server; } ;
typedef enum afs_cb_break_reason { ____Placeholder_afs_cb_break_reason } afs_cb_break_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct afs_vnode*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

bool FUNC_11(struct afs_vnode *VAR_7)
{
 struct afs_cb_interest *VAR_8;
 struct afs_server *VAR_9;
 struct afs_volume *VAR_10 = VAR_7->volume;
 enum afs_cb_break_reason VAR_11 = VAR_6;
 time64_t VAR_12 = FUNC_3();
 bool VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;

 do {
  FUNC_6(&VAR_7->cb_lock, &VAR_17);
  VAR_16 = FUNC_0(VAR_10->cb_v_break);
  VAR_14 = VAR_7->cb_break;

  if (FUNC_7(VAR_0, &VAR_7->flags)) {
   VAR_8 = FUNC_5(VAR_7->cb_interest);
   VAR_9 = FUNC_5(VAR_8->server);
   VAR_15 = FUNC_0(VAR_9->cb_s_break);

   if (VAR_7->cb_s_break != VAR_15 ||
       VAR_7->cb_v_break != VAR_16) {
    VAR_7->cb_s_break = VAR_15;
    VAR_7->cb_v_break = VAR_16;
    VAR_11 = VAR_4;
    VAR_13 = 0;
   } else if (FUNC_7(VAR_2, &VAR_7->flags)) {
    VAR_11 = VAR_5;
    VAR_13 = 0;
   } else if (VAR_7->cb_expires_at - 10 <= VAR_12) {
    VAR_11 = VAR_3;
    VAR_13 = 0;
   } else {
    VAR_13 = 1;
   }
  } else if (FUNC_7(VAR_1, &VAR_7->flags)) {
   VAR_13 = 1;
  } else {
   VAR_7->cb_v_break = VAR_16;
   VAR_13 = 0;
  }

 } while (FUNC_4(&VAR_7->cb_lock, VAR_17));

 FUNC_2(&VAR_7->cb_lock, VAR_17);

 if (VAR_11 != VAR_6) {
  FUNC_9(&VAR_7->cb_lock);
  if (VAR_14 == VAR_7->cb_break)
   FUNC_1(VAR_7, VAR_11);
  else
   FUNC_8(&VAR_7->fid, VAR_11);
  FUNC_10(&VAR_7->cb_lock);
  VAR_13 = 0;
 }

 return VAR_13;
}
