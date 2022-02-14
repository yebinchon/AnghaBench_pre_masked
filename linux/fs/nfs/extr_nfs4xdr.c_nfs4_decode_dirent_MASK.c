
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct nfs_entry {int eof; int len; char const* name; int ino; int cookie; int prev_cookie; TYPE_1__* fattr; int d_type; int server; int label; int fh; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int valid; int mounted_on_fileid; int fileid; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_2 (struct xdr_stream*,int *,unsigned int*) ;
 scalar_t__ FUNC_3 (struct xdr_stream*,int *,TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__* FUNC_6 (scalar_t__*,int *) ;
 scalar_t__* FUNC_7 (struct xdr_stream*,int) ;
 scalar_t__ VAR_6 ;

int FUNC_8(struct xdr_stream *VAR_7, struct nfs_entry *VAR_8,
         bool VAR_9)
{
 unsigned int VAR_10;
 uint32_t VAR_11[3] = {0};
 uint32_t VAR_12;
 uint64_t VAR_13;
 __be32 *VAR_14 = FUNC_7(VAR_7, 4);
 if (FUNC_5(!VAR_14))
  return -VAR_1;
 if (*VAR_14 == VAR_6) {
  VAR_14 = FUNC_7(VAR_7, 4);
  if (FUNC_5(!VAR_14))
   return -VAR_1;
  if (*VAR_14 == VAR_6)
   return -VAR_1;
  VAR_8->eof = 1;
  return -VAR_2;
 }

 VAR_14 = FUNC_7(VAR_7, 12);
 if (FUNC_5(!VAR_14))
  return -VAR_1;
 VAR_14 = FUNC_6(VAR_14, &VAR_13);
 VAR_8->len = FUNC_0(VAR_14);

 VAR_14 = FUNC_7(VAR_7, VAR_8->len);
 if (FUNC_5(!VAR_14))
  return -VAR_1;
 VAR_8->name = (const char *) VAR_14;






 VAR_8->ino = 1;
 VAR_8->fattr->valid = 0;

 if (FUNC_1(VAR_7, VAR_11) < 0)
  return -VAR_1;

 if (FUNC_2(VAR_7, &VAR_12, &VAR_10) < 0)
  return -VAR_1;

 if (FUNC_3(VAR_7, VAR_11, VAR_8->fattr, VAR_8->fh,
   ((void*)0), VAR_8->label, VAR_8->server) < 0)
  return -VAR_1;
 if (VAR_8->fattr->valid & VAR_4)
  VAR_8->ino = VAR_8->fattr->mounted_on_fileid;
 else if (VAR_8->fattr->valid & VAR_3)
  VAR_8->ino = VAR_8->fattr->fileid;

 VAR_8->d_type = VAR_0;
 if (VAR_8->fattr->valid & VAR_5)
  VAR_8->d_type = FUNC_4(VAR_8->fattr->mode);

 VAR_8->prev_cookie = VAR_8->cookie;
 VAR_8->cookie = VAR_13;

 return 0;
}
