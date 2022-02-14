
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct uwb_dev {TYPE_3__ dev; struct uwb_beca_e* bce; int dev_addr; int mac_addr; } ;
struct uwb_beca_e {struct uwb_dev* uwb_dev; int dev_addr; int * mac_addr; } ;
typedef int macbuf ;
typedef int devbuf ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct device*,char*,char*,char*,int ,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_3__*,char*,char*) ;
 int FUNC_4 (struct uwb_dev*) ;
 struct uwb_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (struct uwb_beca_e*) ;
 int FUNC_7 (struct uwb_beca_e*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_8 (struct uwb_dev*,struct device*,struct uwb_rc*) ;
 int FUNC_9 (char*,int,int *) ;
 int FUNC_10 (struct uwb_dev*) ;
 int FUNC_11 (char*,int,int *) ;
 int FUNC_12 (struct uwb_rc*,struct uwb_dev*,int ) ;

void FUNC_13(struct uwb_rc *VAR_4, struct uwb_beca_e *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_4->uwb_dev.dev;
 struct uwb_dev *VAR_8;
 char VAR_9[VAR_1], VAR_10[VAR_1];

 FUNC_11(VAR_9, sizeof(VAR_9), VAR_5->mac_addr);
 FUNC_9(VAR_10, sizeof(VAR_10), &VAR_5->dev_addr);
 VAR_8 = FUNC_5(sizeof(struct uwb_dev), VAR_0);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_7, "new device %s: Cannot allocate memory\n",
   VAR_9);
  return;
 }
 FUNC_10(VAR_8);
 VAR_8->dev.bus = &VAR_3;
 VAR_8->mac_addr = *VAR_5->mac_addr;
 VAR_8->dev_addr = VAR_5->dev_addr;
 FUNC_3(&VAR_8->dev, "%s", VAR_9);


 VAR_5->uwb_dev = VAR_8;
 VAR_8->bce = VAR_5;
 FUNC_6(VAR_5);

 VAR_6 = FUNC_8(VAR_8, &VAR_4->uwb_dev.dev, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_7, "new device %s: cannot instantiate device\n",
   VAR_9);
  goto error_dev_add;
 }

 FUNC_1(VAR_7, "uwb device (mac %s dev %s) connected to %s %s\n",
   VAR_9, VAR_10, VAR_8->dev.bus->name,
   FUNC_2(&(VAR_4->uwb_dev.dev)));
 FUNC_12(VAR_4, VAR_8, VAR_2);
 return;

error_dev_add:
 VAR_5->uwb_dev = ((void*)0);
 FUNC_7(VAR_5);
 FUNC_4(VAR_8);
 return;
}
