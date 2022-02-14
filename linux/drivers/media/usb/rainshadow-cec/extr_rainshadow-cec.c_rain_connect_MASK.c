
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
struct rain {TYPE_2__* adap; int * dev; int buf_lock; int write_lock; int work; struct serio* serio; } ;
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
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,struct rain*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rain*) ;
 struct rain* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct rain*,struct serio*,struct cec_log_addrs*,int *) ;
 int FUNC_10 (struct serio*) ;
 int FUNC_11 (struct serio*,struct serio_driver*) ;
 int FUNC_12 (struct serio*,struct rain*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct serio *VAR_8, struct serio_driver *VAR_9)
{
 u32 VAR_10 = VAR_0 | VAR_2 | VAR_1;
 struct rain *VAR_11;
 int VAR_12 = -VAR_4;
 struct cec_log_addrs VAR_13 = {};
 u16 VAR_14 = VAR_3;

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_5);

 if (!VAR_11)
  return -VAR_4;

 VAR_11->serio = VAR_8;
 VAR_11->adap = FUNC_2(&VAR_6, VAR_11,
       FUNC_5(&VAR_8->dev), VAR_10, 1);
 VAR_12 = FUNC_1(VAR_11->adap);
 if (VAR_12 < 0)
  goto free_device;

 VAR_11->dev = &VAR_8->dev;
 FUNC_12(VAR_8, VAR_11);
 FUNC_0(&VAR_11->work, VAR_7);
 FUNC_8(&VAR_11->write_lock);
 FUNC_13(&VAR_11->buf_lock);

 VAR_12 = FUNC_11(VAR_8, VAR_9);
 if (VAR_12)
  goto delete_adap;

 VAR_12 = FUNC_9(VAR_11, VAR_8, &VAR_13, &VAR_14);
 if (VAR_12)
  goto close_serio;

 VAR_12 = FUNC_4(VAR_11->adap, &VAR_8->dev);
 if (VAR_12 < 0)
  goto close_serio;

 VAR_11->dev = &VAR_11->adap->devnode.dev;
 return 0;

close_serio:
 FUNC_10(VAR_8);
delete_adap:
 FUNC_3(VAR_11->adap);
 FUNC_12(VAR_8, ((void*)0));
free_device:
 FUNC_6(VAR_11);
 return VAR_12;
}
