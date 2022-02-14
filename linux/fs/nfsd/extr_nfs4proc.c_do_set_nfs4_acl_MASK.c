
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfs4_acl {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,struct nfs4_acl*) ;

__attribute__((used)) static void
FUNC_1(struct svc_rqst *VAR_1, struct svc_fh *VAR_2,
  struct nfs4_acl *VAR_3, u32 *VAR_4)
{
 __be32 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5)





  VAR_4[0] &= ~VAR_0;
}
