
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expMode; int coarseExpHi; int coarseExpLo; int fineExp; int gain; int blueComp; int green2Comp; int green1Comp; int redComp; int centreWeight; int compMode; int gainMode; } ;
struct TYPE_4__ {TYPE_1__ exposure; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0,
      VAR_2->params.exposure.gainMode,
      1,
      VAR_2->params.exposure.compMode,
      VAR_2->params.exposure.centreWeight,
      VAR_2->params.exposure.gain,
      VAR_2->params.exposure.fineExp,
      VAR_2->params.exposure.coarseExpLo,
      VAR_2->params.exposure.coarseExpHi,
      VAR_2->params.exposure.redComp,
      VAR_2->params.exposure.green1Comp,
      VAR_2->params.exposure.green2Comp,
      VAR_2->params.exposure.blueComp);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->params.exposure.expMode != 1) {
  VAR_3 = FUNC_0(VAR_1, VAR_0,
       0,
       VAR_2->params.exposure.expMode,
       0, 0,
       VAR_2->params.exposure.gain,
       VAR_2->params.exposure.fineExp,
       VAR_2->params.exposure.coarseExpLo,
       VAR_2->params.exposure.coarseExpHi,
       0, 0, 0, 0);
 }

 return VAR_3;
}
