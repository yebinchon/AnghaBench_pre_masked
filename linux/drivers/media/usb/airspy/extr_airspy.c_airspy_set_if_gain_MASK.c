
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct airspy {int dev; TYPE_2__* if_gain; } ;
struct TYPE_3__ {int val; } ;
struct TYPE_4__ {int val; TYPE_1__ cur; } ;


 int VAR_0 ;
 int FUNC_0 (struct airspy*,int ,int ,int ,int *,int) ;
 int FUNC_1 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct airspy *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 FUNC_1(VAR_1->dev, "val=%d->%d\n", VAR_1->if_gain->cur.val, VAR_1->if_gain->val);

 VAR_2 = FUNC_0(VAR_1, VAR_0, 0, VAR_1->if_gain->val,
   &VAR_3, 1);
 if (VAR_2)
  FUNC_1(VAR_1->dev, "failed=%d\n", VAR_2);

 return VAR_2;
}
