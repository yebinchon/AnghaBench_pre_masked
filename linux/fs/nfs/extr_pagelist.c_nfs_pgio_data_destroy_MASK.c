
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pagevec; scalar_t__ page_array; } ;
struct TYPE_3__ {scalar_t__ context; } ;
struct nfs_pgio_header {TYPE_2__ page_array; TYPE_1__ args; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct nfs_pgio_header *VAR_0)
{
 if (VAR_0->args.context)
  FUNC_1(VAR_0->args.context);
 if (VAR_0->page_array.pagevec != VAR_0->page_array.page_array)
  FUNC_0(VAR_0->page_array.pagevec);
}
