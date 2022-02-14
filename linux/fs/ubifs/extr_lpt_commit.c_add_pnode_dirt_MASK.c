
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_pnode {size_t iip; TYPE_2__* parent; } ;
struct ubifs_info {int pnode_sz; } ;
struct TYPE_4__ {TYPE_1__* nbranch; } ;
struct TYPE_3__ {int lnum; } ;


 int FUNC_0 (struct ubifs_info*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0, struct ubifs_pnode *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->parent->nbranch[VAR_1->iip].lnum,
      VAR_0->pnode_sz);
}
