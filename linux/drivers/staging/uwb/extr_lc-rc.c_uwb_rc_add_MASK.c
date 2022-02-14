
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {TYPE_2__* bus; } ;
struct TYPE_7__ {int dev_addr; int mac_addr; struct device dev; } ;
struct TYPE_5__ {int event_list_lock; int event_list; int wq; } ;
struct uwb_rc {int (* start ) (struct uwb_rc*) ;int ready; int (* stop ) (struct uwb_rc*) ;TYPE_3__ uwb_dev; TYPE_1__ uwbd; void* priv; int index; } ;
typedef int macbuf ;
typedef int devbuf ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,char*,char*,int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct uwb_rc*) ;
 int FUNC_8 (struct uwb_rc*) ;
 int FUNC_9 (TYPE_3__*,struct device*,struct uwb_rc*) ;
 int FUNC_10 (char*,int,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (char*,int,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct uwb_rc*) ;
 int FUNC_15 (struct uwb_rc*) ;
 int FUNC_16 (struct uwb_rc*) ;
 int FUNC_17 (struct uwb_rc*) ;

int FUNC_18(struct uwb_rc *VAR_2, struct device *VAR_3, void *VAR_4)
{
 int VAR_5;
 struct device *VAR_6;
 char VAR_7[VAR_1], VAR_8[VAR_1];

 VAR_2->index = FUNC_13();

 VAR_6 = &VAR_2->uwb_dev.dev;
 FUNC_4(VAR_6, "uwb%d", VAR_2->index);

 VAR_2->priv = VAR_4;

 FUNC_5(&VAR_2->uwbd.wq);
 FUNC_0(&VAR_2->uwbd.event_list);
 FUNC_6(&VAR_2->uwbd.event_list_lock);

 FUNC_16(VAR_2);

 VAR_5 = VAR_2->start(VAR_2);
 if (VAR_5 < 0)
  goto error_rc_start;

 VAR_5 = FUNC_14(VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(VAR_6, "cannot setup UWB radio controller: %d\n", VAR_5);
  goto error_rc_setup;
 }

 VAR_5 = FUNC_9(&VAR_2->uwb_dev, VAR_3, VAR_2);
 if (VAR_5 < 0 && VAR_5 != -VAR_0)
  goto error_dev_add;

 VAR_5 = FUNC_15(VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3, "cannot register UWB radio controller "
   "dev attributes: %d\n", VAR_5);
  goto error_sys_add;
 }

 FUNC_12(VAR_7, sizeof(VAR_7), &VAR_2->uwb_dev.mac_addr);
 FUNC_10(VAR_8, sizeof(VAR_8), &VAR_2->uwb_dev.dev_addr);
 FUNC_2(VAR_6,
   "new uwb radio controller (mac %s dev %s) on %s %s\n",
   VAR_7, VAR_8, VAR_3->bus->name, FUNC_3(VAR_3));
 VAR_2->ready = 1;
 return 0;

error_sys_add:
 FUNC_11(&VAR_2->uwb_dev);
error_dev_add:
error_rc_setup:
 VAR_2->stop(VAR_2);
error_rc_start:
 FUNC_17(VAR_2);
 return VAR_5;
}
