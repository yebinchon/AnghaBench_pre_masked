
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_node {int in_tree; int type; int refs; } ;






 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct btrfs_delayed_ref_node*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct btrfs_delayed_ref_node *VAR_2)
{
 FUNC_1(FUNC_4(&VAR_2->refs) == 0);
 if (FUNC_3(&VAR_2->refs)) {
  FUNC_1(VAR_2->in_tree);
  switch (VAR_2->type) {
  case 128:
  case 130:
   FUNC_2(VAR_1, VAR_2);
   break;
  case 131:
  case 129:
   FUNC_2(VAR_0, VAR_2);
   break;
  default:
   FUNC_0();
  }
 }
}
