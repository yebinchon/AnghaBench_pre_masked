
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_range {int iomode; scalar_t__ offset; scalar_t__ length; } ;




 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct pnfs_layout_range *VAR_1)
{
 switch (VAR_1->iomode) {
 case 129:
 case 128:
  break;
 default:
  return 0;
 }
 if (VAR_1->offset == VAR_0)
  return 0;
 if (VAR_1->length == 0)
  return 0;
 if (VAR_1->length != VAR_0 &&
     VAR_1->length > VAR_0 - VAR_1->offset)
  return 0;
 return 1;
}
