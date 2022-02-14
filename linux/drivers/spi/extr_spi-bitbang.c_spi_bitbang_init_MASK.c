
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int mode_bits; int cleanup; scalar_t__ setup; int set_cs; int transfer_one; int unprepare_transfer_hardware; int prepare_transfer_hardware; scalar_t__ transfer_one_message; scalar_t__ transfer; } ;
struct spi_bitbang {int flags; scalar_t__ setup_transfer; scalar_t__ txrx_bufs; scalar_t__ use_dma; int lock; int chipselect; struct spi_master* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_1(struct spi_bitbang *VAR_11)
{
 struct spi_master *VAR_12 = VAR_11->master;

 if (!VAR_12 || !VAR_11->chipselect)
  return -VAR_0;

 FUNC_0(&VAR_11->lock);

 if (!VAR_12->mode_bits)
  VAR_12->mode_bits = VAR_2 | VAR_1 | VAR_11->flags;

 if (VAR_12->transfer || VAR_12->transfer_one_message)
  return -VAR_0;

 VAR_12->prepare_transfer_hardware = VAR_5;
 VAR_12->unprepare_transfer_hardware = VAR_10;
 VAR_12->transfer_one = VAR_9;
 VAR_12->set_cs = VAR_6;

 if (!VAR_11->txrx_bufs) {
  VAR_11->use_dma = 0;
  VAR_11->txrx_bufs = VAR_3;
  if (!VAR_12->setup) {
   if (!VAR_11->setup_transfer)
    VAR_11->setup_transfer =
      VAR_8;
   VAR_12->setup = VAR_7;
   VAR_12->cleanup = VAR_4;
  }
 }

 return 0;
}
