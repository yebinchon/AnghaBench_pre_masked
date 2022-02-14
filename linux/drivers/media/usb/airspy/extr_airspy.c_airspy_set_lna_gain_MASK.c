
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct airspy {int dev; TYPE_4__* lna_gain; TYPE_3__* lna_gain_auto; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_8__ {int val; TYPE_2__ cur; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_7__ {int val; TYPE_1__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct airspy*,int ,int ,int,int *,int) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct airspy *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 FUNC_1(VAR_2->dev, "lna auto=%d->%d val=%d->%d\n",
   VAR_2->lna_gain_auto->cur.val, VAR_2->lna_gain_auto->val,
   VAR_2->lna_gain->cur.val, VAR_2->lna_gain->val);

 VAR_3 = FUNC_0(VAR_2, VAR_0, 0, VAR_2->lna_gain_auto->val,
   &VAR_4, 1);
 if (VAR_3)
  goto err;

 if (VAR_2->lna_gain_auto->val == 0) {
  VAR_3 = FUNC_0(VAR_2, VAR_1, 0, VAR_2->lna_gain->val,
    &VAR_4, 1);
  if (VAR_3)
   goto err;
 }
err:
 if (VAR_3)
  FUNC_1(VAR_2->dev, "failed=%d\n", VAR_3);

 return VAR_3;
}
