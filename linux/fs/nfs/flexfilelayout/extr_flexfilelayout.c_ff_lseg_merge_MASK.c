
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ iomode; scalar_t__ offset; int length; } ;
struct pnfs_layout_segment {int pls_flags; TYPE_1__ pls_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool
FUNC_4(struct pnfs_layout_segment *VAR_2,
  struct pnfs_layout_segment *VAR_3)
{
 u64 VAR_4, VAR_5;

 if (FUNC_3(VAR_0, &VAR_3->pls_flags))
  return 0;
 if (VAR_2->pls_range.iomode != VAR_3->pls_range.iomode)
  return 0;
 VAR_5 = FUNC_0(VAR_3->pls_range.offset,
   VAR_3->pls_range.length);
 if (VAR_5 < VAR_2->pls_range.offset)
  return 0;
 VAR_4 = FUNC_0(VAR_2->pls_range.offset,
   VAR_2->pls_range.length);
 if (VAR_4 < VAR_3->pls_range.offset)
  return 0;


 if (VAR_4 < VAR_5)
  VAR_4 = VAR_5;
 if (VAR_2->pls_range.offset < VAR_3->pls_range.offset)
  VAR_2->pls_range.offset = VAR_3->pls_range.offset;
 VAR_2->pls_range.length = FUNC_1(VAR_2->pls_range.offset,
   VAR_4);
 if (FUNC_3(VAR_1, &VAR_3->pls_flags))
  FUNC_2(VAR_1, &VAR_2->pls_flags);
 return 1;
}
