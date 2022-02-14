
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int name; } ;
struct TYPE_4__ {TYPE_1__ attr; int store; int show; } ;
struct iio_dev_attr {int address; TYPE_2__ dev_attr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct iio_dev_attr *VAR_4,
       struct device *VAR_5, int VAR_6, int VAR_7)
{
 VAR_4->address = VAR_6;
 VAR_4->dev_attr.attr.mode = 0644;
 VAR_4->dev_attr.show = VAR_2;
 VAR_4->dev_attr.store = VAR_3;
 VAR_4->dev_attr.attr.name = FUNC_0(VAR_5, VAR_1,
        "in%d-in%d_balance_timer",
        VAR_7, VAR_7 + 1);
 if (!VAR_4->dev_attr.attr.name)
  return -VAR_0;

 return 0;
}
