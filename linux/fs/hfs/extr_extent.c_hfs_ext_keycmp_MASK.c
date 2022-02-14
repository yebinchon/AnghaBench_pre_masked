
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ FNum; scalar_t__ FkType; scalar_t__ FABN; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ btree_key ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(const btree_key *VAR_0, const btree_key *VAR_1)
{
 __be32 VAR_2, VAR_3;
 __be16 VAR_4, VAR_5;

 VAR_2 = VAR_0->ext.FNum;
 VAR_3 = VAR_1->ext.FNum;
 if (VAR_2 != VAR_3)
  return FUNC_1(VAR_2) < FUNC_1(VAR_3) ? -1 : 1;
 if (VAR_0->ext.FkType != VAR_1->ext.FkType)
  return VAR_0->ext.FkType < VAR_1->ext.FkType ? -1 : 1;

 VAR_4 = VAR_0->ext.FABN;
 VAR_5 = VAR_1->ext.FABN;
 if (VAR_4 == VAR_5)
  return 0;
 return FUNC_0(VAR_4) < FUNC_0(VAR_5) ? -1 : 1;
}
