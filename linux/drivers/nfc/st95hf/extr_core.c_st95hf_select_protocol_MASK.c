
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st95hf_context {int current_rf_tech; TYPE_1__* nfcdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct st95hf_context*) ;
 int FUNC_2 (struct st95hf_context*) ;
 int FUNC_3 (struct st95hf_context*,int ,int ,int *,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct st95hf_context *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct device *VAR_7;

 VAR_7 = &VAR_4->nfcdev->dev;

 switch (VAR_5) {
 case 130:
  VAR_4->current_rf_tech = 130;
  VAR_6 = FUNC_3(VAR_4,
           VAR_0,
           0,
           ((void*)0),
           1);
  if (VAR_6) {
   FUNC_0(VAR_7, "protocol sel, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }


  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_7, "type a secondary config, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }
  break;
 case 129:
  VAR_4->current_rf_tech = 129;
  VAR_6 = FUNC_3(VAR_4,
           VAR_1,
           0,
           ((void*)0),
           1);
  if (VAR_6) {
   FUNC_0(VAR_7, "protocol sel send, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }





  FUNC_4(50000, 60000);


  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_7, "type b secondary config, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }
  break;
 case 128:
  VAR_4->current_rf_tech = 128;
  VAR_6 = FUNC_3(VAR_4,
           VAR_2,
           0,
           ((void*)0),
           1);
  if (VAR_6) {
   FUNC_0(VAR_7, "protocol sel send, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
