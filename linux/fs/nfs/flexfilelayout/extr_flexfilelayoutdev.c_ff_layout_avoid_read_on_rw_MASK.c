
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iomode; } ;
struct pnfs_layout_segment {TYPE_1__ pls_range; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pnfs_layout_segment*) ;

bool FUNC_1(struct pnfs_layout_segment *VAR_1)
{
 return VAR_1->pls_range.iomode == VAR_0 &&
        FUNC_0(VAR_1);
}
