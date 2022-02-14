
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct iattr {int ia_valid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct svc_fh*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct svc_rqst*,struct svc_fh*,struct iattr*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_4, struct svc_fh *VAR_5,
   struct iattr *VAR_6)
{



 VAR_6->ia_valid &= ~VAR_1;





 if (!FUNC_4(FUNC_1(), VAR_3))
  VAR_6->ia_valid &= ~(VAR_2|VAR_0);
 if (VAR_6->ia_valid)
  return FUNC_2(VAR_4, VAR_5, VAR_6, 0, (time_t)0);

 return FUNC_3(FUNC_0(VAR_5));
}
