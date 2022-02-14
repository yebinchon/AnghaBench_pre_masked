
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int address; int adapter_id; } ;
struct TYPE_5__ {TYPE_1__ i2c; } ;
struct TYPE_6__ {TYPE_2__ match; int match_type; int list; } ;
struct ceu_subdev {TYPE_3__ asd; int mbus_flags; } ;
struct ceu_platform_data {unsigned int num_subdevs; struct ceu_async_subdev* subdevs; } ;
struct ceu_device {int notifier; struct ceu_subdev* subdevs; } ;
struct ceu_async_subdev {int i2c_address; int i2c_adapter_id; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ceu_device*,unsigned int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ceu_device *VAR_2,
       const struct ceu_platform_data *VAR_3)
{
 const struct ceu_async_subdev *VAR_4;
 struct ceu_subdev *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_3->num_subdevs == 0)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_2, VAR_3->num_subdevs);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_subdevs; VAR_6++) {


  VAR_4 = &VAR_3->subdevs[VAR_6];
  VAR_5 = &VAR_2->subdevs[VAR_6];

  FUNC_0(&VAR_5->asd.list);

  VAR_5->mbus_flags = VAR_4->flags;
  VAR_5->asd.match_type = VAR_1;
  VAR_5->asd.match.i2c.adapter_id = VAR_4->i2c_adapter_id;
  VAR_5->asd.match.i2c.address = VAR_4->i2c_address;

  VAR_7 = FUNC_2(&VAR_2->notifier,
           &VAR_5->asd);
  if (VAR_7) {
   FUNC_3(&VAR_2->notifier);
   return VAR_7;
  }
 }

 return VAR_3->num_subdevs;
}
