
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int first_minor; int queue; scalar_t__ disk_name; int * fops; int major; } ;
struct dasd_device {int devindex; int features; TYPE_1__* cdev; int flags; } ;
struct dasd_block {struct gendisk* gdp; int request_queue; struct dasd_device* base; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gendisk* FUNC_0 (int) ;
 int FUNC_1 (struct gendisk*,struct dasd_device*) ;
 int VAR_7 ;
 int FUNC_2 (int *,struct gendisk*,int *) ;
 int FUNC_3 (struct gendisk*,int ) ;
 int FUNC_4 (struct gendisk*,int) ;
 int FUNC_5 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct dasd_block *VAR_8)
{
 struct gendisk *VAR_9;
 struct dasd_device *VAR_10;
 int VAR_11;


 VAR_10 = VAR_8->base;
 if (VAR_10->devindex >= VAR_4)
  return -VAR_5;

 VAR_9 = FUNC_0(1 << VAR_3);
 if (!VAR_9)
  return -VAR_6;


 VAR_9->major = VAR_2;
 VAR_9->first_minor = VAR_10->devindex << VAR_3;
 VAR_9->fops = &VAR_7;
 VAR_11 = FUNC_5(VAR_9->disk_name, "dasd");
 if (VAR_10->devindex > 25) {
  if (VAR_10->devindex > 701) {
   if (VAR_10->devindex > 18277)
           VAR_11 += FUNC_5(VAR_9->disk_name + VAR_11, "%c",
            'a'+(((VAR_10->devindex-18278)
           /17576)%26));
   VAR_11 += FUNC_5(VAR_9->disk_name + VAR_11, "%c",
           'a'+(((VAR_10->devindex-702)/676)%26));
  }
  VAR_11 += FUNC_5(VAR_9->disk_name + VAR_11, "%c",
          'a'+(((VAR_10->devindex-26)/26)%26));
 }
 VAR_11 += FUNC_5(VAR_9->disk_name + VAR_11, "%c", 'a'+(VAR_10->devindex%26));

 if (VAR_10->features & VAR_0 ||
     FUNC_6(VAR_1, &VAR_10->flags))
  FUNC_4(VAR_9, 1);
 FUNC_1(VAR_9, VAR_10);
 VAR_9->queue = VAR_8->request_queue;
 VAR_8->gdp = VAR_9;
 FUNC_3(VAR_8->gdp, 0);
 FUNC_2(&VAR_10->cdev->dev, VAR_8->gdp, ((void*)0));
 return 0;
}
