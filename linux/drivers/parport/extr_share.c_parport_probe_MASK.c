
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_driver {int (* probe ) (struct pardevice*) ;int name; } ;
struct pardevice {int name; } ;
struct device {int driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pardevice*) ;
 struct pardevice* FUNC_3 (struct device*) ;
 struct parport_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct parport_driver *VAR_2;

 if (FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_4(VAR_1->driver);
 if (!VAR_2->probe) {

  struct pardevice *VAR_3 = FUNC_3(VAR_1);

  if (FUNC_1(VAR_3->name, VAR_2->name))
   return -VAR_0;
  return 0;
 }

 return VAR_2->probe(FUNC_3(VAR_1));
}
