
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_size; int i_sb; } ;
struct hfs_extent {int dummy; } ;
typedef int hfs_extent_rec ;
typedef int __be32 ;
struct TYPE_4__ {int alloc_blocks; int first_extents; } ;
struct TYPE_3__ {int alloc_blksz; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hfs_extent*,int ,int) ;

void FUNC_4(struct inode *VAR_0, struct hfs_extent *VAR_1,
     __be32 *VAR_2, __be32 *VAR_3)
{
 FUNC_3(VAR_1, FUNC_0(VAR_0)->first_extents, sizeof(hfs_extent_rec));

 if (VAR_2)
  *VAR_2 = FUNC_2(VAR_0->i_size);
 if (VAR_3)
  *VAR_3 = FUNC_2(FUNC_0(VAR_0)->alloc_blocks *
      FUNC_1(VAR_0->i_sb)->alloc_blksz);
}
