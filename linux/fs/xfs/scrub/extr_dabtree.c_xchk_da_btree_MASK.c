
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ xfs_dablk_t ;
typedef int (* xchk_da_btree_rec_fn ) (struct xchk_da_btree*,int,void*) ;
struct xfs_scrub {int tp; TYPE_4__* sm; int ip; struct xfs_mount* mp; } ;
struct xfs_mount {TYPE_1__* m_dir_geo; TYPE_1__* m_attr_geo; } ;
struct xfs_da_state_blk {scalar_t__ index; scalar_t__ magic; int * bp; } ;
struct xfs_da_node_entry {int before; int hashval; } ;
struct TYPE_8__ {int whichfork; TYPE_1__* geo; int op_flags; int trans; int dp; } ;
struct xchk_da_btree {scalar_t__* maxrecs; TYPE_5__* state; int tree_level; scalar_t__ lowest; TYPE_2__ dargs; scalar_t__ highest; void* private; struct xfs_scrub* sc; } ;
struct TYPE_9__ {struct xfs_da_state_blk* blk; } ;
struct TYPE_11__ {TYPE_3__ path; struct xfs_mount* mp; TYPE_2__* args; } ;
struct TYPE_10__ {int sm_flags; } ;
struct TYPE_7__ {scalar_t__ freeblk; scalar_t__ leafblk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xchk_da_btree*,int,scalar_t__) ;
 void* FUNC_3 (struct xchk_da_btree*,int,scalar_t__) ;
 int FUNC_4 (struct xchk_da_btree*,int,int *) ;
 int FUNC_5 (struct xchk_da_btree*,int) ;
 scalar_t__ FUNC_6 (struct xfs_scrub*,int*) ;
 TYPE_5__* FUNC_7 () ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ,int *) ;

int
FUNC_10(
 struct xfs_scrub *VAR_7,
 int VAR_8,
 xchk_da_btree_rec_fn VAR_9,
 void *VAR_10)
{
 struct xchk_da_btree VAR_11 = {};
 struct xfs_mount *VAR_12 = VAR_7->mp;
 struct xfs_da_state_blk *VAR_13;
 struct xfs_da_node_entry *VAR_14;
 void *VAR_15;
 xfs_dablk_t VAR_16;
 int VAR_17;
 int VAR_18;


 if (FUNC_0(VAR_7->ip, VAR_8) != VAR_5 &&
     FUNC_0(VAR_7->ip, VAR_8) != VAR_4)
  return 0;


 VAR_11.dargs.dp = VAR_7->ip;
 VAR_11.dargs.whichfork = VAR_8;
 VAR_11.dargs.trans = VAR_7->tp;
 VAR_11.dargs.op_flags = VAR_3;
 VAR_11.state = FUNC_7();
 VAR_11.state->args = &VAR_11.dargs;
 VAR_11.state->mp = VAR_12;
 VAR_11.sc = VAR_7;
 VAR_11.private = VAR_10;
 if (VAR_8 == VAR_0) {
  VAR_11.dargs.geo = VAR_12->m_attr_geo;
  VAR_11.lowest = 0;
  VAR_11.highest = 0;
 } else {
  VAR_11.dargs.geo = VAR_12->m_dir_geo;
  VAR_11.lowest = VAR_11.dargs.geo->leafblk;
  VAR_11.highest = VAR_11.dargs.geo->freeblk;
 }
 VAR_16 = VAR_11.lowest;
 VAR_17 = 0;


 VAR_13 = VAR_11.state->path.blk;
 VAR_18 = FUNC_2(&VAR_11, VAR_17, VAR_16);
 if (VAR_18)
  goto out_state;





 if (VAR_13[VAR_17].bp == ((void*)0))
  goto out_state;

 VAR_13[VAR_17].index = 0;
 while (VAR_17 >= 0 && VAR_17 < VAR_2) {

  if (VAR_13[VAR_17].magic != VAR_1) {

   if (VAR_13[VAR_17].index >= VAR_11.maxrecs[VAR_17]) {
    if (VAR_17 > 0)
     VAR_13[VAR_17 - 1].index++;
    VAR_11.tree_level++;
    VAR_17--;
    continue;
   }


   VAR_15 = FUNC_3(&VAR_11, VAR_17,
     VAR_13[VAR_17].index);
   VAR_18 = VAR_9(&VAR_11, VAR_17, VAR_15);
   if (VAR_18)
    break;
   if (FUNC_6(VAR_7, &VAR_18) ||
       (VAR_7->sm->sm_flags & VAR_6))
    break;

   VAR_13[VAR_17].index++;
   continue;
  }



  if (VAR_13[VAR_17].index >= VAR_11.maxrecs[VAR_17]) {
   if (VAR_17 > 0)
    VAR_13[VAR_17 - 1].index++;
   VAR_11.tree_level++;
   VAR_17--;
   continue;
  }


  VAR_14 = FUNC_3(&VAR_11, VAR_17, VAR_13[VAR_17].index);
  VAR_18 = FUNC_4(&VAR_11, VAR_17, &VAR_14->hashval);
  if (VAR_18)
   goto out;


  VAR_16 = FUNC_1(VAR_14->before);
  VAR_17++;
  if (VAR_17 >= VAR_2) {

   FUNC_5(&VAR_11, VAR_17 - 1);
   break;
  }
  VAR_11.tree_level--;
  VAR_18 = FUNC_2(&VAR_11, VAR_17, VAR_16);
  if (VAR_18)
   goto out;
  if (VAR_13[VAR_17].bp == ((void*)0))
   goto out;

  VAR_13[VAR_17].index = 0;
 }

out:

 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  if (VAR_13[VAR_17].bp == ((void*)0))
   continue;
  FUNC_9(VAR_7->tp, VAR_13[VAR_17].bp);
  VAR_13[VAR_17].bp = ((void*)0);
 }

out_state:
 FUNC_8(VAR_11.state);
 return VAR_18;
}
