
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct nfs_lock_context {TYPE_1__* open_context; } ;
struct nfs4_exception {scalar_t__ retry; int state; int inode; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 struct nfs_server* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_lock_context*) ;
 int FUNC_3 (struct file*,struct nfs_lock_context*,int ,int) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct nfs_server*,int ,struct nfs4_exception*) ;
 int FUNC_6 (struct file*) ;
 struct nfs_lock_context* FUNC_7 (int ) ;
 int FUNC_8 (struct nfs_lock_context*) ;

loff_t FUNC_9(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct nfs_server *VAR_5 = FUNC_1(FUNC_4(VAR_2));
 struct nfs4_exception VAR_6 = { };
 struct nfs_lock_context *VAR_7;
 loff_t VAR_8;

 VAR_7 = FUNC_7(FUNC_6(VAR_2));
 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7);

 VAR_6.inode = FUNC_4(VAR_2);
 VAR_6.state = VAR_7->open_context->state;

 do {
  VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_3, VAR_4);
  if (VAR_8 >= 0)
   break;
  if (VAR_8 == -VAR_0) {
   VAR_8 = -VAR_1;
   break;
  }
  VAR_8 = FUNC_5(VAR_5, VAR_8, &VAR_6);
 } while (VAR_6.retry);

 FUNC_8(VAR_7);
 return VAR_8;
}
