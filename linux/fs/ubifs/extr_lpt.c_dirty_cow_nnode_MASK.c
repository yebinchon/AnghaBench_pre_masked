
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubifs_nnode {size_t iip; TYPE_3__* parent; int flags; struct ubifs_nbranch* nbranch; int * cnext; } ;
struct ubifs_nbranch {TYPE_1__* cnode; } ;
struct ubifs_info {int dirty_nn_cnt; struct ubifs_nnode* nroot; } ;
struct TYPE_6__ {TYPE_2__* nbranch; } ;
struct TYPE_5__ {struct ubifs_nnode* nnode; } ;
struct TYPE_4__ {struct ubifs_nnode* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubifs_nnode* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 struct ubifs_nnode* FUNC_3 (struct ubifs_nnode*,int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_nnode*) ;
 int FUNC_7 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct ubifs_nnode *FUNC_9(struct ubifs_info *VAR_6,
        struct ubifs_nnode *VAR_7)
{
 struct ubifs_nnode *VAR_8;
 int VAR_9;

 if (!FUNC_5(VAR_0, &VAR_7->flags)) {

  if (!FUNC_4(VAR_1, &VAR_7->flags)) {
   VAR_6->dirty_nn_cnt += 1;
   FUNC_6(VAR_6, VAR_7);
  }
  return VAR_7;
 }


 VAR_8 = FUNC_3(VAR_7, sizeof(struct ubifs_nnode), VAR_3);
 if (FUNC_8(!VAR_8))
  return FUNC_0(-VAR_2);

 VAR_8->cnext = ((void*)0);
 FUNC_2(VAR_1, &VAR_8->flags);
 FUNC_1(VAR_0, &VAR_8->flags);


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct ubifs_nbranch *VAR_10 = &VAR_8->nbranch[VAR_9];

  if (VAR_10->cnode)
   VAR_10->cnode->parent = VAR_8;
 }

 FUNC_7(VAR_6, !FUNC_5(VAR_4, &VAR_7->flags));
 FUNC_2(VAR_4, &VAR_7->flags);

 VAR_6->dirty_nn_cnt += 1;
 FUNC_6(VAR_6, VAR_7);
 if (VAR_7->parent)
  VAR_7->parent->nbranch[VAR_8->iip].nnode = VAR_8;
 else
  VAR_6->nroot = VAR_8;
 return VAR_8;
}
