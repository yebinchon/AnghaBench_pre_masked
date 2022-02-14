
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs_entry {int eof; scalar_t__ ino; int cookie; int prev_cookie; int fh; TYPE_2__* fattr; int d_type; int len; int name; TYPE_1__* server; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int valid; scalar_t__ fileid; scalar_t__ mounted_on_fileid; int mode; } ;
struct TYPE_3__ {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,scalar_t__*) ;
 int FUNC_2 (struct xdr_stream*,int *,int *) ;
 int FUNC_3 (struct xdr_stream*,int ) ;
 int FUNC_4 (struct xdr_stream*,TYPE_2__*,struct user_namespace*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 struct user_namespace* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__* FUNC_9 (struct xdr_stream*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int ) ;

int FUNC_11(struct xdr_stream *VAR_7, struct nfs_entry *VAR_8,
         bool VAR_9)
{
 struct user_namespace *VAR_10 = FUNC_7(VAR_8->server->client);
 struct nfs_entry VAR_11 = *VAR_8;
 __be32 *VAR_12;
 int VAR_13;
 u64 VAR_14;

 VAR_12 = FUNC_9(VAR_7, 4);
 if (FUNC_8(!VAR_12))
  return -VAR_2;
 if (*VAR_12 == VAR_6) {
  VAR_12 = FUNC_9(VAR_7, 4);
  if (FUNC_8(!VAR_12))
   return -VAR_2;
  if (*VAR_12 == VAR_6)
   return -VAR_2;
  VAR_8->eof = 1;
  return -VAR_3;
 }

 VAR_13 = FUNC_1(VAR_7, &VAR_8->ino);
 if (FUNC_8(VAR_13))
  return VAR_13;

 VAR_13 = FUNC_2(VAR_7, &VAR_8->name, &VAR_8->len);
 if (FUNC_8(VAR_13))
  return VAR_13;

 VAR_13 = FUNC_0(VAR_7, &VAR_14);
 if (FUNC_8(VAR_13))
  return VAR_13;

 VAR_8->d_type = VAR_0;

 if (VAR_9) {
  VAR_8->fattr->valid = 0;
  VAR_13 = FUNC_4(VAR_7, VAR_8->fattr, VAR_10);
  if (FUNC_8(VAR_13))
   return VAR_13;
  if (VAR_8->fattr->valid & VAR_5)
   VAR_8->d_type = FUNC_6(VAR_8->fattr->mode);

  if (VAR_8->fattr->fileid != VAR_8->ino) {
   VAR_8->fattr->mounted_on_fileid = VAR_8->ino;
   VAR_8->fattr->valid |= VAR_4;
  }


  VAR_12 = FUNC_9(VAR_7, 4);
  if (FUNC_8(!VAR_12))
   return -VAR_2;
  if (*VAR_12 != VAR_6) {
   VAR_13 = FUNC_3(VAR_7, VAR_8->fh);
   if (FUNC_8(VAR_13)) {
    if (VAR_13 == -VAR_1)
     goto out_truncated;
    return VAR_13;
   }
  } else
   FUNC_10(VAR_8->fh);
 }

 VAR_8->prev_cookie = VAR_8->cookie;
 VAR_8->cookie = VAR_14;

 return 0;

out_truncated:
 FUNC_5("NFS: directory entry contains invalid file handle\n");
 *VAR_8 = VAR_11;
 return -VAR_2;
}
