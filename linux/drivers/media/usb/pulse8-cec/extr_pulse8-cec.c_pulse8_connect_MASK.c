
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct serio_driver {int dummy; } ;
struct serio {int dev; } ;
struct pulse8 {int config_pending; int restoring_config; TYPE_2__* adap; int ping_eeprom_work; scalar_t__ autonomous; int * dev; int config_lock; int write_lock; int work; struct serio* serio; } ;
struct cec_log_addrs {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_7__ {TYPE_1__ devnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,struct pulse8*,int ,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pulse8*) ;
 struct pulse8* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (struct pulse8*,struct cec_log_addrs*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (struct pulse8*,struct serio*,struct cec_log_addrs*,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct serio*) ;
 int FUNC_14 (struct serio*,struct serio_driver*) ;
 int FUNC_15 (struct serio*,struct pulse8*) ;

__attribute__((used)) static int FUNC_16(struct serio *VAR_11, struct serio_driver *VAR_12)
{
 u32 VAR_13 = VAR_0 | VAR_2 | VAR_1;
 struct pulse8 *VAR_14;
 int VAR_15 = -VAR_4;
 struct cec_log_addrs VAR_16 = {};
 u16 VAR_17 = VAR_3;

 VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_5);

 if (!VAR_14)
  return -VAR_4;

 VAR_14->serio = VAR_11;
 VAR_14->adap = FUNC_3(&VAR_8, VAR_14,
         FUNC_6(&VAR_11->dev), VAR_13, 1);
 VAR_15 = FUNC_2(VAR_14->adap);
 if (VAR_15 < 0)
  goto free_device;

 VAR_14->dev = &VAR_11->dev;
 FUNC_15(VAR_11, VAR_14);
 FUNC_1(&VAR_14->work, VAR_9);
 FUNC_9(&VAR_14->write_lock);
 FUNC_9(&VAR_14->config_lock);
 VAR_14->config_pending = 0;

 VAR_15 = FUNC_14(VAR_11, VAR_12);
 if (VAR_15)
  goto delete_adap;

 VAR_15 = FUNC_11(VAR_14, VAR_11, &VAR_16, &VAR_17);
 if (VAR_15)
  goto close_serio;

 VAR_15 = FUNC_5(VAR_14->adap, &VAR_11->dev);
 if (VAR_15 < 0)
  goto close_serio;

 VAR_14->dev = &VAR_14->adap->devnode.dev;

 if (VAR_7 && VAR_14->autonomous) {
  VAR_15 = FUNC_10(VAR_14, &VAR_16, VAR_17);
  if (VAR_15)
   goto close_serio;
  VAR_14->restoring_config = 1;
 }

 FUNC_0(&VAR_14->ping_eeprom_work,
     VAR_10);
 FUNC_12(&VAR_14->ping_eeprom_work, VAR_6);

 return 0;

close_serio:
 FUNC_13(VAR_11);
delete_adap:
 FUNC_4(VAR_14->adap);
 FUNC_15(VAR_11, ((void*)0));
free_device:
 FUNC_7(VAR_14);
 return VAR_15;
}
