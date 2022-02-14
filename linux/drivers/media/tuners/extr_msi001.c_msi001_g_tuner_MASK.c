
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int capability; int rangelow; int rangehigh; int type; int name; int index; } ;
struct v4l2_subdev {int dummy; } ;
struct spi_device {int dev; } ;
struct msi001_dev {struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 struct msi001_dev* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3, struct v4l2_tuner *VAR_4)
{
 struct msi001_dev *VAR_5 = FUNC_1(VAR_3);
 struct spi_device *VAR_6 = VAR_5->spi;

 FUNC_0(&VAR_6->dev, "index=%d\n", VAR_4->index);

 FUNC_2(VAR_4->name, "Mirics MSi001", sizeof(VAR_4->name));
 VAR_4->type = VAR_2;
 VAR_4->capability = VAR_0 | VAR_1;
 VAR_4->rangelow = 49000000;
 VAR_4->rangehigh = 960000000;

 return 0;
}
