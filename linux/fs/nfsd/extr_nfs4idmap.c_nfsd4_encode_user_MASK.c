
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
typedef int kuid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct svc_rqst*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct svc_rqst*) ;

__be32 FUNC_3(struct xdr_stream *VAR_1, struct svc_rqst *VAR_2,
    kuid_t VAR_3)
{
 u32 VAR_4 = FUNC_1(FUNC_2(VAR_2), VAR_3);
 return FUNC_0(VAR_1, VAR_2, VAR_0, VAR_4);
}
