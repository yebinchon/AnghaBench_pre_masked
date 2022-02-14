
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; } ;
struct hfsplus_fork_raw {int total_blocks; int total_size; int extents; } ;
typedef int hfsplus_extent_rec ;
struct TYPE_2__ {int alloc_blocks; int first_extents; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(struct inode *VAR_0,
  struct hfsplus_fork_raw *VAR_1)
{
 FUNC_3(&VAR_1->extents, &FUNC_0(VAR_0)->first_extents,
        sizeof(hfsplus_extent_rec));
 VAR_1->total_size = FUNC_2(VAR_0->i_size);
 VAR_1->total_blocks = FUNC_1(FUNC_0(VAR_0)->alloc_blocks);
}
