
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned long shape_changes; int nr_ops; } ;
struct TYPE_12__ {TYPE_3__ refc; } ;
struct TYPE_13__ {TYPE_4__ priv; } ;
struct TYPE_14__ {TYPE_5__ a; } ;
struct xfs_btree_cur {TYPE_6__ bc_private; TYPE_2__* bc_tp; TYPE_7__* bc_mp; } ;
struct TYPE_9__ {unsigned long sb_blocksize; } ;
struct TYPE_15__ {TYPE_1__ m_sb; } ;
struct TYPE_10__ {unsigned long t_log_res; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_7__*,int ) ;
 unsigned long FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static bool
FUNC_2(
 struct xfs_btree_cur *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_2->bc_private.a.priv.refc.shape_changes *
   FUNC_1(VAR_2->bc_mp, 1);
 VAR_3 *= VAR_2->bc_mp->m_sb.sb_blocksize;





 if (VAR_2->bc_private.a.priv.refc.nr_ops > 2 &&
     FUNC_0(0, VAR_2->bc_mp,
   VAR_0))
  return 0;

 if (VAR_2->bc_private.a.priv.refc.nr_ops == 0)
  return 1;
 else if (VAR_3 > VAR_2->bc_tp->t_log_res)
  return 0;
 return VAR_2->bc_tp->t_log_res - VAR_3 >
  VAR_2->bc_private.a.priv.refc.nr_ops * VAR_1;
}
