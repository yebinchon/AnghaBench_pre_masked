
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct toshsd_host {int lock; scalar_t__ ioaddr; TYPE_3__* mmc; TYPE_2__* cmd; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int ios; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct toshsd_host*) ;
 int FUNC_9 (struct toshsd_host*) ;
 int FUNC_10 (struct toshsd_host*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_37, void *VAR_38)
{
 struct toshsd_host *VAR_39 = VAR_38;
 u32 VAR_40, VAR_41, VAR_42, VAR_43;
 int VAR_44 = 0, VAR_45 = VAR_4;

 FUNC_6(&VAR_39->lock);
 VAR_42 = FUNC_3(VAR_39->ioaddr + VAR_17);
 VAR_41 = FUNC_3(VAR_39->ioaddr + VAR_36);
 VAR_40 = VAR_42 & ~VAR_41 & ~VAR_3;

 FUNC_1(&VAR_39->pdev->dev, "IRQ status:%x mask:%x\n",
  VAR_42, VAR_41);


 if (!VAR_40) {
  VAR_45 = VAR_5;
  goto irq_end;
 }

 if (VAR_40 & VAR_8) {
  VAR_44 = -VAR_2;
  FUNC_1(&VAR_39->pdev->dev, "Timeout\n");
 } else if (VAR_40 & VAR_9) {
  VAR_44 = -VAR_0;
  FUNC_2(&VAR_39->pdev->dev, "BadCRC\n");
 } else if (VAR_40 & (VAR_11
    | VAR_7
    | VAR_14
    | VAR_12
    | VAR_15
    | VAR_10)) {
  FUNC_2(&VAR_39->pdev->dev, "Buffer status error: { %s%s%s%s%s%s}\n",
   VAR_40 & VAR_11 ? "ILLEGAL_ACC " : "",
   VAR_40 & VAR_7 ? "CMD_INDEX " : "",
   VAR_40 & VAR_14 ? "STOPBIT_END " : "",
   VAR_40 & VAR_12 ? "OVERFLOW " : "",
   VAR_40 & VAR_15 ? "UNDERFLOW " : "",
   VAR_40 & VAR_10 ? "DATA_TIMEOUT " : "");

  VAR_43 = FUNC_3(VAR_39->ioaddr + VAR_35);
  FUNC_2(&VAR_39->pdev->dev, "detail error status { %s%s%s%s%s%s%s%s%s%s%s%s%s}\n",
   VAR_43 & VAR_26 ? "RESP_CMD " : "",
   VAR_43 & VAR_28 ? "RESP_END_BIT " : "",
   VAR_43 & VAR_25 ? "RESP_END_BIT " : "",
   VAR_43 & VAR_23 ? "READ_DATA_END_BIT " : "",
   VAR_43 & VAR_30 ? "WRITE_CMD_END_BIT " : "",
   VAR_43 & VAR_27 ? "RESP_CRC " : "",
   VAR_43 & VAR_24 ? "RESP_CRC " : "",
   VAR_43 & VAR_22 ? "READ_DATA_CRC " : "",
   VAR_43 & VAR_29 ? "WRITE_CMD_CRC " : "",
   VAR_43 & VAR_31 ? "NO_CMD_RESP " : "",
   VAR_43 & VAR_34 ? "READ_DATA_TIMEOUT " : "",
   VAR_43 & VAR_33 ? "CRS_STATUS_TIMEOUT " : "",
   VAR_43 & VAR_32 ? "CRC_BUSY_TIMEOUT " : "");
  VAR_44 = -VAR_1;
 }

 if (VAR_44) {
  if (VAR_39->cmd)
   VAR_39->cmd->error = VAR_44;

  if (VAR_44 == -VAR_2) {
   FUNC_4(VAR_42 &
      ~(VAR_8 | VAR_20),
      VAR_39->ioaddr + VAR_17);
  } else {
   FUNC_10(VAR_39);
   FUNC_0(VAR_39->mmc, &VAR_39->mmc->ios);
   goto irq_end;
  }
 }


 if (VAR_40 & (VAR_18 | VAR_19)) {
  FUNC_4(VAR_42 &
     ~(VAR_19 | VAR_18),
     VAR_39->ioaddr + VAR_17);

  if (VAR_40 & VAR_18)
   FUNC_10(VAR_39);

  FUNC_5(VAR_39->mmc, 1);
 }


 if (VAR_40 & (VAR_13 | VAR_16)) {
  FUNC_4(VAR_42 &
     ~(VAR_16 | VAR_13),
     VAR_39->ioaddr + VAR_17);

  VAR_45 = VAR_6;
  goto irq_end;
 }


 if (VAR_40 & VAR_20) {
  FUNC_4(VAR_42 & ~(VAR_20),
     VAR_39->ioaddr + VAR_17);
  FUNC_8(VAR_39);
 }


 if (VAR_40 & VAR_21) {
  FUNC_4(VAR_42 & ~(VAR_21),
     VAR_39->ioaddr + VAR_17);
  FUNC_9(VAR_39);
 }
irq_end:
 FUNC_7(&VAR_39->lock);
 return VAR_45;
}
