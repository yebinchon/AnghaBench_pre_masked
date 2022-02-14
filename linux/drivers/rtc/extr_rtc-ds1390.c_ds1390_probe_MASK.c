
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ of_node; } ;
struct spi_device {int bits_per_word; TYPE_1__ dev; int mode; } ;
struct ds1390 {int rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct ds1390* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ,unsigned char*) ;
 int VAR_5 ;
 int FUNC_6 (struct spi_device*) ;
 int FUNC_7 (struct spi_device*,struct ds1390*) ;
 int FUNC_8 (struct spi_device*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_6)
{
 unsigned char VAR_7;
 struct ds1390 *VAR_8;
 int VAR_9;

 VAR_6->mode = VAR_3;
 VAR_6->bits_per_word = 8;
 FUNC_8(VAR_6);

 VAR_8 = FUNC_3(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_7(VAR_6, VAR_8);

 VAR_9 = FUNC_5(&VAR_6->dev, VAR_0, &VAR_7);
 if (VAR_9 != 0) {
  FUNC_2(&VAR_6->dev, "unable to read device\n");
  return VAR_9;
 }

 if (VAR_6->dev.of_node)
  FUNC_6(VAR_6);

 VAR_8->rtc = FUNC_4(&VAR_6->dev, "ds1390",
     &VAR_5, VAR_4);
 if (FUNC_0(VAR_8->rtc)) {
  FUNC_2(&VAR_6->dev, "unable to register device\n");
  VAR_9 = FUNC_1(VAR_8->rtc);
 }

 return VAR_9;
}
