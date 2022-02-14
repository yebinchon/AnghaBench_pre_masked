
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {scalar_t__ root_objectid; scalar_t__ parent; scalar_t__ owner; scalar_t__ offset; } ;



__attribute__((used)) static int FUNC_0(struct ref_entry *VAR_0, struct ref_entry *VAR_1)
{
 if (VAR_0->root_objectid < VAR_1->root_objectid)
  return -1;
 if (VAR_0->root_objectid > VAR_1->root_objectid)
  return 1;
 if (VAR_0->parent < VAR_1->parent)
  return -1;
 if (VAR_0->parent > VAR_1->parent)
  return 1;
 if (VAR_0->owner < VAR_1->owner)
  return -1;
 if (VAR_0->owner > VAR_1->owner)
  return 1;
 if (VAR_0->offset < VAR_1->offset)
  return -1;
 if (VAR_0->offset > VAR_1->offset)
  return 1;
 return 0;
}
