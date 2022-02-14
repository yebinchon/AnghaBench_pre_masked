
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spi_master {int bus_num; int num_chipselect; } ;
struct parport {int name; TYPE_1__* physport; } ;
struct pardevice {int dummy; } ;
struct pardev_cb {struct butterfly* private; } ;
struct device {int dummy; } ;
struct TYPE_8__ {struct spi_master* master; int * txrx_word; int chipselect; } ;
struct butterfly {TYPE_4__ bitbang; struct pardevice* pd; struct parport* port; TYPE_2__* dataflash; TYPE_3__* info; int lastbyte; } ;
typedef int butterfly_cb ;
struct TYPE_7__ {int max_speed_hz; int chip_select; struct butterfly* controller_data; int * platform_data; int modalias; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct device* dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct butterfly* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct pardev_cb*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pardevice*) ;
 int FUNC_4 (struct parport*,int ,int ) ;
 struct pardevice* FUNC_5 (struct parport*,char*,struct pardev_cb*,int ) ;
 int FUNC_6 (struct pardevice*) ;
 int FUNC_7 (struct pardevice*) ;
 int FUNC_8 (struct parport*,int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (char*,int ) ;
 struct spi_master* FUNC_11 (struct device*,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int VAR_7 ;
 struct butterfly* FUNC_13 (struct spi_master*) ;
 int FUNC_14 (struct spi_master*) ;
 TYPE_2__* FUNC_15 (struct spi_master*,TYPE_3__*) ;
 int FUNC_16 (int ,char*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_17(struct parport *VAR_9)
{
 struct pardevice *VAR_10;
 int VAR_11;
 struct butterfly *VAR_12;
 struct spi_master *VAR_13;
 struct device *VAR_14 = VAR_9->physport->dev;
 struct pardev_cb VAR_15;

 if (VAR_2 || !VAR_14)
  return;





 VAR_13 = FUNC_11(VAR_14, sizeof(*VAR_12));
 if (!VAR_13) {
  VAR_11 = -VAR_0;
  goto done;
 }
 VAR_12 = FUNC_13(VAR_13);







 VAR_13->bus_num = 42;
 VAR_13->num_chipselect = 2;

 VAR_12->bitbang.master = VAR_13;
 VAR_12->bitbang.chipselect = VAR_3;
 VAR_12->bitbang.txrx_word[VAR_1] = VAR_5;




 VAR_12->port = VAR_9;
 FUNC_1(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.private = VAR_12;
 VAR_10 = FUNC_5(VAR_9, "spi_butterfly", &VAR_15, 0);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto clean0;
 }
 VAR_12->pd = VAR_10;

 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11 < 0)
  goto clean1;




 FUNC_9("%s: powerup/reset Butterfly\n", VAR_9->name);


 FUNC_4(VAR_12->port, VAR_7, 0);




 VAR_12->lastbyte |= VAR_8;
 FUNC_8(VAR_12->port, VAR_12->lastbyte);
 FUNC_2(5);


 VAR_12->lastbyte |= VAR_4;
 FUNC_8(VAR_12->port, VAR_12->lastbyte);
 FUNC_2(100);




 VAR_11 = FUNC_12(&VAR_12->bitbang);
 if (VAR_11 < 0)
  goto clean2;






 VAR_12->info[0].max_speed_hz = 15 * 1000 * 1000;
 FUNC_16(VAR_12->info[0].modalias, "mtd_dataflash");
 VAR_12->info[0].platform_data = &VAR_6;
 VAR_12->info[0].chip_select = 1;
 VAR_12->info[0].controller_data = VAR_12;
 VAR_12->dataflash = FUNC_15(VAR_12->bitbang.master, &VAR_12->info[0]);
 if (VAR_12->dataflash)
  FUNC_9("%s: dataflash at %s\n", VAR_9->name,
    FUNC_0(&VAR_12->dataflash->dev));

 FUNC_10("%s: AVR Butterfly\n", VAR_9->name);
 VAR_2 = VAR_12;
 return;

clean2:

 FUNC_8(VAR_12->port, 0);

 FUNC_6(VAR_12->pd);
clean1:
 FUNC_7(VAR_10);
clean0:
 FUNC_14(VAR_12->bitbang.master);
done:
 FUNC_9("%s: butterfly probe, fail %d\n", VAR_9->name, VAR_11);
}
