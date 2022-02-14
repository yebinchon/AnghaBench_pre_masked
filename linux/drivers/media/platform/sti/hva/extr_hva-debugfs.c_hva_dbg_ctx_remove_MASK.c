
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_ctx; } ;
struct hva_dev {TYPE_1__ dbg; } ;
struct TYPE_4__ {int debugfs_entry; } ;
struct hva_ctx {int flags; TYPE_2__ dbg; struct hva_dev* hva_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hva_ctx*,int) ;

void FUNC_2(struct hva_ctx *VAR_1)
{
 struct hva_dev *VAR_2 = VAR_1->hva_dev;

 if (VAR_1->flags & VAR_0)

  FUNC_1(&VAR_2->dbg.last_ctx, VAR_1, sizeof(*VAR_1));

 FUNC_0(VAR_1->dbg.debugfs_entry);
}
