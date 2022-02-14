
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cnid; scalar_t__ fork_type; scalar_t__ start_block; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ hfsplus_btree_key ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(const hfsplus_btree_key *VAR_0,
   const hfsplus_btree_key *VAR_1)
{
 __be32 VAR_2, VAR_3;
 __be32 VAR_4, VAR_5;

 VAR_2 = VAR_0->ext.cnid;
 VAR_3 = VAR_1->ext.cnid;
 if (VAR_2 != VAR_3)
  return FUNC_0(VAR_2) < FUNC_0(VAR_3) ? -1 : 1;

 if (VAR_0->ext.fork_type != VAR_1->ext.fork_type)
  return VAR_0->ext.fork_type < VAR_1->ext.fork_type ? -1 : 1;

 VAR_4 = VAR_0->ext.start_block;
 VAR_5 = VAR_1->ext.start_block;
 if (VAR_4 == VAR_5)
  return 0;
 return FUNC_0(VAR_4) < FUNC_0(VAR_5) ? -1 : 1;
}
