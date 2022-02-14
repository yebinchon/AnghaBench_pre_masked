
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency_band {size_t index; int rangehigh; int rangelow; int capability; int type; int tuner; } ;
struct spi_device {int dev; } ;
struct msi001_dev {struct spi_device* spi; } ;
struct TYPE_3__ {int rangehigh; int rangelow; int capability; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,char*,int ,int ,size_t) ;
 struct msi001_dev* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
      struct v4l2_frequency_band *VAR_3)
{
 struct msi001_dev *VAR_4 = FUNC_2(VAR_2);
 struct spi_device *VAR_5 = VAR_4->spi;

 FUNC_1(&VAR_5->dev, "tuner=%d type=%d index=%d\n",
  VAR_3->tuner, VAR_3->type, VAR_3->index);

 if (VAR_3->index >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3->capability = VAR_1[VAR_3->index].capability;
 VAR_3->rangelow = VAR_1[VAR_3->index].rangelow;
 VAR_3->rangehigh = VAR_1[VAR_3->index].rangehigh;

 return 0;
}
