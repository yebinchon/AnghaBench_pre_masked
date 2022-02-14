
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct nfs_pgio_res {scalar_t__ count; scalar_t__ eof; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_4 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1, struct nfs_pgio_res *VAR_2)
{
 u32 VAR_3, VAR_4;
 __be32 *VAR_5;

 VAR_5 = FUNC_3(VAR_1, 4);
 if (FUNC_2(!VAR_5))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_5);
 VAR_3 = FUNC_4(VAR_1, VAR_4);
 if (FUNC_2(VAR_4 > VAR_3))
  goto out_cheating;
out:
 VAR_2->eof = 0;
 VAR_2->count = VAR_4;
 return VAR_4;
out_cheating:
 FUNC_1("NFS: server cheating in read result: "
  "count %u > recvd %u\n", VAR_4, VAR_3);
 VAR_4 = VAR_3;
 goto out;
}
