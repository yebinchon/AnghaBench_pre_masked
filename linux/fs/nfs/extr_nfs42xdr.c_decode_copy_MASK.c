
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs42_copy_res {int write_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,struct nfs42_copy_res*) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, struct nfs42_copy_res *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 == VAR_0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
  return VAR_0;
 } else if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, &VAR_3->write_res);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_3);
}
