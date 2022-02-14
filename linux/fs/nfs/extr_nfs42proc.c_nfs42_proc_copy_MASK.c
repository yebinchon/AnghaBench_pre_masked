
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct nfs_lock_context {TYPE_1__* open_context; } ;
struct nfs4_exception {int retry; int state; int * stateid; int inode; } ;
struct nfs42_copy_res {int dummy; } ;
struct nfs42_copy_args {size_t count; int sync; int dst_stateid; int src_stateid; int dst_pos; int dst_fh; int src_pos; int src_fh; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct nfs_server* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_lock_context*) ;
 int FUNC_4 (struct file*,struct nfs_lock_context*,struct file*,struct nfs_lock_context*,struct nfs42_copy_args*,struct nfs42_copy_res*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nfs_server*,int ,struct nfs4_exception*) ;
 int FUNC_9 (struct file*) ;
 struct nfs_lock_context* FUNC_10 (int ) ;
 int FUNC_11 (struct nfs_lock_context*) ;

ssize_t FUNC_12(struct file *VAR_4, loff_t VAR_5,
   struct file *VAR_6, loff_t VAR_7,
   size_t VAR_8)
{
 struct nfs_server *VAR_9 = FUNC_2(FUNC_5(VAR_6));
 struct nfs_lock_context *VAR_10;
 struct nfs_lock_context *VAR_11;
 struct nfs42_copy_args VAR_12 = {
  .src_fh = FUNC_1(FUNC_5(VAR_4)),
  .src_pos = VAR_5,
  .dst_fh = FUNC_1(FUNC_5(VAR_6)),
  .dst_pos = VAR_7,
  .count = VAR_8,
  .sync = 0,
 };
 struct nfs42_copy_res VAR_13;
 struct nfs4_exception VAR_14 = {
  .inode = FUNC_5(VAR_4),
  .stateid = &VAR_12.src_stateid,
 };
 struct nfs4_exception VAR_15 = {
  .inode = FUNC_5(VAR_6),
  .stateid = &VAR_12.dst_stateid,
 };
 ssize_t VAR_16, VAR_17;

 VAR_10 = FUNC_10(FUNC_9(VAR_4));
 if (FUNC_0(VAR_10))
  return FUNC_3(VAR_10);

 VAR_14.state = VAR_10->open_context->state;

 VAR_11 = FUNC_10(FUNC_9(VAR_6));
 if (FUNC_0(VAR_11)) {
  VAR_16 = FUNC_3(VAR_11);
  goto out_put_src_lock;
 }

 VAR_15.state = VAR_11->open_context->state;

 do {
  FUNC_6(FUNC_5(VAR_6));
  VAR_16 = FUNC_4(VAR_4, VAR_10,
    VAR_6, VAR_11,
    &VAR_12, &VAR_13);
  FUNC_7(FUNC_5(VAR_6));

  if (VAR_16 >= 0)
   break;
  if (VAR_16 == -VAR_1) {
   VAR_16 = -VAR_2;
   break;
  } else if (VAR_16 == -VAR_0) {
   VAR_15.retry = 1;
   continue;
  } else if (VAR_16 == -VAR_3 && !VAR_12.sync) {
   VAR_12.sync = 1;
   VAR_15.retry = 1;
   continue;
  }

  VAR_17 = FUNC_8(VAR_9, VAR_16, &VAR_14);
  VAR_16 = FUNC_8(VAR_9, VAR_16, &VAR_15);
  if (!VAR_16)
   VAR_16 = VAR_17;
 } while (VAR_14.retry || VAR_15.retry);

 FUNC_11(VAR_11);
out_put_src_lock:
 FUNC_11(VAR_10);
 return VAR_16;
}
