
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dummy; } ;
struct ssb_bus {int nr_devices; struct ssb_device* devices; } ;


 int FUNC_0 (struct ssb_device*,int ) ;
 int FUNC_1 (struct ssb_device*) ;

__attribute__((used)) static void FUNC_2(struct ssb_bus *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_devices; VAR_1++) {
  struct ssb_device *VAR_2;
  VAR_2 = &(VAR_0->devices[VAR_1]);
  FUNC_0(VAR_2, FUNC_1(VAR_2));
 }
}
