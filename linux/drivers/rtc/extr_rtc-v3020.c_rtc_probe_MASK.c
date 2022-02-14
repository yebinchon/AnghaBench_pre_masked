
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v3020_platform_data {scalar_t__ use_gpio; } ;
struct v3020 {TYPE_3__* ops; int rtc; int leftshift; TYPE_1__* gpio; } ;
struct platform_device {int dev; TYPE_2__* resource; } ;
struct TYPE_7__ {int (* map_io ) (struct v3020*,struct platform_device*,struct v3020_platform_data*) ;int (* read_bit ) (struct v3020*) ;int (* unmap_io ) (struct v3020*) ;} ;
struct TYPE_6__ {scalar_t__ start; } ;
struct TYPE_5__ {int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 struct v3020_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,unsigned long long,int ,...) ;
 struct v3020* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (struct platform_device*,struct v3020*) ;
 int FUNC_7 (struct v3020*,struct platform_device*,struct v3020_platform_data*) ;
 int FUNC_8 (struct v3020*) ;
 int FUNC_9 (struct v3020*) ;
 int FUNC_10 (struct v3020*,int ) ;
 TYPE_3__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct v3020*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_14)
{
 struct v3020_platform_data *VAR_15 = FUNC_2(&VAR_14->dev);
 struct v3020 *VAR_16;
 int VAR_17 = -VAR_0;
 int VAR_18;
 int VAR_19;

 VAR_16 = FUNC_4(&VAR_14->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 if (VAR_15->use_gpio)
  VAR_16->ops = &VAR_11;
 else
  VAR_16->ops = &VAR_12;

 VAR_17 = VAR_16->ops->map_io(VAR_16, VAR_14, VAR_15);
 if (VAR_17)
  return VAR_17;



 for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
  VAR_19 = VAR_16->ops->read_bit(VAR_16);



 FUNC_11(VAR_16, VAR_8, 0x33);
 if (FUNC_10(VAR_16, VAR_8) != 0x33) {
  VAR_17 = -VAR_1;
  goto err_io;
 }



 FUNC_11(VAR_16, VAR_9, 0x0);

 if (VAR_15->use_gpio)
  FUNC_3(&VAR_14->dev, "Chip available at GPIOs "
    "%d, %d, %d, %d\n",
    VAR_16->gpio[VAR_5].gpio, VAR_16->gpio[VAR_10].gpio,
    VAR_16->gpio[VAR_7].gpio, VAR_16->gpio[VAR_6].gpio);
 else
  FUNC_3(&VAR_14->dev, "Chip available at "
    "physical address 0x%llx,"
    "data connected to D%d\n",
    (unsigned long long)VAR_14->resource[0].start,
    VAR_16->leftshift);

 FUNC_6(VAR_14, VAR_16);

 VAR_16->rtc = FUNC_5(&VAR_14->dev, "v3020",
     &VAR_13, VAR_4);
 if (FUNC_0(VAR_16->rtc)) {
  VAR_17 = FUNC_1(VAR_16->rtc);
  goto err_io;
 }

 return 0;

err_io:
 VAR_16->ops->unmap_io(VAR_16);

 return VAR_17;
}
