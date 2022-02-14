
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_3__ {int (* remove_frontend ) (TYPE_1__*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ dmx; } ;
struct cxd2880_dvb_spi {scalar_t__ vcc_supply; int adapter; int dvb_fe; TYPE_2__ demux; int dmxdev; int dmx_fe; } ;


 int VAR_0 ;
 struct cxd2880_dvb_spi* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cxd2880_dvb_spi*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_11(struct spi_device *VAR_1)
{
 struct cxd2880_dvb_spi *VAR_2;

 if (!VAR_1) {
  FUNC_7("invalid arg\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_0(&VAR_1->dev);

 if (!VAR_2) {
  FUNC_7("failed\n");
  return -VAR_0;
 }
 VAR_2->demux.dmx.remove_frontend(&VAR_2->demux.dmx,
        &VAR_2->dmx_fe);
 FUNC_2(&VAR_2->dmxdev);
 FUNC_1(&VAR_2->demux);
 FUNC_5(&VAR_2->dvb_fe);
 FUNC_3(&VAR_2->dvb_fe);
 FUNC_4(&VAR_2->adapter);

 if (VAR_2->vcc_supply)
  FUNC_9(VAR_2->vcc_supply);

 FUNC_6(VAR_2);
 FUNC_8("cxd2880_spi remove ok.\n");

 return 0;
}
