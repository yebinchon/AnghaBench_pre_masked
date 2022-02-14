
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubifs_info {TYPE_2__* rcvrd_mst_node; TYPE_1__* mst_node; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ubifs_info*,TYPE_2__*) ;

int FUNC_3(struct ubifs_info *VAR_1)
{
 int VAR_2;

 if (!VAR_1->rcvrd_mst_node)
  return 0;
 VAR_1->rcvrd_mst_node->flags |= FUNC_0(VAR_0);
 VAR_1->mst_node->flags |= FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_1, VAR_1->rcvrd_mst_node);
 if (VAR_2)
  return VAR_2;
 FUNC_1(VAR_1->rcvrd_mst_node);
 VAR_1->rcvrd_mst_node = ((void*)0);
 return 0;
}
