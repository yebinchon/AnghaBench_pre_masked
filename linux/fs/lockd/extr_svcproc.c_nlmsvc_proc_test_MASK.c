
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_resp; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,int ) ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->rq_resp);
}
