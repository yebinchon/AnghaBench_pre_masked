
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {char* device_name; int map_name; struct img_ir_priv* priv; } ;
struct img_ir_priv_raw {struct rc_dev* rdev; int timer; } ;
struct img_ir_priv {int dev; struct img_ir_priv_raw raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 struct rc_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct rc_dev*) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(struct img_ir_priv *VAR_4)
{
 struct img_ir_priv_raw *VAR_5 = &VAR_4->raw;
 struct rc_dev *VAR_6;
 int VAR_7;


 FUNC_4(&VAR_5->timer, VAR_3, 0);


 VAR_5->rdev = VAR_6 = FUNC_1(VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_4->dev, "cannot allocate raw input device\n");
  return -VAR_0;
 }
 VAR_6->priv = VAR_4;
 VAR_6->map_name = VAR_2;
 VAR_6->device_name = "IMG Infrared Decoder Raw";


 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "failed to register raw IR input device\n");
  FUNC_2(VAR_6);
  VAR_5->rdev = ((void*)0);
  return VAR_7;
 }

 return 0;
}
