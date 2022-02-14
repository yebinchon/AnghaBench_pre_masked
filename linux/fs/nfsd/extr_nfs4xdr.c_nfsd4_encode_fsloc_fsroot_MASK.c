
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct svc_export {int ex_path; } ;
struct path {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_export*) ;
 int FUNC_3 (struct xdr_stream*,int *,struct path const*) ;
 int FUNC_4 (int ) ;
 struct svc_export* FUNC_5 (struct svc_rqst*) ;

__attribute__((used)) static __be32 FUNC_6(struct xdr_stream *VAR_0,
   struct svc_rqst *VAR_1, const struct path *VAR_2)
{
 struct svc_export *VAR_3;
 __be32 VAR_4;

 VAR_3 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_4(FUNC_1(VAR_3));
 VAR_4 = FUNC_3(VAR_0, &VAR_3->ex_path, VAR_2);
 FUNC_2(VAR_3);
 return VAR_4;
}
