
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct coda_ctx {int ctrls; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* devtype; } ;
struct TYPE_3__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_0 (int *,int *,int ,int,int,int,int) ;
 int FUNC_1 (int *,int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct coda_ctx *VAR_43)
{
 int VAR_44 = (VAR_43->dev->devtype->product == VAR_2) ? 60 : 99;

 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_4, 0, 32767000, 1000, 0);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_6, 0, VAR_44, 1, 16);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_9, 0, 51, 1, 25);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_17, 0, 51, 1, 25);
 if (VAR_43->dev->devtype->product != VAR_1) {
  FUNC_0(&VAR_43->ctrls, &VAR_42,
   VAR_15, 0, 51, 1, 12);
 }
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_14, 0, 51, 1, 51);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_11, -6, 6, 1, 0);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_12, -6, 6, 1, 0);
 FUNC_1(&VAR_43->ctrls, &VAR_42,
  VAR_13,
  VAR_33,
  0x0, VAR_34);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_8, 0, 1, 1,
  0);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_7, -12, 12, 1, 0);
 FUNC_1(&VAR_43->ctrls, &VAR_42,
  VAR_16,
  VAR_35, 0x0,
  VAR_35);
 if (VAR_43->dev->devtype->product == VAR_3 ||
     VAR_43->dev->devtype->product == VAR_0) {
  FUNC_1(&VAR_43->ctrls, &VAR_42,
   VAR_10,
   VAR_30,
   ~((1 << VAR_28) |
     (1 << VAR_29) |
     (1 << VAR_30)),
   VAR_30);
 }
 if (VAR_43->dev->devtype->product == VAR_1) {
  FUNC_1(&VAR_43->ctrls, &VAR_42,
   VAR_10,
   VAR_32,
   ~((1 << VAR_28) |
     (1 << VAR_29) |
     (1 << VAR_30) |
     (1 << VAR_31) |
     (1 << VAR_32)),
   VAR_32);
 }
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_19, 1, 31, 1, 2);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_22, 1, 31, 1, 2);
 FUNC_1(&VAR_43->ctrls, &VAR_42,
  VAR_21,
  VAR_39, 0x0,
  VAR_39);
 if (VAR_43->dev->devtype->product == VAR_3 ||
     VAR_43->dev->devtype->product == VAR_0 ||
     VAR_43->dev->devtype->product == VAR_1) {
  FUNC_1(&VAR_43->ctrls, &VAR_42,
   VAR_20,
   VAR_38,
   ~(1 << VAR_38),
   VAR_38);
 }
 FUNC_1(&VAR_43->ctrls, &VAR_42,
  VAR_25,
  VAR_40, 0x0,
  VAR_41);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_24, 1, 0x3fffffff, 1, 1);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_23, 1, 0x3fffffff, 1,
  500);
 FUNC_1(&VAR_43->ctrls, &VAR_42,
  VAR_18,
  VAR_36,
  (1 << VAR_37),
  VAR_36);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_5, 0,
  1920 * 1088 / 256, 1, 0);
 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_26, 0, 0x7fff, 1, 0);




 FUNC_0(&VAR_43->ctrls, &VAR_42,
  VAR_27, 0, 262144, 1, 0);
}
