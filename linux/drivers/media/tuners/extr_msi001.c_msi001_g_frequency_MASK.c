
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int frequency; int tuner; } ;
struct spi_device {int dev; } ;
struct msi001_dev {int f_tuner; struct spi_device* spi; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct msi001_dev* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_frequency *VAR_1)
{
 struct msi001_dev *VAR_2 = FUNC_1(VAR_0);
 struct spi_device *VAR_3 = VAR_2->spi;

 FUNC_0(&VAR_3->dev, "tuner=%d\n", VAR_1->tuner);
 VAR_1->frequency = VAR_2->f_tuner;
 return 0;
}
