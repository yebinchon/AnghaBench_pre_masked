
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {TYPE_1__* arfs; } ;
struct qede_arfs_fltr_node {scalar_t__ sw_id; struct qede_arfs_fltr_node* data; } ;
struct TYPE_2__ {int arfs_fltr_bmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct qede_arfs_fltr_node*) ;

__attribute__((used)) static void
FUNC_2(struct qede_dev *VAR_1, struct qede_arfs_fltr_node *VAR_2)
{
 FUNC_1(VAR_2->data);

 if (VAR_2->sw_id < VAR_0)
  FUNC_0(VAR_2->sw_id, VAR_1->arfs->arfs_fltr_bmap);

 FUNC_1(VAR_2);
}
