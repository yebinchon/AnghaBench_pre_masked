
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resistor_sense; } ;
struct bq2415x_device {TYPE_1__ init_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bq2415x_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bq2415x_device *VAR_4)
{
 int VAR_5;

 if (VAR_4->init_data.resistor_sense <= 0)
  return -VAR_3;

 VAR_5 = FUNC_0(VAR_4, VAR_1,
   VAR_0, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 return (3400 + 3400*VAR_5) / VAR_4->init_data.resistor_sense;
}
