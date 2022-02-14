
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int dummy; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct devlink*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct nfp_pf*) ;
 struct devlink* FUNC_4 (struct nfp_pf*) ;

int FUNC_5(struct nfp_pf *VAR_1)
{
 struct devlink *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 <= 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0,
          FUNC_0(VAR_0));
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_2);
 return 0;
}
