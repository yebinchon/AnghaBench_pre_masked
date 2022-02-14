
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pnfs_layout_range {scalar_t__ iomode; scalar_t__ offset; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct pnfs_layout_range *VAR_1,
  const struct pnfs_layout_range *VAR_2)
{
 u64 VAR_3, VAR_4;

 if (VAR_1->iomode != VAR_2->iomode)
  return VAR_1->iomode != VAR_0;
 VAR_3 = FUNC_0(VAR_1->offset, VAR_1->length);
 VAR_4 = FUNC_0(VAR_2->offset, VAR_2->length);
 if (VAR_3 < VAR_2->offset)
  return 0;
 if (VAR_4 < VAR_1->offset)
  return 1;
 return VAR_2->offset <= VAR_1->offset;
}
