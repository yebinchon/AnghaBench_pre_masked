
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int devt; int release; int * parent; int class; } ;
struct rc_dev {int driver_type; int driver_name; int dev; scalar_t__ tx_ir; TYPE_1__ lirc_dev; int lirc_cdev; int lirc_fh_lock; int lirc_fh; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;


 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,int ,int,char const*,char const*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *) ;

int FUNC_12(struct rc_dev *VAR_7)
{
 const char *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_9(&VAR_5, 0, VAR_1, VAR_0);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_7(&VAR_7->lirc_dev);
 VAR_7->lirc_dev.class = VAR_3;
 VAR_7->lirc_dev.parent = &VAR_7->dev;
 VAR_7->lirc_dev.release = VAR_6;
 VAR_7->lirc_dev.devt = FUNC_2(FUNC_1(VAR_2), VAR_11);
 FUNC_6(&VAR_7->lirc_dev, "lirc%d", VAR_11);

 FUNC_0(&VAR_7->lirc_fh);
 FUNC_11(&VAR_7->lirc_fh_lock);

 FUNC_4(&VAR_7->lirc_cdev, &VAR_4);

 VAR_10 = FUNC_3(&VAR_7->lirc_cdev, &VAR_7->lirc_dev);
 if (VAR_10)
  goto out_ida;

 FUNC_8(&VAR_7->dev);

 switch (VAR_7->driver_type) {
 case 128:
  VAR_8 = "scancode";
  break;
 case 129:
  VAR_8 = "raw IR";
  break;
 default:
  VAR_8 = "no";
  break;
 }

 if (VAR_7->tx_ir)
  VAR_9 = "raw IR";
 else
  VAR_9 = "no";

 FUNC_5(&VAR_7->dev, "lirc_dev: driver %s registered at minor = %d, %s receiver, %s transmitter",
   VAR_7->driver_name, VAR_11, VAR_8, VAR_9);

 return 0;

out_ida:
 FUNC_10(&VAR_5, VAR_11);
 return VAR_10;
}
