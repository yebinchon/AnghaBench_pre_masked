
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct TYPE_6__ {scalar_t__ minor; void* major; } ;
struct TYPE_4__ {void* blocks; void* blocksize; } ;
struct TYPE_5__ {TYPE_1__ nfs2; } ;
struct nfs_fattr {int mode; int ctime; int change_attr; int mtime; int atime; void* fileid; TYPE_3__ fsid; TYPE_2__ du; int rdev; void* size; int gid; int uid; void* nlink; int valid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct user_namespace*,void*) ;
 int FUNC_4 (struct user_namespace*,void*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int * FUNC_9 (int *,scalar_t__*) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_12(struct xdr_stream *VAR_8, struct nfs_fattr *VAR_9,
  struct user_namespace *VAR_10)
{
 u32 VAR_11, VAR_12;
 __be32 *VAR_13;

 VAR_13 = FUNC_11(VAR_8, VAR_5 << 2);
 if (FUNC_8(!VAR_13))
  return -VAR_1;

 VAR_9->valid |= VAR_4;

 VAR_13 = FUNC_9(VAR_13, &VAR_12);

 VAR_9->mode = FUNC_0(VAR_13++);
 VAR_9->nlink = FUNC_0(VAR_13++);
 VAR_9->uid = FUNC_4(VAR_10, FUNC_0(VAR_13++));
 if (!FUNC_7(VAR_9->uid))
  goto out_uid;
 VAR_9->gid = FUNC_3(VAR_10, FUNC_0(VAR_13++));
 if (!FUNC_2(VAR_9->gid))
  goto out_gid;

 VAR_9->size = FUNC_0(VAR_13++);
 VAR_9->du.nfs2.blocksize = FUNC_0(VAR_13++);

 VAR_11 = FUNC_0(VAR_13++);
 VAR_9->rdev = FUNC_5(VAR_11);
 if (VAR_12 == (u32)VAR_2 && VAR_11 == (u32)VAR_3) {
  VAR_9->mode = (VAR_9->mode & ~VAR_7) | VAR_6;
  VAR_9->rdev = 0;
 }

 VAR_9->du.nfs2.blocks = FUNC_0(VAR_13++);
 VAR_9->fsid.major = FUNC_0(VAR_13++);
 VAR_9->fsid.minor = 0;
 VAR_9->fileid = FUNC_0(VAR_13++);

 VAR_13 = FUNC_10(VAR_13, &VAR_9->atime);
 VAR_13 = FUNC_10(VAR_13, &VAR_9->mtime);
 FUNC_10(VAR_13, &VAR_9->ctime);
 VAR_9->change_attr = FUNC_6(&VAR_9->ctime);

 return 0;
out_uid:
 FUNC_1("NFS: returned invalid uid\n");
 return -VAR_0;
out_gid:
 FUNC_1("NFS: returned invalid gid\n");
 return -VAR_0;
}
