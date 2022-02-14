
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_data {int blocks; int blksz; int flags; int sg_len; int sg; int error; } ;
struct atmel_mci {int need_reset; scalar_t__ pio_offset; int * data_chan; struct mmc_data* data; int sg_len; int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct atmel_mci *VAR_5, struct mmc_data *VAR_6)
{
 u32 VAR_7;

 VAR_6->error = -VAR_3;

 VAR_5->sg = VAR_6->sg;
 VAR_5->sg_len = VAR_6->sg_len;
 VAR_5->data = VAR_6;
 VAR_5->data_chan = ((void*)0);

 VAR_7 = VAR_0;
 if (VAR_6->blocks * VAR_6->blksz < 12
   || (VAR_6->blocks * VAR_6->blksz) & 3)
  VAR_5->need_reset = 1;

 VAR_5->pio_offset = 0;
 if (VAR_6->flags & VAR_4)
  VAR_7 |= VAR_1;
 else
  VAR_7 |= VAR_2;

 return VAR_7;
}
