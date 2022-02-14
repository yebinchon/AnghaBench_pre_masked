
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int chip; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_5__ {TYPE_1__ stag; } ;
struct adapter {int pdev_dev; int win0_lock; TYPE_3__ params; TYPE_2__ vres; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,char*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct adapter*,int ,int,int,int,int *,int ) ;
 int FUNC_10 (struct adapter*,int ) ;

int FUNC_11(struct net_device *VAR_13, u32 VAR_14, __be32 *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 u32 VAR_25, VAR_26, VAR_27;
 struct adapter *VAR_28;
 u32 VAR_29 = 0;
 int VAR_30;

 VAR_28 = FUNC_6(VAR_13);

 VAR_25 = ((VAR_14 >> 8) * 32) + VAR_28->vres.stag.start;







 VAR_20 = FUNC_10(VAR_28, VAR_2);
 VAR_16 = FUNC_0(VAR_20) << 20;
 VAR_20 = FUNC_10(VAR_28, VAR_3);
 VAR_17 = FUNC_1(VAR_20) << 20;
 VAR_20 = FUNC_10(VAR_28, VAR_4);
 VAR_18 = FUNC_2(VAR_20) << 20;

 if (FUNC_10(VAR_28, VAR_6) & VAR_1) {
  VAR_20 = FUNC_10(VAR_28, VAR_5);
  VAR_29 = FUNC_3(VAR_20) << 20;
 }
 VAR_21 = VAR_16;
 VAR_22 = VAR_21 + VAR_17;
 VAR_23 = VAR_22 + VAR_18;

 if (VAR_25 < VAR_21) {
  VAR_26 = VAR_7;
  VAR_27 = VAR_25;
 } else if (VAR_25 < VAR_22) {
  VAR_26 = VAR_8;
  VAR_27 = VAR_25 - VAR_21;
 } else {
  if (VAR_29 && (VAR_25 < (VAR_22 + VAR_29))) {
   VAR_26 = VAR_9;
   VAR_27 = VAR_25 - VAR_22;
  } else if (VAR_25 < VAR_23) {
   VAR_26 = VAR_10;
   VAR_27 = VAR_25 - VAR_22;
  } else if (FUNC_5(VAR_28->params.chip)) {
   VAR_20 = FUNC_10(VAR_28, VAR_5);
   VAR_19 = FUNC_3(VAR_20) << 20;
   VAR_24 = VAR_23 + VAR_19;
   if (VAR_25 < VAR_24) {
    VAR_26 = VAR_11;
    VAR_27 = VAR_25 - VAR_23;
   } else {

    goto err;
   }
  } else {

   goto err;
  }
 }

 FUNC_7(&VAR_28->win0_lock);
 VAR_30 = FUNC_9(VAR_28, 0, VAR_26, VAR_27, 32, VAR_15, VAR_12);
 FUNC_8(&VAR_28->win0_lock);
 return VAR_30;

err:
 FUNC_4(VAR_28->pdev_dev, "stag %#x, offset %#x out of range\n",
  VAR_14, VAR_25);
 return -VAR_0;
}
