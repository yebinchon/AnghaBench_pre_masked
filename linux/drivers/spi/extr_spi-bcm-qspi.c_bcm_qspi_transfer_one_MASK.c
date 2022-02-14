
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int chip_select; } ;
struct TYPE_3__ {scalar_t__ byte; struct spi_transfer* trans; } ;
struct bcm_qspi {TYPE_2__* pdev; int mspi_done; TYPE_1__ trans_pos; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_qspi*,int ) ;
 int FUNC_1 (struct bcm_qspi*) ;
 int FUNC_2 (int *,char*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct bcm_qspi*,int) ;
 int FUNC_5 (int *) ;
 struct bcm_qspi* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct bcm_qspi*,struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_master *VAR_1,
     struct spi_device *VAR_2,
     struct spi_transfer *VAR_3)
{
 struct bcm_qspi *VAR_4 = FUNC_6(VAR_1);
 int VAR_5;
 unsigned long VAR_6 = FUNC_3(100);

 FUNC_0(VAR_4, VAR_2->chip_select);
 VAR_4->trans_pos.trans = VAR_3;
 VAR_4->trans_pos.byte = 0;

 while (VAR_4->trans_pos.byte < VAR_3->len) {
  FUNC_5(&VAR_4->mspi_done);

  VAR_5 = FUNC_8(VAR_4, VAR_2);
  if (!FUNC_7(&VAR_4->mspi_done, VAR_6)) {
   FUNC_2(&VAR_4->pdev->dev, "timeout waiting for MSPI\n");
   return -VAR_0;
  }

  FUNC_4(VAR_4, VAR_5);
 }
 FUNC_1(VAR_4);

 return 0;
}
