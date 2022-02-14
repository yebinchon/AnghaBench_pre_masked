
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct spi_device {int dev; } ;
struct msi001_dev {int hdl; int sd; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct msi001_dev*) ;
 struct msi001_dev* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_3(VAR_0);
 struct msi001_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_0->dev, "\n");





 FUNC_5(&VAR_2->sd);
 FUNC_4(&VAR_2->hdl);
 FUNC_1(VAR_2);
 return 0;
}
