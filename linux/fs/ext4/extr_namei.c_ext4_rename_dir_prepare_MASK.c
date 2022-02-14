
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_renament {int dir_bh; TYPE_1__* dir; TYPE_2__* parent_de; int dir_inlined; int inode; } ;
typedef int handle_t ;
struct TYPE_4__ {int inode; } ;
struct TYPE_3__ {scalar_t__ i_ino; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int*,TYPE_2__**,int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(handle_t *VAR_1, struct ext4_renament *VAR_2)
{
 int VAR_3;

 VAR_2->dir_bh = FUNC_1(VAR_1, VAR_2->inode,
           &VAR_3, &VAR_2->parent_de,
           &VAR_2->dir_inlined);
 if (!VAR_2->dir_bh)
  return VAR_3;
 if (FUNC_3(VAR_2->parent_de->inode) != VAR_2->dir->i_ino)
  return -VAR_0;
 FUNC_0(VAR_2->dir_bh, "get_write_access");
 return FUNC_2(VAR_1, VAR_2->dir_bh);
}
