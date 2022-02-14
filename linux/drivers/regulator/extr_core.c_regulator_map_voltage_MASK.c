
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {struct regulator_desc* desc; } ;
struct regulator_desc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map_voltage ) (struct regulator_dev*,int,int) ;scalar_t__ list_voltage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct regulator_dev*,int,int) ;
 int FUNC_1 (struct regulator_dev*,int,int) ;
 int FUNC_2 (struct regulator_dev*,int,int) ;
 int FUNC_3 (struct regulator_dev*,int,int) ;
 int FUNC_4 (struct regulator_dev*,int,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_3, int VAR_4,
     int VAR_5)
{
 const struct regulator_desc *VAR_6 = VAR_3->desc;

 if (VAR_6->ops->map_voltage)
  return VAR_6->ops->map_voltage(VAR_3, VAR_4, VAR_5);

 if (VAR_6->ops->list_voltage == VAR_0)
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 if (VAR_6->ops->list_voltage == VAR_1)
  return FUNC_2(VAR_3, VAR_4, VAR_5);

 if (VAR_6->ops->list_voltage ==
  VAR_2)
  return FUNC_3(VAR_3,
       VAR_4, VAR_5);

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
