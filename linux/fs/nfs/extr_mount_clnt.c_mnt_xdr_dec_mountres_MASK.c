
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct mountres {scalar_t__ errno; } ;


 int FUNC_0 (struct xdr_stream*,struct mountres*) ;
 int FUNC_1 (struct xdr_stream*,struct mountres*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rpc_rqst *VAR_0,
    struct xdr_stream *VAR_1,
    void *VAR_2)
{
 struct mountres *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (FUNC_2(VAR_4 != 0 || VAR_3->errno != 0))
  return VAR_4;
 return FUNC_0(VAR_1, VAR_3);
}
