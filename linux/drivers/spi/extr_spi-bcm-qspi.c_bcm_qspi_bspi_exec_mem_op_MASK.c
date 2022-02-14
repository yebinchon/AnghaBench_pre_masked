
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int nbytes; } ;
struct TYPE_5__ {scalar_t__ nbytes; int val; } ;
struct spi_mem_op {TYPE_3__ data; TYPE_1__ addr; } ;
struct spi_device {int chip_select; int master; } ;
struct bcm_qspi_soc_intc {int (* bcm_qspi_int_set ) (struct bcm_qspi_soc_intc*,int ,int) ;int (* bcm_qspi_int_ack ) (struct bcm_qspi_soc_intc*,int ) ;} ;
struct TYPE_6__ {int flex_mode; } ;
struct bcm_qspi {int bspi_rf_op_len; TYPE_4__* pdev; int bspi_done; struct bcm_qspi_soc_intc* soc_intc; scalar_t__ bspi_rf_op_status; struct spi_mem_op const* bspi_rf_op; scalar_t__ bspi_rf_op_idx; TYPE_2__ xfer_mode; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct bcm_qspi*) ;
 int FUNC_1 (struct bcm_qspi*) ;
 int FUNC_2 (struct bcm_qspi*,int ) ;
 int FUNC_3 (struct bcm_qspi*) ;
 int FUNC_4 (struct bcm_qspi*,int ,int ,int) ;
 int FUNC_5 (int *,char*,int,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 () ;
 unsigned long FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 struct bcm_qspi* FUNC_10 (int ) ;
 int FUNC_11 (struct bcm_qspi_soc_intc*,int ) ;
 int FUNC_12 (struct bcm_qspi_soc_intc*,int ,int) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_13,
         const struct spi_mem_op *VAR_14)
{
 struct bcm_qspi *VAR_15 = FUNC_10(VAR_13->master);
 u32 VAR_16 = 0, VAR_17, VAR_18, VAR_19, VAR_20 = 0;
 int VAR_21 = 0;
 unsigned long VAR_22 = FUNC_8(100);
 struct bcm_qspi_soc_intc *VAR_23 = VAR_15->soc_intc;

 if (FUNC_1(VAR_15))
  if (VAR_14->addr.nbytes == VAR_1)
   return -VAR_8;

 VAR_20 = VAR_14->addr.val;
 FUNC_2(VAR_15, VAR_13->chip_select);
 FUNC_4(VAR_15, VAR_10, VAR_12, 0);





 if (FUNC_1(VAR_15) == 0) {
  VAR_16 = VAR_20 & 0xff000000;
  FUNC_4(VAR_15, VAR_0,
          VAR_2, VAR_16);
 }

 if (!VAR_15->xfer_mode.flex_mode)
  VAR_16 = VAR_20;
 else
  VAR_16 = VAR_20 & 0x00ffffff;

 if (FUNC_1(VAR_15) == 1)
  VAR_16 = (VAR_16 + 0xc00000) & 0xffffff;





 VAR_17 = VAR_14->data.nbytes;
 VAR_15->bspi_rf_op_idx = 0;

 do {
  if (VAR_17 > VAR_7)
   VAR_18 = VAR_7;
  else
   VAR_18 = VAR_17;

  FUNC_9(&VAR_15->bspi_done);
  FUNC_3(VAR_15);
  VAR_19 = (VAR_18 + 3) >> 2;
  VAR_15->bspi_rf_op = VAR_14;
  VAR_15->bspi_rf_op_status = 0;
  VAR_15->bspi_rf_op_len = VAR_18;
  FUNC_5(&VAR_15->pdev->dev,
   "bspi xfr addr 0x%x len 0x%x", VAR_16, VAR_18);
  FUNC_4(VAR_15, VAR_0, VAR_5, VAR_16);
  FUNC_4(VAR_15, VAR_0, VAR_4, VAR_19);
  FUNC_4(VAR_15, VAR_0, VAR_6, 0);
  if (VAR_15->soc_intc) {




   VAR_23->bcm_qspi_int_ack(VAR_23, VAR_11);
   VAR_23->bcm_qspi_int_set(VAR_23, VAR_3, 1);
  }


  FUNC_7();
  FUNC_0(VAR_15);
  if (!FUNC_13(&VAR_15->bspi_done, VAR_22)) {
   FUNC_6(&VAR_15->pdev->dev, "timeout waiting for BSPI\n");
   VAR_21 = -VAR_9;
   break;
  }


  VAR_16 += VAR_18;
  VAR_17 -= VAR_18;
 } while (VAR_17);

 return VAR_21;
}
