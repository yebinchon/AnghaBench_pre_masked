
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mmc_data {int flags; int blksz; int blocks; int sg_len; int sg; int error; } ;
struct TYPE_4__ {scalar_t__ has_bad_data_ordering; int has_rwproof; } ;
struct atmel_mci {int mode_reg; int data_size; int * buffer; TYPE_2__ caps; struct mmc_data* data; TYPE_1__* pdev; int sg; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct atmel_mci*,int ) ;
 int FUNC_2 (struct atmel_mci*,int ) ;
 int FUNC_3 (struct atmel_mci*,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct mmc_data*) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static u32
FUNC_8(struct atmel_mci *VAR_13, struct mmc_data *VAR_14)
{
 u32 VAR_15, VAR_16;
 int VAR_17;

 VAR_14->error = -VAR_8;

 VAR_13->data = VAR_14;
 VAR_13->sg = VAR_14->sg;
 VAR_15 = VAR_1;


 FUNC_3(VAR_13, VAR_4, VAR_13->mode_reg | VAR_5);

 if (VAR_14->flags & VAR_9)
  VAR_15 |= VAR_2 | VAR_6;
 else
  VAR_15 |= VAR_3 | VAR_7 | VAR_0;


 VAR_16 = FUNC_2(VAR_13, VAR_4);
 VAR_16 &= 0x0000ffff;
 VAR_16 |= FUNC_0(VAR_14->blksz);
 FUNC_3(VAR_13, VAR_4, VAR_16);


 VAR_13->data_size = VAR_14->blocks * VAR_14->blksz;
 FUNC_4(&VAR_13->pdev->dev, VAR_14->sg, VAR_14->sg_len,
     FUNC_5(VAR_14));

 if ((!VAR_13->caps.has_rwproof)
     && (VAR_13->data->flags & VAR_10)) {
  FUNC_6(VAR_13->data->sg, VAR_13->data->sg_len,
                    VAR_13->buffer, VAR_13->data_size);
  if (VAR_13->caps.has_bad_data_ordering)
   for (VAR_17 = 0; VAR_17 < VAR_13->data_size; VAR_17++)
    VAR_13->buffer[VAR_17] = FUNC_7(VAR_13->buffer[VAR_17]);
 }

 if (VAR_13->data_size)
  FUNC_1(VAR_13, VAR_14->flags & VAR_9 ?
           VAR_11 : VAR_12);
 return VAR_15;
}
