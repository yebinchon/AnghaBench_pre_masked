
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {int txfid; int nicbuf_size; struct hermes hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* allocate ) (struct hermes*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct hermes*,int ,int *) ;
 int FUNC_2 (struct hermes*,int ,int *) ;

int FUNC_3(struct orinoco_private *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct hermes *VAR_4 = &VAR_2->hw;
 int VAR_5;

 VAR_5 = VAR_4->ops->allocate(VAR_4, VAR_2->nicbuf_size, &VAR_2->txfid);
 if (VAR_5 == -VAR_0 && VAR_2->nicbuf_size > VAR_1) {

  VAR_2->nicbuf_size = VAR_1;
  VAR_5 = VAR_4->ops->allocate(VAR_4, VAR_2->nicbuf_size, &VAR_2->txfid);

  FUNC_0(VAR_3, "Firmware ALLOC bug detected "
    "(old Symbol firmware?). Work around %s\n",
    VAR_5 ? "failed!" : "ok.");
 }

 return VAR_5;
}
