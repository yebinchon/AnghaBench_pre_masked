
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {char* sensor_fw; char* sensor_type; int fw_size; scalar_t__ isp_ready; struct v4l2_subdev sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s5c73m3*,int,int*) ;
 int FUNC_1 (struct v4l2_subdev*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_2)
{
 struct v4l2_subdev *VAR_3 = &VAR_2->sensor_sd;
 int VAR_4, VAR_5;
 u16 VAR_6[2];
 int VAR_7;

 VAR_7 = VAR_2->isp_ready ? 0x60 : 0;

 for (VAR_4 = 0; VAR_4 < VAR_0 / 2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_7 + VAR_4 * 2, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_2->sensor_fw[VAR_4 * 2] = (char)(*VAR_6 & 0xff);
  VAR_2->sensor_fw[VAR_4 * 2 + 1] = (char)(*VAR_6 >> 8);
 }
 VAR_2->sensor_fw[VAR_0] = '\0';


 for (VAR_4 = 0; VAR_4 < VAR_1 / 2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_7 + 6 + VAR_4 * 2, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_2->sensor_type[VAR_4 * 2] = (char)(*VAR_6 & 0xff);
  VAR_2->sensor_type[VAR_4 * 2 + 1] = (char)(*VAR_6 >> 8);
 }
 VAR_2->sensor_type[VAR_1] = '\0';

 VAR_5 = FUNC_0(VAR_2, VAR_7 + 0x14, VAR_6);
 if (VAR_5 >= 0) {
  VAR_5 = FUNC_0(VAR_2, VAR_7 + 0x16, VAR_6 + 1);
  if (VAR_5 >= 0)
   VAR_2->fw_size = VAR_6[0] + (VAR_6[1] << 16);
 }

 FUNC_1(VAR_3, "Sensor type: %s, FW version: %s\n",
    VAR_2->sensor_type, VAR_2->sensor_fw);
 return VAR_5;
}
