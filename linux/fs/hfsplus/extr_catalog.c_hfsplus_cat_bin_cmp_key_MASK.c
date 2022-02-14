
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ parent; int name; } ;
struct TYPE_6__ {TYPE_1__ cat; } ;
typedef TYPE_2__ hfsplus_btree_key ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(const hfsplus_btree_key *VAR_0,
       const hfsplus_btree_key *VAR_1)
{
 __be32 VAR_2, VAR_3;

 VAR_2 = VAR_0->cat.parent;
 VAR_3 = VAR_1->cat.parent;
 if (VAR_2 != VAR_3)
  return FUNC_0(VAR_2) < FUNC_0(VAR_3) ? -1 : 1;

 return FUNC_1(&VAR_0->cat.name, &VAR_1->cat.name);
}
