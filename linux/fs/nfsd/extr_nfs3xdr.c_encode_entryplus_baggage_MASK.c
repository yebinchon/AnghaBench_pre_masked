
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct svc_fh {int dummy; } ;
struct nfsd3_readdirres {int rqstp; struct svc_fh scratch; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfsd3_readdirres*,struct svc_fh*,char const*,int,int ) ;
 scalar_t__* FUNC_1 (scalar_t__*,struct svc_fh*) ;
 scalar_t__* FUNC_2 (int ,scalar_t__*,struct svc_fh*) ;
 int FUNC_3 (struct svc_fh*,int ) ;
 int FUNC_4 (struct svc_fh*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32 *FUNC_5(struct nfsd3_readdirres *VAR_2, __be32 *VAR_3, const char *VAR_4, int VAR_5, u64 VAR_6)
{
 struct svc_fh *VAR_7 = &VAR_2->scratch;
 __be32 VAR_8;

 FUNC_3(VAR_7, VAR_0);
 VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
 if (VAR_8) {
  *VAR_3++ = 0;
  *VAR_3++ = 0;
  goto out;
 }
 VAR_3 = FUNC_2(VAR_2->rqstp, VAR_3, VAR_7);
 *VAR_3++ = VAR_1;
 VAR_3 = FUNC_1(VAR_3, VAR_7);
out:
 FUNC_4(VAR_7);
 return VAR_3;
}
