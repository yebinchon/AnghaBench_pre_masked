
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int * p; } ;
struct xdr_buf {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct svc_export {int dummy; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,struct svc_fh*,struct svc_export*,struct dentry*,int *,struct svc_rqst*,int) ;
 int FUNC_1 (struct xdr_stream*,struct xdr_buf*,int *,int) ;

__be32 FUNC_2(__be32 **VAR_0, int VAR_1,
   struct svc_fh *VAR_2, struct svc_export *VAR_3,
   struct dentry *VAR_4, u32 *VAR_5,
   struct svc_rqst *VAR_6, int VAR_7)
{
 struct xdr_buf VAR_8;
 struct xdr_stream VAR_9;
 __be32 VAR_10;

 FUNC_1(&VAR_9, &VAR_8, *VAR_0, VAR_1 << 2);
 VAR_10 = FUNC_0(&VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7);
 *VAR_0 = VAR_9.p;
 return VAR_10;
}
