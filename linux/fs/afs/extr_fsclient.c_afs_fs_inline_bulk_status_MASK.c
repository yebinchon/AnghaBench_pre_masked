
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct afs_volsync {int dummy; } ;
struct afs_status_cb {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_6__ {int error; } ;
struct afs_fs_cursor {TYPE_2__ ac; TYPE_3__* cbi; int key; } ;
struct afs_fid {unsigned int vid; unsigned int vnode; unsigned int unique; } ;
struct afs_call {unsigned int count2; int * request; struct afs_volsync* out_volsync; struct afs_status_cb* out_scb; int key; } ;
typedef int __be32 ;
struct TYPE_7__ {TYPE_1__* server; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_4 ;
 struct afs_call* FUNC_1 (struct afs_net*,int *,int,int) ;
 int FUNC_2 (TYPE_2__*,struct afs_call*,int ) ;
 int FUNC_3 (struct afs_call*,struct afs_fs_cursor*) ;
 int FUNC_4 (struct afs_call*,TYPE_3__*) ;
 int FUNC_5 (struct afs_call*,TYPE_2__*) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct afs_call*,struct afs_fid*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_net*,struct afs_fid*,struct afs_status_cb*,unsigned int,struct afs_volsync*) ;

int FUNC_11(struct afs_fs_cursor *VAR_5,
         struct afs_net *VAR_6,
         struct afs_fid *VAR_7,
         struct afs_status_cb *VAR_8,
         unsigned int VAR_9,
         struct afs_volsync *VAR_10)
{
 struct afs_call *VAR_11;
 __be32 *VAR_12;
 int VAR_13;

 if (FUNC_8(VAR_0, &VAR_5->cbi->server->flags))
  return FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_10);

 FUNC_0(",%x,{%llx:%llu},%u",
        FUNC_7(VAR_5->key), VAR_7[0].vid, VAR_7[1].vnode, VAR_9);

 VAR_11 = FUNC_1(VAR_6, &VAR_4,
       (2 + VAR_9 * 3) * 4,
       21 * 4);
 if (!VAR_11) {
  VAR_5->ac.error = -VAR_1;
  return -VAR_1;
 }

 VAR_11->key = VAR_5->key;
 VAR_11->out_scb = VAR_8;
 VAR_11->out_volsync = VAR_10;
 VAR_11->count2 = VAR_9;


 VAR_12 = VAR_11->request;
 *VAR_12++ = FUNC_6(VAR_2);
 *VAR_12++ = FUNC_6(VAR_9);
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  *VAR_12++ = FUNC_6(VAR_7[VAR_13].vid);
  *VAR_12++ = FUNC_6(VAR_7[VAR_13].vnode);
  *VAR_12++ = FUNC_6(VAR_7[VAR_13].unique);
 }

 FUNC_4(VAR_11, VAR_5->cbi);
 FUNC_9(VAR_11, &VAR_7[0]);
 FUNC_3(VAR_11, VAR_5);
 FUNC_2(&VAR_5->ac, VAR_11, VAR_3);
 return FUNC_5(VAR_11, &VAR_5->ac);
}
