
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rj54n1_pdata {int ioctl_high; } ;
struct rj54n1 {int subdev; int hdl; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *,int) ;
 struct rj54n1* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_4,
         struct rj54n1_pdata *VAR_5)
{
 struct rj54n1 *VAR_6 = FUNC_4(VAR_4);
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(&VAR_6->subdev, 1);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_7 = FUNC_1(VAR_4, VAR_1);
 VAR_8 = FUNC_1(VAR_4, VAR_2);

 if (VAR_7 != 0x51 || VAR_8 != 0x10) {
  VAR_9 = -VAR_0;
  FUNC_0(&VAR_4->dev, "No RJ54N1CB0C found, read 0x%x:0x%x\n",
    VAR_7, VAR_8);
  goto done;
 }


 VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_5->ioctl_high << 7);
 if (VAR_9 < 0)
  goto done;

 FUNC_0(&VAR_4->dev, "Detected a RJ54N1CB0C chip ID 0x%x:0x%x\n",
   VAR_7, VAR_8);

 VAR_9 = FUNC_5(&VAR_6->hdl);

done:
 FUNC_3(&VAR_6->subdev, 0);
 return VAR_9;
}
