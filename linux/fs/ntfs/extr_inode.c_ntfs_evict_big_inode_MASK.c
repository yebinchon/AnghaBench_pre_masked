
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; int i_data; } ;
struct TYPE_7__ {int * base_ntfs_ino; int * extent_ntfs_inos; } ;
struct TYPE_8__ {int nr_extents; int count; int page; TYPE_1__ ext; } ;
typedef TYPE_2__ ntfs_inode ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int *) ;

void FUNC_16(struct inode *VAR_0)
{
 ntfs_inode *VAR_1 = FUNC_4(VAR_0);

 FUNC_15(&VAR_0->i_data);
 FUNC_8(VAR_0);
 if (VAR_1->nr_extents > 0) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->nr_extents; VAR_2++)
   FUNC_12(VAR_1->ext.extent_ntfs_inos[VAR_2]);
  FUNC_11(VAR_1->ext.extent_ntfs_inos);
 }

 FUNC_6(VAR_1);

 if (FUNC_2(VAR_1)) {

  if (VAR_1->nr_extents == -1) {
   FUNC_9(FUNC_5(VAR_1->ext.base_ntfs_ino));
   VAR_1->nr_extents = 0;
   VAR_1->ext.base_ntfs_ino = ((void*)0);
  }
 }
 FUNC_1(VAR_1->page);
 if (!FUNC_7(&VAR_1->count))
  FUNC_0();
 return;
}
