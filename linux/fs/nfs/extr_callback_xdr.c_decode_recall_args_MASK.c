
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct cb_recallargs {int fh; int truncate; int stateid; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__* FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_6(struct svc_rqst *VAR_1,
  struct xdr_stream *VAR_2, void *VAR_3)
{
 struct cb_recallargs *VAR_4 = VAR_3;
 __be32 *VAR_5;
 __be32 VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_4->stateid);
 if (FUNC_4(VAR_6 != 0))
  return VAR_6;
 VAR_5 = FUNC_5(VAR_2, 4);
 if (FUNC_4(VAR_5 == ((void*)0)))
  return FUNC_2(VAR_0);
 VAR_4->truncate = FUNC_3(*VAR_5);
 return FUNC_1(VAR_2, &VAR_4->fh);
}
