
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs4_layoutreturn_args {int dummy; } ;
struct nfs4_flexfile_layoutreturn_args {int errors; int num_errors; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_1,
      const struct nfs4_layoutreturn_args *VAR_2,
      const struct nfs4_flexfile_layoutreturn_args *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_3(VAR_1, 4);
 if (FUNC_2(!VAR_4))
  return -VAR_0;

 *VAR_4 = FUNC_0(VAR_3->num_errors);

 return FUNC_1(VAR_1, &VAR_3->errors);
}
