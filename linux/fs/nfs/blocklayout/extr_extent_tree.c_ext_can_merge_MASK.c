
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_extent {scalar_t__ be_state; scalar_t__ be_device; scalar_t__ be_f_offset; scalar_t__ be_length; scalar_t__ be_v_offset; scalar_t__ be_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct pnfs_block_extent *VAR_2, struct pnfs_block_extent *VAR_3)
{
 if (VAR_2->be_state != VAR_3->be_state)
  return 0;
 if (VAR_2->be_device != VAR_3->be_device)
  return 0;

 if (VAR_2->be_f_offset + VAR_2->be_length != VAR_3->be_f_offset)
  return 0;

 if (VAR_2->be_state != VAR_1 &&
     (VAR_2->be_v_offset + VAR_2->be_length != VAR_3->be_v_offset))
  return 0;

 if (VAR_2->be_state == VAR_0 &&
     VAR_2->be_tag != VAR_3->be_tag)
  return 0;

 return 1;
}
