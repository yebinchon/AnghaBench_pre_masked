
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tm6000_core {size_t model; int v4l2_dev; TYPE_1__* udev; int quirks; int rinput; int * vinput; int caps; int demod_addr; int ir_codes; int gpio; int tuner_addr; int tuner_type; int dev_type; } ;
struct TYPE_4__ {int rinput; int * vinput; int caps; int demod_addr; int ir_codes; int gpio; int tuner_addr; int tuner_type; int type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct tm6000_core*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct tm6000_core *VAR_2)
{
 int VAR_3;

 VAR_2->dev_type = VAR_1[VAR_2->model].type;
 VAR_2->tuner_type = VAR_1[VAR_2->model].tuner_type;
 VAR_2->tuner_addr = VAR_1[VAR_2->model].tuner_addr;

 VAR_2->gpio = VAR_1[VAR_2->model].gpio;

 VAR_2->ir_codes = VAR_1[VAR_2->model].ir_codes;

 VAR_2->demod_addr = VAR_1[VAR_2->model].demod_addr;

 VAR_2->caps = VAR_1[VAR_2->model].caps;

 VAR_2->vinput[0] = VAR_1[VAR_2->model].vinput[0];
 VAR_2->vinput[1] = VAR_1[VAR_2->model].vinput[1];
 VAR_2->vinput[2] = VAR_1[VAR_2->model].vinput[2];
 VAR_2->rinput = VAR_1[VAR_2->model].rinput;


 switch (VAR_2->model) {
 case 128:
 case 129:
  VAR_2->quirks |= VAR_0;
  break;

 default:
  break;
 }


 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(&VAR_2->udev->dev, &VAR_2->v4l2_dev);
}
