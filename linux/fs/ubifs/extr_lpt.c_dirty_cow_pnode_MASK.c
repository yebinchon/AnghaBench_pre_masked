
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_pnode {size_t iip; TYPE_2__* parent; int flags; int * cnext; } ;
struct ubifs_info {int dirty_pn_cnt; } ;
struct TYPE_4__ {TYPE_1__* nbranch; } ;
struct TYPE_3__ {struct ubifs_pnode* pnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubifs_pnode* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_pnode*) ;
 struct ubifs_pnode* FUNC_4 (struct ubifs_pnode*,int,int ) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_pnode*,struct ubifs_pnode*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct ubifs_pnode *FUNC_10(struct ubifs_info *VAR_5,
        struct ubifs_pnode *VAR_6)
{
 struct ubifs_pnode *VAR_7;

 if (!FUNC_7(VAR_0, &VAR_6->flags)) {

  if (!FUNC_6(VAR_1, &VAR_6->flags)) {
   VAR_5->dirty_pn_cnt += 1;
   FUNC_3(VAR_5, VAR_6);
  }
  return VAR_6;
 }


 VAR_7 = FUNC_4(VAR_6, sizeof(struct ubifs_pnode), VAR_3);
 if (FUNC_9(!VAR_7))
  return FUNC_0(-VAR_2);

 VAR_7->cnext = ((void*)0);
 FUNC_2(VAR_1, &VAR_7->flags);
 FUNC_1(VAR_0, &VAR_7->flags);
 FUNC_5(VAR_5, VAR_6, VAR_7);

 FUNC_8(VAR_5, !FUNC_7(VAR_4, &VAR_6->flags));
 FUNC_2(VAR_4, &VAR_6->flags);

 VAR_5->dirty_pn_cnt += 1;
 FUNC_3(VAR_5, VAR_6);
 VAR_6->parent->nbranch[VAR_7->iip].pnode = VAR_7;
 return VAR_7;
}
