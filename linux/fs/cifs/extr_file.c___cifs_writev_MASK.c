
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int type; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_aio_ctx {int direct_io; size_t len; int rc; int total_len; int refcount; int aio_mutex; int done; int list; struct iov_iter iter; int pos; struct kiocb* iocb; int cfile; } ;
struct cifsFileInfo {int tlink; } ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_2__* server; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int async_writev; } ;


 struct cifs_sb_info* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cifsFileInfo*) ;
 struct cifs_aio_ctx* FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,size_t,struct iov_iter*,struct cifsFileInfo*,struct cifs_sb_info*,int *,struct cifs_aio_ctx*) ;
 int FUNC_5 (struct kiocb*,struct iov_iter*) ;
 size_t FUNC_6 (struct iov_iter*) ;
 int FUNC_7 (struct kiocb*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct cifs_aio_ctx*,struct iov_iter*,int ) ;
 struct cifs_tcon* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static ssize_t FUNC_16(
 struct kiocb *VAR_8, struct iov_iter *VAR_9, bool VAR_10)
{
 struct file *VAR_11 = VAR_8->ki_filp;
 ssize_t VAR_12 = 0;
 struct cifsFileInfo *VAR_13;
 struct cifs_tcon *VAR_14;
 struct cifs_sb_info *VAR_15;
 struct cifs_aio_ctx *VAR_16;
 struct iov_iter VAR_17 = *VAR_9;
 size_t VAR_18 = FUNC_6(VAR_9);
 int VAR_19;






 if (VAR_10 && VAR_9->type & VAR_5) {
  FUNC_3(VAR_4, "use non-direct cifs_writev for kvec I/O\n");
  VAR_10 = 0;
 }

 VAR_19 = FUNC_5(VAR_8, VAR_9);
 if (VAR_19 <= 0)
  return VAR_19;

 VAR_15 = FUNC_0(VAR_11);
 VAR_13 = VAR_11->private_data;
 VAR_14 = FUNC_13(VAR_13->tlink);

 if (!VAR_14->ses->server->ops->async_writev)
  return -VAR_3;

 VAR_16 = FUNC_2();
 if (!VAR_16)
  return -VAR_2;

 VAR_16->cfile = FUNC_1(VAR_13);

 if (!FUNC_7(VAR_8))
  VAR_16->iocb = VAR_8;

 VAR_16->pos = VAR_8->ki_pos;

 if (VAR_10) {
  VAR_16->direct_io = 1;
  VAR_16->iter = *VAR_9;
  VAR_16->len = VAR_18;
 } else {
  VAR_19 = FUNC_12(VAR_16, VAR_9, VAR_6);
  if (VAR_19) {
   FUNC_8(&VAR_16->refcount, VAR_7);
   return VAR_19;
  }
 }


 FUNC_10(&VAR_16->aio_mutex);

 VAR_19 = FUNC_4(VAR_8->ki_pos, VAR_16->len, &VAR_17,
      VAR_13, VAR_15, &VAR_16->list, VAR_16);







 if (!FUNC_9(&VAR_16->list))
  VAR_19 = 0;

 FUNC_11(&VAR_16->aio_mutex);

 if (VAR_19) {
  FUNC_8(&VAR_16->refcount, VAR_7);
  return VAR_19;
 }

 if (!FUNC_7(VAR_8)) {
  FUNC_8(&VAR_16->refcount, VAR_7);
  return -VAR_1;
 }

 VAR_19 = FUNC_15(&VAR_16->done);
 if (VAR_19) {
  FUNC_10(&VAR_16->aio_mutex);
  VAR_16->rc = VAR_19 = -VAR_0;
  VAR_12 = VAR_16->total_len;
  FUNC_11(&VAR_16->aio_mutex);
 } else {
  VAR_19 = VAR_16->rc;
  VAR_12 = VAR_16->total_len;
 }

 FUNC_8(&VAR_16->refcount, VAR_7);

 if (FUNC_14(!VAR_12))
  return VAR_19;

 VAR_8->ki_pos += VAR_12;
 return VAR_12;
}
