
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_lock_context {int dummy; } ;
struct nfs_direct_req {size_t bytes_left; size_t max_count; int flags; struct kiocb* iocb; struct nfs_lock_context* l_ctx; int ctx; scalar_t__ io_start; struct inode* inode; } ;
struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef int ssize_t ;
struct TYPE_2__ {int read_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (struct nfs_lock_context*) ;
 int FUNC_3 (int ,char*,struct file*,size_t,long long) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (struct iov_iter*,int ) ;
 int FUNC_7 (struct kiocb*) ;
 scalar_t__ FUNC_8 (struct iov_iter*) ;
 int FUNC_9 (struct inode*,int ,size_t) ;
 int FUNC_10 (struct nfs_direct_req*,struct iov_iter*,scalar_t__) ;
 struct nfs_direct_req* FUNC_11 () ;
 int FUNC_12 (struct nfs_direct_req*) ;
 int FUNC_13 (struct nfs_direct_req*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct file*) ;
 struct nfs_lock_context* FUNC_16 (int ) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (size_t) ;

ssize_t FUNC_19(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 struct file *VAR_7 = VAR_5->ki_filp;
 struct address_space *VAR_8 = VAR_7->f_mapping;
 struct inode *VAR_9 = VAR_8->host;
 struct nfs_direct_req *VAR_10;
 struct nfs_lock_context *VAR_11;
 ssize_t VAR_12 = -VAR_0, VAR_13;
 size_t VAR_14 = FUNC_5(VAR_6);
 FUNC_9(VAR_8->host, VAR_3, VAR_14);

 FUNC_3(VAR_2, "NFS: direct read(%pD2, %zd@%Ld)\n",
  VAR_7, VAR_14, (long long) VAR_5->ki_pos);

 VAR_12 = 0;
 if (!VAR_14)
  goto out;

 FUNC_18(VAR_14);

 VAR_12 = -VAR_1;
 VAR_10 = FUNC_11();
 if (VAR_10 == ((void*)0))
  goto out;

 VAR_10->inode = VAR_9;
 VAR_10->bytes_left = VAR_10->max_count = VAR_14;
 VAR_10->io_start = VAR_5->ki_pos;
 VAR_10->ctx = FUNC_4(FUNC_15(VAR_5->ki_filp));
 VAR_11 = FUNC_16(VAR_10->ctx);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto out_release;
 }
 VAR_10->l_ctx = VAR_11;
 if (!FUNC_7(VAR_5))
  VAR_10->iocb = VAR_5;

 if (FUNC_8(VAR_6))
  VAR_10->flags = VAR_4;

 FUNC_17(VAR_9);

 FUNC_1(VAR_9)->read_io += VAR_14;
 VAR_13 = FUNC_10(VAR_10, VAR_6, VAR_5->ki_pos);

 FUNC_14(VAR_9);

 if (VAR_13 > 0) {
  VAR_12 = FUNC_13(VAR_10);
  if (VAR_12 > 0) {
   VAR_13 -= VAR_12;
   VAR_5->ki_pos += VAR_12;
  }
  FUNC_6(VAR_6, VAR_13);
 } else {
  VAR_12 = VAR_13;
 }

out_release:
 FUNC_12(VAR_10);
out:
 return VAR_12;
}
