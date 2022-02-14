
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_3, struct nfs_fh *VAR_4)
{
 u32 VAR_5;
 __be32 *VAR_6;

 VAR_6 = FUNC_4(VAR_3, 4);
 if (FUNC_3(!VAR_6))
  return -VAR_1;
 VAR_5 = FUNC_0(VAR_6++);
 if (FUNC_3(VAR_5 > VAR_2))
  goto out_toobig;
 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (FUNC_3(!VAR_6))
  return -VAR_1;
 VAR_4->size = VAR_5;
 FUNC_2(VAR_4->data, VAR_6, VAR_5);
 return 0;
out_toobig:
 FUNC_1("NFS: file handle size (%u) too big\n", VAR_5);
 return -VAR_0;
}
