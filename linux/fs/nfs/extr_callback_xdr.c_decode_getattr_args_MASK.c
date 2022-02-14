
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct cb_getattrargs {int bitmap; int fh; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct xdr_stream*,int ) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static __be32 FUNC_3(struct svc_rqst *VAR_0,
  struct xdr_stream *VAR_1, void *VAR_2)
{
 struct cb_getattrargs *VAR_3 = VAR_2;
 __be32 VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_3->fh);
 if (FUNC_2(VAR_4 != 0))
  return VAR_4;
 return FUNC_0(VAR_1, VAR_3->bitmap);
}
