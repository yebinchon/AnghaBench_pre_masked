
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int type; } ;
struct file {int f_flags; struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_aio_ctx {int should_dirty; int direct_io; size_t len; int rc; int total_len; int refcount; int aio_mutex; int done; int list; struct iov_iter iter; int pos; struct kiocb* iocb; int cfile; } ;
struct cifsFileInfo {int tlink; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_2__* server; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int async_readv; } ;


 struct cifs_sb_info* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct cifsFileInfo*) ;
 struct cifs_aio_ctx* FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,size_t,struct cifsFileInfo*,struct cifs_sb_info*,int *,struct cifs_aio_ctx*) ;
 size_t FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (struct kiocb*) ;
 scalar_t__ FUNC_7 (struct iov_iter*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cifs_aio_ctx*,struct iov_iter*,int ) ;
 struct cifs_tcon* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static ssize_t FUNC_15(
 struct kiocb *VAR_10, struct iov_iter *VAR_11, bool VAR_12)
{
 size_t VAR_13;
 struct file *VAR_14 = VAR_10->ki_filp;
 struct cifs_sb_info *VAR_15;
 struct cifsFileInfo *VAR_16;
 struct cifs_tcon *VAR_17;
 ssize_t VAR_18, VAR_19 = 0;
 loff_t VAR_20 = VAR_10->ki_pos;
 struct cifs_aio_ctx *VAR_21;






 if (VAR_12 && VAR_11->type & VAR_5) {
  FUNC_3(VAR_4, "use non-direct cifs_user_readv for kvec I/O\n");
  VAR_12 = 0;
 }

 VAR_13 = FUNC_5(VAR_11);
 if (!VAR_13)
  return 0;

 VAR_15 = FUNC_0(VAR_14);
 VAR_16 = VAR_14->private_data;
 VAR_17 = FUNC_13(VAR_16->tlink);

 if (!VAR_17->ses->server->ops->async_readv)
  return -VAR_3;

 if ((VAR_14->f_flags & VAR_6) == VAR_7)
  FUNC_3(VAR_4, "attempting read on write only file instance\n");

 VAR_21 = FUNC_2();
 if (!VAR_21)
  return -VAR_2;

 VAR_21->cfile = FUNC_1(VAR_16);

 if (!FUNC_6(VAR_10))
  VAR_21->iocb = VAR_10;

 if (FUNC_7(VAR_11))
  VAR_21->should_dirty = 1;

 if (VAR_12) {
  VAR_21->pos = VAR_20;
  VAR_21->direct_io = 1;
  VAR_21->iter = *VAR_11;
  VAR_21->len = VAR_13;
 } else {
  VAR_18 = FUNC_12(VAR_21, VAR_11, VAR_8);
  if (VAR_18) {
   FUNC_8(&VAR_21->refcount, VAR_9);
   return VAR_18;
  }
  VAR_13 = VAR_21->len;
 }


 FUNC_10(&VAR_21->aio_mutex);

 VAR_18 = FUNC_4(VAR_20, VAR_13, VAR_16, VAR_15, &VAR_21->list, VAR_21);


 if (!FUNC_9(&VAR_21->list))
  VAR_18 = 0;

 FUNC_11(&VAR_21->aio_mutex);

 if (VAR_18) {
  FUNC_8(&VAR_21->refcount, VAR_9);
  return VAR_18;
 }

 if (!FUNC_6(VAR_10)) {
  FUNC_8(&VAR_21->refcount, VAR_9);
  return -VAR_1;
 }

 VAR_18 = FUNC_14(&VAR_21->done);
 if (VAR_18) {
  FUNC_10(&VAR_21->aio_mutex);
  VAR_21->rc = VAR_18 = -VAR_0;
  VAR_19 = VAR_21->total_len;
  FUNC_11(&VAR_21->aio_mutex);
 } else {
  VAR_18 = VAR_21->rc;
  VAR_19 = VAR_21->total_len;
 }

 FUNC_8(&VAR_21->refcount, VAR_9);

 if (VAR_19) {
  VAR_10->ki_pos += VAR_19;
  return VAR_19;
 }
 return VAR_18;
}
