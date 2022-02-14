
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {scalar_t__ sector_size; int wasted_size; int dirty_size; int cleanmarker_size; } ;
struct jffs2_eraseblock {scalar_t__ used_size; scalar_t__ unchecked_size; scalar_t__ dirty_size; int wasted_size; int first_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct jffs2_sb_info *VAR_4, struct jffs2_eraseblock *VAR_5)
{
 if ((VAR_5->used_size + VAR_5->unchecked_size) == FUNC_1(VAR_4->cleanmarker_size) && !VAR_5->dirty_size
     && (!VAR_5->first_node || !FUNC_2(VAR_5->first_node)) )
  return VAR_2;


 else if (!FUNC_0(VAR_4->sector_size - (VAR_5->used_size + VAR_5->unchecked_size))) {
  VAR_4->dirty_size -= VAR_5->dirty_size;
  VAR_4->wasted_size += VAR_5->dirty_size;
  VAR_5->wasted_size += VAR_5->dirty_size;
  VAR_5->dirty_size = 0;
  return VAR_1;
 } else if (VAR_5->used_size || VAR_5->unchecked_size)
  return VAR_3;
 else
  return VAR_0;
}
