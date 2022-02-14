
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct dasd_devmap* private_data; } ;
struct dasd_devmap {struct dasd_device* device; } ;
struct dasd_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct dasd_device *FUNC_3(struct gendisk *VAR_1)
{
 struct dasd_device *VAR_2;
 struct dasd_devmap *VAR_3;

 if (!VAR_1->private_data)
  return ((void*)0);
 VAR_2 = ((void*)0);
 FUNC_1(&VAR_0);
 VAR_3 = VAR_1->private_data;
 if (VAR_3 && VAR_3->device) {
  VAR_2 = VAR_3->device;
  FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_0);
 return VAR_2;
}
