
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sif; void* sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,char*,...) ;
 int FUNC_2 (struct sd*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_5)
{
 struct gspca_dev *VAR_6 = (struct gspca_dev *)VAR_5;
 int VAR_7;

 FUNC_0(VAR_6, VAR_0, "starting OV6xx0 configuration\n");


 VAR_7 = FUNC_2(VAR_5, VAR_1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "Error detecting sensor type\n");
  return;
 }




 switch (VAR_7) {
 case 0x00:
  VAR_5->sensor = VAR_3;
  FUNC_3("WARNING: Sensor is an OV66308. Your camera may have been misdetected in previous driver versions.\n");
  break;
 case 0x01:
  VAR_5->sensor = VAR_2;
  FUNC_0(VAR_6, VAR_0, "Sensor is an OV6620\n");
  break;
 case 0x02:
  VAR_5->sensor = VAR_3;
  FUNC_0(VAR_6, VAR_0, "Sensor is an OV66308AE\n");
  break;
 case 0x03:
  VAR_5->sensor = VAR_4;
  FUNC_0(VAR_6, VAR_0, "Sensor is an OV66308AF\n");
  break;
 case 0x90:
  VAR_5->sensor = VAR_3;
  FUNC_3("WARNING: Sensor is an OV66307. Your camera may have been misdetected in previous driver versions.\n");
  break;
 default:
  FUNC_1(VAR_6, "FATAL: Unknown sensor version: 0x%02x\n",
     VAR_7);
  return;
 }


 VAR_5->sif = 1;
}
