
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfp_pf {int app; } ;
struct devlink {int dummy; } ;


 struct nfp_pf* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_0, u16 *VAR_1)
{
 struct nfp_pf *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->app, VAR_1);
}
