
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_driver {int (* probe ) (struct rio_dev*,struct rio_device_id const*) ;int id_table; } ;
struct rio_device_id {int dummy; } ;
struct rio_dev {struct rio_driver* driver; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct rio_dev*) ;
 int FUNC_1 (struct rio_dev*) ;
 struct rio_device_id* FUNC_2 (int ,struct rio_dev*) ;
 int FUNC_3 (struct rio_dev*,struct rio_device_id const*) ;
 struct rio_dev* FUNC_4 (struct device*) ;
 struct rio_driver* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 struct rio_driver *VAR_2 = FUNC_5(VAR_1->driver);
 struct rio_dev *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = -VAR_0;
 const struct rio_device_id *VAR_5;

 if (!VAR_3->driver && VAR_2->probe) {
  if (!VAR_2->id_table)
   return VAR_4;
  VAR_5 = FUNC_2(VAR_2->id_table, VAR_3);
  FUNC_0(VAR_3);
  if (VAR_5)
   VAR_4 = VAR_2->probe(VAR_3, VAR_5);
  if (VAR_4 >= 0) {
   VAR_3->driver = VAR_2;
   VAR_4 = 0;
  } else
   FUNC_1(VAR_3);
 }
 return VAR_4;
}
