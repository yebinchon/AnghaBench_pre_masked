
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct nfs4_ace {scalar_t__ whotype; int flag; int who_uid; int who_gid; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xdr_stream*,scalar_t__) ;
 int FUNC_1 (struct xdr_stream*,struct svc_rqst*,int ) ;
 int FUNC_2 (struct xdr_stream*,struct svc_rqst*,int ) ;

__attribute__((used)) static inline __be32
FUNC_3(struct xdr_stream *VAR_2, struct svc_rqst *VAR_3,
       struct nfs4_ace *VAR_4)
{
 if (VAR_4->whotype != VAR_1)
  return FUNC_0(VAR_2, VAR_4->whotype);
 else if (VAR_4->flag & VAR_0)
  return FUNC_1(VAR_2, VAR_3, VAR_4->who_gid);
 else
  return FUNC_2(VAR_2, VAR_3, VAR_4->who_uid);
}
