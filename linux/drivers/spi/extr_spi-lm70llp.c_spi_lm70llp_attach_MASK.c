
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct TYPE_9__ {size_t flags; struct spi_master* master; int * txrx_word; int chipselect; } ;
struct TYPE_8__ {int max_speed_hz; size_t mode; struct spi_lm70llp* controller_data; scalar_t__ chip_select; int modalias; } ;
struct spi_lm70llp {struct pardevice* pd; struct parport* port; TYPE_4__ bitbang; TYPE_2__* spidev_lm70; TYPE_3__ info; } ;
struct parport {TYPE_1__* physport; } ;
struct pardevice {int dev; } ;
struct pardev_cb {int flags; struct spi_lm70llp* private; } ;
typedef int lm70llp_cb ;
struct TYPE_7__ {int bits_per_word; int dev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct spi_lm70llp* VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pardev_cb*,int ,int) ;
 int FUNC_5 (struct pardevice*) ;
 struct pardevice* FUNC_6 (struct parport*,int ,struct pardev_cb*,int ) ;
 int FUNC_7 (struct pardevice*) ;
 int FUNC_8 (struct pardevice*) ;
 int FUNC_9 (struct parport*,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 struct spi_master* FUNC_12 (int ,int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 struct spi_lm70llp* FUNC_15 (struct spi_master*) ;
 int FUNC_16 (struct spi_master*) ;
 TYPE_2__* FUNC_17 (struct spi_master*,TYPE_3__*) ;
 int FUNC_18 (int ,char*) ;

__attribute__((used)) static void FUNC_19(struct parport *VAR_10)
{
 struct pardevice *VAR_11;
 struct spi_lm70llp *VAR_12;
 struct spi_master *VAR_13;
 int VAR_14;
 struct pardev_cb VAR_15;

 if (VAR_9) {
  FUNC_11("spi_lm70llp instance already loaded. Aborting.\n");
  return;
 }





 VAR_13 = FUNC_12(VAR_10->physport->dev, sizeof *VAR_12);
 if (!VAR_13) {
  VAR_14 = -VAR_2;
  goto out_fail;
 }
 VAR_12 = FUNC_15(VAR_13);




 VAR_12->bitbang.master = VAR_13;
 VAR_12->bitbang.chipselect = VAR_7;
 VAR_12->bitbang.txrx_word[VAR_5] = VAR_8;
 VAR_12->bitbang.flags = VAR_4;




 VAR_12->port = VAR_10;
 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.private = VAR_12;
 VAR_15.flags = VAR_3;
 VAR_11 = FUNC_6(VAR_10, VAR_0, &VAR_15, 0);

 if (!VAR_11) {
  VAR_14 = -VAR_2;
  goto out_free_master;
 }
 VAR_12->pd = VAR_11;

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14 < 0)
  goto out_parport_unreg;




 VAR_14 = FUNC_13(&VAR_12->bitbang);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_11->dev, "spi_bitbang_start failed with status %d\n",
    VAR_14);
  goto out_off_and_release;
 }







 FUNC_18(VAR_12->info.modalias, "lm70");
 VAR_12->info.max_speed_hz = 6 * 1000 * 1000;
 VAR_12->info.chip_select = 0;
 VAR_12->info.mode = VAR_4 | VAR_5;


 FUNC_9(VAR_12->port, VAR_6);




 VAR_12->info.controller_data = VAR_12;
 VAR_12->spidev_lm70 = FUNC_17(VAR_12->bitbang.master, &VAR_12->info);
 if (VAR_12->spidev_lm70)
  FUNC_0(&VAR_12->spidev_lm70->dev, "spidev_lm70 at %s\n",
   FUNC_1(&VAR_12->spidev_lm70->dev));
 else {
  FUNC_2(&VAR_11->dev, "spi_new_device failed\n");
  VAR_14 = -VAR_1;
  goto out_bitbang_stop;
 }
 VAR_12->spidev_lm70->bits_per_word = 8;

 VAR_9 = VAR_12;
 return;

out_bitbang_stop:
 FUNC_14(&VAR_12->bitbang);
out_off_and_release:

 FUNC_9(VAR_12->port, 0);
 FUNC_3(10);
 FUNC_7(VAR_12->pd);
out_parport_unreg:
 FUNC_8(VAR_11);
out_free_master:
 FUNC_16(VAR_13);
out_fail:
 FUNC_10("spi_lm70llp probe fail, status %d\n", VAR_14);
}
