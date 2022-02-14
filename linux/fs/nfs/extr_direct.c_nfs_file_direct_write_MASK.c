
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_context {int dummy; } ;
struct nfs_direct_req {size_t bytes_left; size_t max_count; int io_start; struct kiocb* iocb; struct nfs_lock_context* l_ctx; int ctx; struct inode* inode; } ;
struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {scalar_t__ nrpages; struct inode* host; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfs_lock_context*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nfs_lock_context*) ;
 int FUNC_2 (int ,char*,struct file*,int,long long) ;
 int FUNC_3 (struct kiocb*,struct iov_iter*) ;
 int FUNC_4 (struct kiocb*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct address_space*,int,int) ;
 int FUNC_7 (struct iov_iter*) ;
 int FUNC_8 (struct iov_iter*,int) ;
 int FUNC_9 (struct kiocb*) ;
 int FUNC_10 (struct inode*,int ,size_t) ;
 struct nfs_direct_req* FUNC_11 () ;
 int FUNC_12 (struct nfs_direct_req*) ;
 int FUNC_13 (struct nfs_direct_req*) ;
 int FUNC_14 (struct nfs_direct_req*,struct iov_iter*,int) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct file*) ;
 struct nfs_lock_context* FUNC_17 (int ) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (size_t) ;

ssize_t FUNC_20(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 ssize_t VAR_7 = -VAR_0, VAR_8;
 size_t VAR_9;
 struct file *VAR_10 = VAR_5->ki_filp;
 struct address_space *VAR_11 = VAR_10->f_mapping;
 struct inode *VAR_12 = VAR_11->host;
 struct nfs_direct_req *VAR_13;
 struct nfs_lock_context *VAR_14;
 loff_t VAR_15, VAR_16;

 FUNC_2(VAR_2, "NFS: direct write(%pD2, %zd@%Ld)\n",
  VAR_10, FUNC_7(VAR_6), (long long) VAR_5->ki_pos);

 VAR_7 = FUNC_3(VAR_5, VAR_6);
 if (VAR_7 <= 0)
  return VAR_7;
 VAR_9 = VAR_7;
 FUNC_10(VAR_11->host, VAR_3, VAR_9);

 VAR_15 = VAR_5->ki_pos;
 VAR_16 = (VAR_15 + FUNC_7(VAR_6) - 1) >> VAR_4;

 FUNC_19(VAR_9);

 VAR_7 = -VAR_1;
 VAR_13 = FUNC_11();
 if (!VAR_13)
  goto out;

 VAR_13->inode = VAR_12;
 VAR_13->bytes_left = VAR_13->max_count = VAR_9;
 VAR_13->io_start = VAR_15;
 VAR_13->ctx = FUNC_5(FUNC_16(VAR_5->ki_filp));
 VAR_14 = FUNC_17(VAR_13->ctx);
 if (FUNC_0(VAR_14)) {
  VAR_7 = FUNC_1(VAR_14);
  goto out_release;
 }
 VAR_13->l_ctx = VAR_14;
 if (!FUNC_9(VAR_5))
  VAR_13->iocb = VAR_5;

 FUNC_18(VAR_12);

 VAR_8 = FUNC_14(VAR_13, VAR_6, VAR_15);

 if (VAR_11->nrpages) {
  FUNC_6(VAR_11,
           VAR_15 >> VAR_4, VAR_16);
 }

 FUNC_15(VAR_12);

 if (VAR_8 > 0) {
  VAR_7 = FUNC_13(VAR_13);
  if (VAR_7 > 0) {
   VAR_8 -= VAR_7;
   VAR_5->ki_pos = VAR_15 + VAR_7;

   FUNC_4(VAR_5, VAR_7);
  }
  FUNC_8(VAR_6, VAR_8);
 } else {
  VAR_7 = VAR_8;
 }
out_release:
 FUNC_12(VAR_13);
out:
 return VAR_7;
}
