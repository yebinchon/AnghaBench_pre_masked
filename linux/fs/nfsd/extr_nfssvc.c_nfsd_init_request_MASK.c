
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int rq_vers; } ;
struct svc_program {int dummy; } ;
struct TYPE_2__ {int lovers; int hivers; } ;
struct svc_process_info {TYPE_1__ mismatch; } ;
struct nfsd_net {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_rqst*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct nfsd_net* FUNC_2 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct nfsd_net*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct svc_rqst*,struct svc_program const*,struct svc_process_info*) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_6,
    const struct svc_program *VAR_7,
    struct svc_process_info *VAR_8)
{
 struct nfsd_net *VAR_9 = FUNC_2(FUNC_0(VAR_6), VAR_3);
 int VAR_10;

 if (FUNC_1(FUNC_3(VAR_9, VAR_6->rq_vers, VAR_2)))
  return FUNC_4(VAR_6, VAR_7, VAR_8);

 VAR_8->mismatch.lovers = VAR_1;
 for (VAR_10 = VAR_0; VAR_10 < VAR_1; VAR_10++) {
  if (FUNC_3(VAR_9, VAR_10, VAR_2)) {
   VAR_8->mismatch.lovers = VAR_10;
   break;
  }
 }
 if (VAR_8->mismatch.lovers == VAR_1)
  return VAR_5;
 VAR_8->mismatch.hivers = VAR_0;
 for (VAR_10 = VAR_1 - 1; VAR_10 >= VAR_0; VAR_10--) {
  if (FUNC_3(VAR_9, VAR_10, VAR_2)) {
   VAR_8->mismatch.hivers = VAR_10;
   break;
  }
 }
 return VAR_4;
}
