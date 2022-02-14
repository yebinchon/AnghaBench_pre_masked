
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int will_be_snapshotted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct btrfs_root *VAR_0)
{
 while (1) {
  int VAR_1;

  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1)
   break;
  FUNC_2(&VAR_0->will_be_snapshotted,
          !FUNC_0(&VAR_0->will_be_snapshotted));
 }
}
