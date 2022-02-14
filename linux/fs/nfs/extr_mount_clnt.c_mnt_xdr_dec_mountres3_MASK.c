
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct mountres {int errno; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct mountres*) ;
 int FUNC_1 (struct xdr_stream*,struct mountres*) ;
 int FUNC_2 (struct xdr_stream*,struct mountres*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rpc_rqst *VAR_1,
     struct xdr_stream *VAR_2,
     void *VAR_3)
{
 struct mountres *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (FUNC_3(VAR_5 != 0 || VAR_4->errno != 0))
  return VAR_5;
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (FUNC_3(VAR_5 != 0)) {
  VAR_4->errno = -VAR_0;
  return 0;
 }
 return FUNC_0(VAR_2, VAR_4);
}
