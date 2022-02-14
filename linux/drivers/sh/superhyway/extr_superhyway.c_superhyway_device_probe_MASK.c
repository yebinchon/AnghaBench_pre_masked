
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superhyway_driver {int (* probe ) (struct superhyway_device*,struct superhyway_device_id const*) ;int id_table; } ;
struct superhyway_device_id {int dummy; } ;
struct superhyway_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct superhyway_device*,struct superhyway_device_id const*) ;
 struct superhyway_device_id* FUNC_1 (int ,struct superhyway_device*) ;
 struct superhyway_device* FUNC_2 (struct device*) ;
 struct superhyway_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct superhyway_device *VAR_2 = FUNC_2(VAR_1);
 struct superhyway_driver *VAR_3 = FUNC_3(VAR_1->driver);

 if (VAR_3 && VAR_3->probe) {
  const struct superhyway_device_id *VAR_4;

  VAR_4 = FUNC_1(VAR_3->id_table, VAR_2);
  if (VAR_4)
   return VAR_3->probe(VAR_2, VAR_4);
 }

 return -VAR_0;
}
