
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_7__ {int error; } ;
struct TYPE_6__ {TYPE_2__* ctrl_handler; } ;
struct msi001_dev {TYPE_2__ hdl; TYPE_1__ sd; void* if_gain; void* mixer_gain; void* lna_gain; void* bandwidth_auto; void* bandwidth; int f_tuner; struct spi_device* spi; } ;
struct TYPE_8__ {int rangelow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct msi001_dev*) ;
 struct msi001_dev* FUNC_3 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,void**,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 void* FUNC_7 (TYPE_2__*,int *,int ,int,int,int,int) ;
 int FUNC_8 (TYPE_1__*,struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_10)
{
 struct msi001_dev *VAR_11;
 int VAR_12;

 FUNC_0(&VAR_10->dev, "\n");

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_11->spi = VAR_10;
 VAR_11->f_tuner = VAR_7[0].rangelow;
 FUNC_8(&VAR_11->sd, VAR_10, &VAR_9);


 FUNC_6(&VAR_11->hdl, 5);
 VAR_11->bandwidth_auto = FUNC_7(&VAR_11->hdl, &VAR_8,
   VAR_3, 0, 1, 1, 1);
 VAR_11->bandwidth = FUNC_7(&VAR_11->hdl, &VAR_8,
   VAR_2, 200000, 8000000, 1, 200000);
 FUNC_4(2, &VAR_11->bandwidth_auto, 0, 0);
 VAR_11->lna_gain = FUNC_7(&VAR_11->hdl, &VAR_8,
   VAR_5, 0, 1, 1, 1);
 VAR_11->mixer_gain = FUNC_7(&VAR_11->hdl, &VAR_8,
   VAR_6, 0, 1, 1, 1);
 VAR_11->if_gain = FUNC_7(&VAR_11->hdl, &VAR_8,
   VAR_4, 0, 59, 1, 0);
 if (VAR_11->hdl.error) {
  VAR_12 = VAR_11->hdl.error;
  FUNC_1(&VAR_10->dev, "Could not initialize controls\n");

  goto err_ctrl_handler_free;
 }

 VAR_11->sd.ctrl_handler = &VAR_11->hdl;
 return 0;
err_ctrl_handler_free:
 FUNC_5(&VAR_11->hdl);
 FUNC_2(VAR_11);
err:
 return VAR_12;
}
