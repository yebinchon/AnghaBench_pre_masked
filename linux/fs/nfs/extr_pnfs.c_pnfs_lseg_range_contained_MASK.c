
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pnfs_layout_range {scalar_t__ offset; int length; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct pnfs_layout_range *VAR_0,
   const struct pnfs_layout_range *VAR_1)
{
 u64 VAR_2 = VAR_0->offset;
 u64 VAR_3 = FUNC_0(VAR_2, VAR_0->length);
 u64 VAR_4 = VAR_1->offset;
 u64 VAR_5 = FUNC_0(VAR_4, VAR_1->length);

 return (VAR_2 <= VAR_4) && (VAR_3 >= VAR_5);
}
