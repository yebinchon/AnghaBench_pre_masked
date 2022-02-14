
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_open_dir_context {struct cred* cred; } ;
struct nfs_entry {int cookie; } ;
struct inode {int dummy; } ;
struct file {struct nfs_open_dir_context* private_data; } ;
struct cred {int dummy; } ;
struct TYPE_6__ {int plus; unsigned long timestamp; unsigned long gencount; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int (* readdir ) (int ,struct cred const*,int ,struct page**,int ,int) ;} ;
struct TYPE_7__ {int caps; int dtsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct file*) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (int ,struct cred const*,int ,struct page**,int ,int) ;

__attribute__((used)) static
int FUNC_7(struct page **VAR_4, nfs_readdir_descriptor_t *VAR_5,
   struct nfs_entry *VAR_6, struct file *VAR_7, struct inode *VAR_8)
{
 struct nfs_open_dir_context *VAR_9 = VAR_7->private_data;
 const struct cred *VAR_10 = VAR_9->cred;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 again:
 VAR_11 = VAR_3;
 VAR_12 = FUNC_5();
 VAR_13 = FUNC_1(VAR_8)->readdir(FUNC_4(VAR_7), VAR_10, VAR_6->cookie, VAR_4,
       FUNC_2(VAR_8)->dtsize, VAR_5->plus);
 if (VAR_13 < 0) {

  if (VAR_13 == -VAR_0 && VAR_5->plus) {
   FUNC_2(VAR_8)->caps &= ~VAR_1;
   FUNC_3(VAR_2, &FUNC_0(VAR_8)->flags);
   VAR_5->plus = 0;
   goto again;
  }
  goto error;
 }
 VAR_5->timestamp = VAR_11;
 VAR_5->gencount = VAR_12;
error:
 return VAR_13;
}
