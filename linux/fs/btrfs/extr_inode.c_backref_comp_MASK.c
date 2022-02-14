
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_defrag_extent_backref {scalar_t__ root_id; scalar_t__ inum; scalar_t__ file_pos; } ;



__attribute__((used)) static int FUNC_0(struct sa_defrag_extent_backref *VAR_0,
   struct sa_defrag_extent_backref *VAR_1)
{
 if (VAR_0->root_id < VAR_1->root_id)
  return -1;
 else if (VAR_0->root_id > VAR_1->root_id)
  return 1;

 if (VAR_0->inum < VAR_1->inum)
  return -1;
 else if (VAR_0->inum > VAR_1->inum)
  return 1;

 if (VAR_0->file_pos < VAR_1->file_pos)
  return -1;
 else if (VAR_0->file_pos > VAR_1->file_pos)
  return 1;
 return 0;
}
