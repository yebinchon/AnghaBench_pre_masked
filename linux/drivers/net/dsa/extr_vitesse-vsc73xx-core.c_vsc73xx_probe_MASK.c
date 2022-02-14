
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vsc73xx {TYPE_1__* ds; int * addr; struct device* dev; scalar_t__ reset; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int * ops; struct vsc73xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (struct device*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct vsc73xx*) ;
 int VAR_4 ;
 int FUNC_13 (struct vsc73xx*) ;

int FUNC_14(struct vsc73xx *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7;


 VAR_5->reset = FUNC_4(VAR_6, "reset", VAR_3);
 if (FUNC_0(VAR_5->reset)) {
  FUNC_2(VAR_6, "failed to get RESET GPIO\n");
  return FUNC_1(VAR_5->reset);
 }
 if (VAR_5->reset)

  FUNC_10(20);

 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7 == -VAR_0) {
  FUNC_2(VAR_5->dev,
   "Chip seems to be out of control. Assert reset and try again.\n");
  FUNC_9(VAR_5->reset, 1);



  FUNC_11(10, 100);
  FUNC_9(VAR_5->reset, 0);

  FUNC_10(20);
  VAR_7 = FUNC_12(VAR_5);
 }
 if (VAR_7) {
  FUNC_2(VAR_6, "no chip found (%d)\n", VAR_7);
  return -VAR_1;
 }

 FUNC_8(VAR_5->addr);
 FUNC_3(VAR_5->dev,
   "MAC for control frames: %02X:%02X:%02X:%02X:%02X:%02X\n",
   VAR_5->addr[0], VAR_5->addr[1], VAR_5->addr[2],
   VAR_5->addr[3], VAR_5->addr[4], VAR_5->addr[5]);
 VAR_5->ds = FUNC_6(VAR_6, 8);
 if (!VAR_5->ds)
  return -VAR_2;
 VAR_5->ds->priv = VAR_5;

 VAR_5->ds->ops = &VAR_4;
 VAR_7 = FUNC_5(VAR_5->ds);
 if (VAR_7) {
  FUNC_2(VAR_6, "unable to register switch (%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_5->ds);
  return VAR_7;
 }

 return 0;
}
