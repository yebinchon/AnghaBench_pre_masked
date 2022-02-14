
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {scalar_t__ dev; } ;
struct ssb_bus {int nr_devices; scalar_t__ bustype; int watchdog; struct ssb_device* devices; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ssb_bus *VAR_1)
{
 struct ssb_device *VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_1->nr_devices - 1; VAR_3 >= 0; VAR_3--) {
  VAR_2 = &(VAR_1->devices[VAR_3]);
  if (VAR_2->dev)
   FUNC_0(VAR_2->dev);
 }





}
