
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
struct asc_board {int dev; } ;
typedef int __le32 ;
struct TYPE_7__ {scalar_t__ overrun_dma; int err_code; TYPE_1__* cfg; scalar_t__ overrun_buf; int iop_base; } ;
struct TYPE_6__ {void* mcode_version; void* mcode_date; int chip_scsi_id; int disc_enable; int * sdtr_period_offset; } ;
typedef int PortAddr ;
typedef TYPE_2__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int,int ) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (unsigned long) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct asc_board* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_15(ASC_DVC_VAR *VAR_15)
{
 int VAR_16;
 int VAR_17;
 PortAddr VAR_18;
 __le32 VAR_19;
 __le32 VAR_20;
 struct asc_board *VAR_21 = FUNC_10(VAR_15);

 VAR_18 = VAR_15->iop_base;
 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 <= VAR_8; VAR_16++) {
  FUNC_4(VAR_18, VAR_16,
     VAR_15->cfg->sdtr_period_offset[VAR_16]);
 }

 FUNC_2(VAR_15);
 FUNC_8(VAR_18, VAR_0,
    VAR_15->cfg->disc_enable);
 FUNC_8(VAR_18, VAR_1,
    FUNC_0(VAR_15->cfg->chip_scsi_id));


 FUNC_9((unsigned long)VAR_15->overrun_buf & 7);
 VAR_15->overrun_dma = FUNC_12(VAR_21->dev, VAR_15->overrun_buf,
     VAR_10, VAR_11);
 if (FUNC_13(VAR_21->dev, VAR_15->overrun_dma)) {
  VAR_17 = -VAR_14;
  goto err_dma_map;
 }
 VAR_19 = FUNC_11(VAR_15->overrun_dma);
 FUNC_3(VAR_18, VAR_5,
     (uchar *)&VAR_19, 1);
 VAR_20 = FUNC_11(VAR_10);
 FUNC_3(VAR_18, VAR_4,
     (uchar *)&VAR_20, 1);

 VAR_15->cfg->mcode_date =
     FUNC_5(VAR_18, (ushort)VAR_2);
 VAR_15->cfg->mcode_version =
     FUNC_5(VAR_18, (ushort)VAR_3);

 FUNC_6(VAR_18, VAR_9);
 if (FUNC_1(VAR_18) != VAR_9) {
  VAR_15->err_code |= VAR_6;
  VAR_17 = -VAR_12;
  goto err_mcode_start;
 }
 if (FUNC_7(VAR_18) != 1) {
  VAR_15->err_code |= VAR_7;
  VAR_17 = -VAR_13;
  goto err_mcode_start;
 }

 return VAR_17;

err_mcode_start:
 FUNC_14(VAR_21->dev, VAR_15->overrun_dma,
    VAR_10, VAR_11);
err_dma_map:
 VAR_15->overrun_dma = 0;
 return VAR_17;
}
