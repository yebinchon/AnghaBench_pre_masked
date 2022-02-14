
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct spi_device {int irq; int max_speed_hz; int bits_per_word; int mode; int dev; } ;
struct gs {scalar_t__ enabled; int current_timings; struct v4l2_subdev sd; struct spi_device* pdev; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gs* FUNC_0 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct spi_device*,int,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct spi_device*) ;
 int FUNC_3 (struct v4l2_subdev*,struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_5)
{
 int VAR_6;
 struct gs *VAR_7;
 struct v4l2_subdev *VAR_8;

 VAR_7 = FUNC_0(&VAR_5->dev, sizeof(struct gs), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->pdev = VAR_5;
 VAR_8 = &VAR_7->sd;

 VAR_5->mode = VAR_2;
 VAR_5->irq = -1;
 VAR_5->max_speed_hz = 10000000;
 VAR_5->bits_per_word = 16;
 VAR_6 = FUNC_2(VAR_5);
 FUNC_3(VAR_8, VAR_5, &VAR_3);

 VAR_7->current_timings = VAR_4[0].format;
 VAR_7->enabled = 0;


 FUNC_1(VAR_5, 0x0, 0x300);

 return VAR_6;
}
