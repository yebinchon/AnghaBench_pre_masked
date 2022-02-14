
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ cr_flavor; } ;
struct svc_rqst {TYPE_1__ rq_cred; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct svc_rqst*,int,char const*,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct svc_rqst*,int,char const*,int ,int *) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_2, int VAR_3, const char *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 if (VAR_1 && VAR_2->rq_cred.cr_flavor < VAR_0)
  if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
   return 0;




 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
