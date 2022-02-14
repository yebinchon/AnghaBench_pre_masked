
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nblocks; int flags; } ;
struct nilfs_segment_buffer {scalar_t__ sb_rest_blocks; TYPE_1__ sb_sum; int sb_super_root; } ;
struct nilfs_sc_info {struct nilfs_segment_buffer* sc_curseg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nilfs_segment_buffer*,int *) ;
 int FUNC_2 (struct nilfs_sc_info*) ;

__attribute__((used)) static int FUNC_3(struct nilfs_sc_info *VAR_1)
{
 struct nilfs_segment_buffer *VAR_2 = VAR_1->sc_curseg;
 int VAR_3;

 if (VAR_2->sb_sum.nblocks >= VAR_2->sb_rest_blocks) {
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
   return VAR_3;
  VAR_2 = VAR_1->sc_curseg;
 }
 VAR_3 = FUNC_1(VAR_2, &VAR_2->sb_super_root);
 if (FUNC_0(!VAR_3))
  VAR_2->sb_sum.flags |= VAR_0;
 return VAR_3;
}
