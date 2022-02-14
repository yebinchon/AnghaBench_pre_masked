
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,char*,...) ;
 int FUNC_2 (struct sd*,int ) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_3)
{
 struct gspca_dev *VAR_4 = (struct gspca_dev *)VAR_3;
 int VAR_5;

 FUNC_0(VAR_4, VAR_0, "starting ov8xx0 configuration\n");


 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4, "Error detecting sensor type\n");
  return;
 }
 if ((VAR_5 & 3) == 1)
  VAR_3->sensor = VAR_2;
 else
  FUNC_1(VAR_4, "Unknown image sensor version: %d\n",
     VAR_5 & 3);
}
