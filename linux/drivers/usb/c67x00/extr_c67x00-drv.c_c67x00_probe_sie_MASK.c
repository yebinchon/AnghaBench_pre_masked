
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c67x00_sie {int sie_num; int mode; struct c67x00_device* dev; int lock; } ;
struct c67x00_device {TYPE_1__* pdata; } ;
struct TYPE_2__ {int sie_config; } ;




 int FUNC_0 (struct c67x00_sie*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct c67x00_sie*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct c67x00_sie *VAR_0,
        struct c67x00_device *VAR_1, int VAR_2)
{
 FUNC_5(&VAR_0->lock);
 VAR_0->dev = VAR_1;
 VAR_0->sie_num = VAR_2;
 VAR_0->mode = FUNC_1(VAR_1->pdata->sie_config, VAR_2);

 switch (VAR_0->mode) {
 case 129:
  FUNC_0(VAR_0);
  break;

 case 128:
  FUNC_3(FUNC_4(VAR_0),
    "Not using SIE %d as requested\n", VAR_0->sie_num);
  break;

 default:
  FUNC_2(FUNC_4(VAR_0),
   "Unsupported configuration: 0x%x for SIE %d\n",
   VAR_0->mode, VAR_0->sie_num);
  break;
 }
}
