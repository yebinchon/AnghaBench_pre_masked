
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddb {int dev; TYPE_3__* link; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_6__ {TYPE_2__* info; int flash_mutex; TYPE_1__ lnb; } ;
struct TYPE_5__ {scalar_t__ fan_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ddb*) ;
 int FUNC_1 (struct ddb*) ;
 int FUNC_2 (struct ddb*) ;
 scalar_t__ FUNC_3 (struct ddb*) ;
 int FUNC_4 (struct ddb*) ;
 int FUNC_5 (struct ddb*) ;
 scalar_t__ FUNC_6 (struct ddb*) ;
 int FUNC_7 (struct ddb*) ;
 int FUNC_8 (struct ddb*) ;
 int FUNC_9 (struct ddb*) ;
 int FUNC_10 (struct ddb*,int,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_2 ;

int FUNC_14(struct ddb *VAR_3)
{
 FUNC_13(&VAR_3->link[0].lnb.lock);
 FUNC_13(&VAR_3->link[0].flash_mutex);
 if (VAR_2) {
  FUNC_2(VAR_3);
  return 0;
 }

 FUNC_5(VAR_3);

 if (FUNC_3(VAR_3) < 0)
  goto fail1;
 FUNC_8(VAR_3);
 if (FUNC_0(VAR_3) < 0) {
  FUNC_12(VAR_3->dev, "Could not allocate buffer memory\n");
  goto fail2;
 }
 if (FUNC_6(VAR_3) < 0)
  goto fail3;

 FUNC_2(VAR_3);

 if (VAR_3->link[0].info->fan_num) {
  FUNC_10(VAR_3, 1, VAR_0);
  FUNC_10(VAR_3, 1, VAR_1);
 }
 return 0;

fail3:
 FUNC_11(VAR_3->dev, "fail3\n");
 FUNC_7(VAR_3);
 FUNC_1(VAR_3);
fail2:
 FUNC_11(VAR_3->dev, "fail2\n");
 FUNC_9(VAR_3);
 FUNC_4(VAR_3);
fail1:
 FUNC_11(VAR_3->dev, "fail1\n");
 return -1;
}
