
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct xdr_buf {scalar_t__ page_len; } ;
struct rpc_rqst {struct xdr_buf rq_rcv_buf; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_5 (struct xdr_stream*,scalar_t__) ;
 int FUNC_6 (struct xdr_buf*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct xdr_stream *VAR_3, struct rpc_rqst *VAR_4)
{
 struct xdr_buf *VAR_5 = &VAR_4->rq_rcv_buf;
 u32 VAR_6, VAR_7;
 __be32 *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_2);
 if (VAR_9)
  return VAR_9;


 VAR_8 = FUNC_4(VAR_3, 4);
 if (FUNC_3(!VAR_8))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_8);
 if (VAR_6 >= VAR_5->page_len || VAR_6 <= 0) {
  FUNC_2("nfs: server returned giant symlink!\n");
  return -VAR_1;
 }
 VAR_7 = FUNC_5(VAR_3, VAR_6);
 if (VAR_7 < VAR_6) {
  FUNC_2("NFS: server cheating in readlink reply: "
    "count %u > recvd %u\n", VAR_6, VAR_7);
  return -VAR_0;
 }







 FUNC_6(VAR_5, VAR_6);
 return 0;
}
