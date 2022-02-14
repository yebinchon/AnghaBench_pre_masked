
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {scalar_t__ node; int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct btrfs_root *VAR_1)
{
 if (!VAR_1)
  return;

 if (FUNC_0(FUNC_3(VAR_0, &VAR_1->state)))
  return;
 if (VAR_1->node) {

  FUNC_1(VAR_1->node);
 }
 FUNC_2(VAR_1);
}
