
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_2__ {scalar_t__ cr_flavor; } ;
struct svc_rqst {TYPE_1__ rq_cred; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*,struct svc_rqst*,int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32 FUNC_2(struct xdr_stream *VAR_2,
      struct svc_rqst *VAR_3, int VAR_4, u32 VAR_5)
{
 if (VAR_1 && VAR_3->rq_cred.cr_flavor < VAR_0)
  return FUNC_0(VAR_2, VAR_5);
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
