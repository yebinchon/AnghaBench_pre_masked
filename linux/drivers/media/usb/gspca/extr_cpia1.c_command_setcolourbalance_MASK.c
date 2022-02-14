
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int balanceMode; int blueGain; int greenGain; int redGain; } ;
struct TYPE_4__ {TYPE_1__ colourBalance; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_3->params.colourBalance.balanceMode == 1) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_2, VAR_0,
     1,
     VAR_3->params.colourBalance.redGain,
     VAR_3->params.colourBalance.greenGain,
     VAR_3->params.colourBalance.blueGain);
  if (VAR_4)
   return VAR_4;

  return FUNC_0(VAR_2, VAR_0,
      3, 0, 0, 0);
 }
 if (VAR_3->params.colourBalance.balanceMode == 2) {
  return FUNC_0(VAR_2, VAR_0,
      2, 0, 0, 0);
 }
 if (VAR_3->params.colourBalance.balanceMode == 3) {
  return FUNC_0(VAR_2, VAR_0,
      3, 0, 0, 0);
 }

 return -VAR_1;
}
