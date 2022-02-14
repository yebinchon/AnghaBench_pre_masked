
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int spec_minor; int spec_major; int version; } ;
struct kempld_device_data {TYPE_2__* dev; TYPE_1__ info; int lock; int io_index; int io_data; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct kempld_device_data*) ;
 int FUNC_4 (struct kempld_device_data*) ;
 int FUNC_5 (struct kempld_device_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct kempld_device_data *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 FUNC_6(&VAR_3->lock);


 VAR_4 = FUNC_1(VAR_3->io_index);
 if (VAR_4 == 0xff && FUNC_1(VAR_3->io_data) == 0xff) {
  FUNC_7(&VAR_3->lock);
  return -VAR_0;
 }


 if (!(VAR_4 & VAR_1)) {
  FUNC_2(VAR_1, VAR_3->io_index);

  FUNC_2(VAR_1, VAR_3->io_index);
 }

 FUNC_7(&VAR_3->lock);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_3->dev, "Found Kontron PLD - %s (%s), spec %d.%d\n",
   VAR_3->info.version, FUNC_4(VAR_3),
   VAR_3->info.spec_major, VAR_3->info.spec_minor);

 VAR_5 = FUNC_8(&VAR_3->dev->kobj, &VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  FUNC_9(&VAR_3->dev->kobj, &VAR_2);

 return VAR_5;
}
