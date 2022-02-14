
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {char* fw_file_version; int isp_ready; struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;
struct firmware {int size; int data; } ;
typedef int fw_name ;


 int VAR_0 ;
 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const**,char*,int *) ;
 int FUNC_2 (struct s5c73m3*,int ,int ,int) ;
 struct s5c73m3* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (struct v4l2_subdev*,char*,...) ;
 int FUNC_6 (struct v4l2_subdev*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_1)
{
 struct s5c73m3 *VAR_2 = FUNC_3(VAR_1);
 struct i2c_client *VAR_3 = VAR_2->i2c_client;
 const struct firmware *VAR_4;
 int VAR_5;
 char VAR_6[20];

 FUNC_4(VAR_6, sizeof(VAR_6), "SlimISP_%.2s.bin",
       VAR_2->fw_file_version);
 VAR_5 = FUNC_1(&VAR_4, VAR_6, &VAR_3->dev);
 if (VAR_5 < 0) {
  FUNC_5(VAR_1, "Firmware request failed (%s)\n", VAR_6);
  return -VAR_0;
 }

 FUNC_6(VAR_1, "Loading firmware (%s, %zu B)\n", VAR_6, VAR_4->size);

 VAR_5 = FUNC_2(VAR_2, VAR_4->data, VAR_4->size, 64);

 if (VAR_5 >= 0)
  VAR_2->isp_ready = 1;
 else
  FUNC_5(VAR_1, "SPI write failed\n");

 FUNC_0(VAR_4);

 return VAR_5;
}
