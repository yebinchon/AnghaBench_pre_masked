
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


union xfs_btree_ptr {int s; int l; } ;
struct xchk_btree {TYPE_1__* cur; int sc; } ;
struct TYPE_4__ {int bc_flags; int bc_nlevels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool
FUNC_5(
 struct xchk_btree *VAR_2,
 int VAR_3,
 union xfs_btree_ptr *VAR_4)
{
 bool VAR_5;


 if ((VAR_2->cur->bc_flags & VAR_1) &&
     VAR_3 == VAR_2->cur->bc_nlevels)
  return 1;


 if (VAR_2->cur->bc_flags & VAR_0)
  VAR_5 = FUNC_3(VAR_2->cur, FUNC_1(VAR_4->l), VAR_3);
 else
  VAR_5 = FUNC_4(VAR_2->cur, FUNC_0(VAR_4->s), VAR_3);
 if (!VAR_5)
  FUNC_2(VAR_2->sc, VAR_2->cur, VAR_3);

 return VAR_5;
}
