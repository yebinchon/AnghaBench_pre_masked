
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
typedef int kuid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*,int ,char const*,size_t,int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct svc_rqst*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__be32
FUNC_4(struct svc_rqst *VAR_3, const char *VAR_4, size_t VAR_5,
  kuid_t *VAR_6)
{
 __be32 VAR_7;
 u32 VAR_8 = -1;

 if (VAR_4 == ((void*)0) || VAR_5 == 0)
  return VAR_2;

 VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_4, VAR_5, &VAR_8);
 *VAR_6 = FUNC_1(FUNC_2(VAR_3), VAR_8);
 if (!FUNC_3(*VAR_6))
  VAR_7 = VAR_1;
 return VAR_7;
}
