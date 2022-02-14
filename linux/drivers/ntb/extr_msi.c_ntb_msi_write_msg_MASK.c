
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_msi_devres {TYPE_2__* ntb; int msi_desc; } ;
struct msi_desc {int dummy; } ;
struct TYPE_4__ {int ctx; TYPE_1__* msi; } ;
struct TYPE_3__ {int (* desc_changed ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,struct msi_desc*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct msi_desc *VAR_0, void *VAR_1)
{
 struct ntb_msi_devres *VAR_2 = VAR_1;

 FUNC_0(FUNC_1(VAR_2->ntb, VAR_0, VAR_2->msi_desc));

 if (VAR_2->ntb->msi->desc_changed)
  VAR_2->ntb->msi->desc_changed(VAR_2->ntb->ctx);
}
