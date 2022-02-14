
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_range {scalar_t__ iomode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pnfs_layout_range const*,struct pnfs_layout_range const*) ;

__attribute__((used)) static bool
FUNC_1(const struct pnfs_layout_range *VAR_1,
   const struct pnfs_layout_range *VAR_2)
{
 return (VAR_2->iomode == VAR_0 ||
  VAR_1->iomode == VAR_2->iomode) &&
        FUNC_0(VAR_1, VAR_2);
}
