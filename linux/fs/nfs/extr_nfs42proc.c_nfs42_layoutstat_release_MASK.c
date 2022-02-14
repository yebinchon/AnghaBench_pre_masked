
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_dev; struct nfs42_layoutstat_devinfo* devinfo; int inode; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct nfs42_layoutstat_devinfo {TYPE_2__ args; int inode; TYPE_3__ ld_private; } ;
struct nfs42_layoutstat_data {TYPE_2__ args; int inode; TYPE_3__ ld_private; } ;
struct TYPE_8__ {int flags; int layout; } ;
struct TYPE_5__ {int (* free ) (TYPE_3__*) ;} ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct nfs42_layoutstat_devinfo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1)
{
 struct nfs42_layoutstat_data *VAR_2 = VAR_1;
 struct nfs42_layoutstat_devinfo *VAR_3 = VAR_2->args.devinfo;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->args.num_dev; VAR_4++) {
  if (VAR_3[VAR_4].ld_private.ops && VAR_3[VAR_4].ld_private.ops->free)
   VAR_3[VAR_4].ld_private.ops->free(&VAR_3[VAR_4].ld_private);
 }

 FUNC_4(FUNC_0(VAR_2->args.inode)->layout);
 FUNC_6();
 FUNC_1(VAR_0, &FUNC_0(VAR_2->args.inode)->flags);
 FUNC_5();
 FUNC_3(VAR_2->inode);
 FUNC_2(VAR_2->args.devinfo);
 FUNC_2(VAR_2);
}
