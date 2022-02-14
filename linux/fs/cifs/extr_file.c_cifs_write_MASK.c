
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct kvec {char* iov_base; unsigned int iov_len; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_io_parms {unsigned int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; } ;
struct cifsInodeInfo {int dummy; } ;
struct cifsFileInfo {int fid; scalar_t__ invalidHandle; int tlink; struct dentry* dentry; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
typedef int __u32 ;
struct TYPE_10__ {scalar_t__ i_size; int i_lock; } ;
struct TYPE_9__ {int (* sync_write ) (unsigned int,int *,struct cifs_io_parms*,unsigned int*,struct kvec*,int) ;int (* wp_retry_size ) (TYPE_3__*) ;} ;
struct TYPE_8__ {struct TCP_Server_Info* server; } ;


 struct cifsInodeInfo* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,size_t,scalar_t__,struct dentry*) ;
 int FUNC_2 (struct cifsFileInfo*,int) ;
 int FUNC_3 (struct cifs_tcon*,unsigned int) ;
 int FUNC_4 (struct cifsInodeInfo*,scalar_t__,unsigned int) ;
 TYPE_3__* FUNC_5 (struct dentry*) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;
 unsigned int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (unsigned int,int *,struct cifs_io_parms*,unsigned int*,struct kvec*,int) ;
 struct cifs_tcon* FUNC_15 (int ) ;

__attribute__((used)) static ssize_t
FUNC_16(struct cifsFileInfo *VAR_3, __u32 VAR_4, const char *VAR_5,
    size_t VAR_6, loff_t *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;
 struct cifs_tcon *VAR_11;
 struct TCP_Server_Info *VAR_12;
 unsigned int VAR_13;
 struct dentry *VAR_14 = VAR_3->dentry;
 struct cifsInodeInfo *VAR_15 = FUNC_0(FUNC_5(VAR_14));
 struct cifs_io_parms VAR_16;

 FUNC_1(VAR_2, "write %zd bytes to offset %lld of %pd\n",
   VAR_6, *VAR_7, VAR_14);

 VAR_11 = FUNC_15(VAR_3->tlink);
 VAR_12 = VAR_11->ses->server;

 if (!VAR_12->ops->sync_write)
  return -VAR_1;

 VAR_13 = FUNC_7();

 for (VAR_10 = 0; VAR_6 > VAR_10;
      VAR_10 += VAR_9) {
  VAR_8 = -VAR_0;
  while (VAR_8 == -VAR_0) {
   struct kvec VAR_17[2];
   unsigned int VAR_18;

   if (VAR_3->invalidHandle) {




    VAR_8 = FUNC_2(VAR_3, 0);
    if (VAR_8 != 0)
     break;
   }

   VAR_18 = FUNC_10(VAR_12->ops->wp_retry_size(FUNC_5(VAR_14)),
      (unsigned int)VAR_6 - VAR_10);

   VAR_17[1].iov_base = (char *)VAR_5 + VAR_10;
   VAR_17[1].iov_len = VAR_18;
   VAR_16.pid = VAR_4;
   VAR_16.tcon = VAR_11;
   VAR_16.offset = *VAR_7;
   VAR_16.length = VAR_18;
   VAR_8 = VAR_12->ops->sync_write(VAR_13, &VAR_3->fid,
     &VAR_16, &VAR_9, VAR_17, 1);
  }
  if (VAR_8 || (VAR_9 == 0)) {
   if (VAR_10)
    break;
   else {
    FUNC_6(VAR_13);
    return VAR_8;
   }
  } else {
   FUNC_11(&FUNC_5(VAR_14)->i_lock);
   FUNC_4(VAR_15, *VAR_7, VAR_9);
   FUNC_12(&FUNC_5(VAR_14)->i_lock);
   *VAR_7 += VAR_9;
  }
 }

 FUNC_3(VAR_11, VAR_10);

 if (VAR_10 > 0) {
  FUNC_11(&FUNC_5(VAR_14)->i_lock);
  if (*VAR_7 > FUNC_5(VAR_14)->i_size)
   FUNC_8(FUNC_5(VAR_14), *VAR_7);
  FUNC_12(&FUNC_5(VAR_14)->i_lock);
 }
 FUNC_9(FUNC_5(VAR_14));
 FUNC_6(VAR_13);
 return VAR_10;
}
