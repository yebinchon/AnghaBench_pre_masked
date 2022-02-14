
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qspi_trans {scalar_t__ byte; TYPE_2__* trans; } ;
struct bcm_qspi {TYPE_1__* pdev; } ;
struct TYPE_4__ {int bits_per_word; scalar_t__ len; scalar_t__ cs_change; scalar_t__ delay_usecs; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bcm_qspi*,struct qspi_trans*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static int FUNC_2(struct bcm_qspi *VAR_5,
     struct qspi_trans *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_3;


 if (VAR_6->trans->bits_per_word <= 8)
  VAR_6->byte++;
 else
  VAR_6->byte += 2;

 if (VAR_6->byte >= VAR_6->trans->len) {


  if (VAR_6->trans->delay_usecs &&
      (VAR_7 & VAR_1))
   VAR_8 |= VAR_1;
  if (VAR_6->trans->cs_change &&
      (VAR_7 & VAR_0))
   VAR_8 |= VAR_0;
  if (VAR_8)
   goto done;

  FUNC_1(&VAR_5->pdev->dev, "advance msg exit\n");
  if (FUNC_0(VAR_5, VAR_6))
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_4;

  VAR_6->trans = ((void*)0);
 }

done:
 FUNC_1(&VAR_5->pdev->dev, "trans %p len %d byte %d ret %x\n",
  VAR_6->trans, VAR_6->trans ? VAR_6->trans->len : 0, VAR_6->byte, VAR_8);
 return VAR_8;
}
