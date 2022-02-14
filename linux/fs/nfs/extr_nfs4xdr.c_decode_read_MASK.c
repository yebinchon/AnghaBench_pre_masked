
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs_pgio_res {scalar_t__ count; scalar_t__ eof; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_5 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_2, struct rpc_rqst *VAR_3,
         struct nfs_pgio_res *VAR_4)
{
 __be32 *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_1);
 if (VAR_9)
  return VAR_9;
 VAR_5 = FUNC_4(VAR_2, 8);
 if (FUNC_3(!VAR_5))
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_5++);
 VAR_6 = FUNC_0(VAR_5);
 VAR_8 = FUNC_5(VAR_2, VAR_6);
 if (VAR_6 > VAR_8) {
  FUNC_2("NFS: server cheating in read reply: "
    "count %u > recvd %u\n", VAR_6, VAR_8);
  VAR_6 = VAR_8;
  VAR_7 = 0;
 }
 VAR_4->eof = VAR_7;
 VAR_4->count = VAR_6;
 return 0;
}
