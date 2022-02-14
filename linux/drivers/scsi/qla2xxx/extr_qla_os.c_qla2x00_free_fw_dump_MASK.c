
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {scalar_t__ fce_enabled; } ;
struct qla_hw_data {scalar_t__ fw_dump_len; int * fw_dump; scalar_t__ fw_dump_reading; scalar_t__ fw_dump_cap_flags; scalar_t__ fw_dumped; scalar_t__ eft_dma; int * eft; TYPE_2__ flags; scalar_t__ fce_dma; int * fce; TYPE_1__* pdev; struct fwdt* fwdt; } ;
struct fwdt {scalar_t__ length; int * template; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct qla_hw_data *VAR_2)
{
 struct fwdt *VAR_3 = VAR_2->fwdt;
 uint VAR_4;

 if (VAR_2->fce)
  FUNC_0(&VAR_2->pdev->dev,
      VAR_1, VAR_2->fce, VAR_2->fce_dma);

 if (VAR_2->eft)
  FUNC_0(&VAR_2->pdev->dev,
      VAR_0, VAR_2->eft, VAR_2->eft_dma);

 if (VAR_2->fw_dump)
  FUNC_1(VAR_2->fw_dump);

 VAR_2->fce = ((void*)0);
 VAR_2->fce_dma = 0;
 VAR_2->flags.fce_enabled = 0;
 VAR_2->eft = ((void*)0);
 VAR_2->eft_dma = 0;
 VAR_2->fw_dumped = 0;
 VAR_2->fw_dump_cap_flags = 0;
 VAR_2->fw_dump_reading = 0;
 VAR_2->fw_dump = ((void*)0);
 VAR_2->fw_dump_len = 0;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++, VAR_3++) {
  if (VAR_3->template)
   FUNC_1(VAR_3->template);
  VAR_3->template = ((void*)0);
  VAR_3->length = 0;
 }
}
