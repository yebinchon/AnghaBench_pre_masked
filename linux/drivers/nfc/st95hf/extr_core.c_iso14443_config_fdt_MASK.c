
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* spidev; } ;
struct st95hf_context {int fwi; struct nfc_digital_dev* ddev; TYPE_2__ spicontext; } ;
struct param_list {int param_offset; int new_param_val; } ;
struct nfc_digital_dev {int curr_protocol; } ;
struct device {int dummy; } ;
struct TYPE_6__ {unsigned char* cmd_params; } ;
struct TYPE_4__ {struct device dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct st95hf_context*) ;
 int FUNC_2 (struct st95hf_context*) ;
 int FUNC_3 (struct st95hf_context*,size_t,int,struct param_list*,int) ;

__attribute__((used)) static int FUNC_4(struct st95hf_context *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct device *VAR_7 = &VAR_4->spicontext.spidev->dev;
 struct nfc_digital_dev *VAR_8 = VAR_4->ddev;
 unsigned char VAR_9;
 struct param_list VAR_10[2];

 VAR_9 = VAR_3[VAR_1].cmd_params[2];

 if (VAR_8->curr_protocol == 129 &&
     VAR_4->fwi < 4)
  VAR_4->fwi = 4;

 VAR_10[0].param_offset = 2;
 if (VAR_8->curr_protocol == 129)
  VAR_10[0].new_param_val = VAR_4->fwi;
 else if (VAR_8->curr_protocol == 128)
  VAR_10[0].new_param_val = VAR_9;

 VAR_10[1].param_offset = 3;
 VAR_10[1].new_param_val = VAR_5;

 switch (VAR_8->curr_protocol) {
 case 129:
  VAR_6 = FUNC_3(VAR_4,
           VAR_0,
           2,
           VAR_10,
           1);
  if (VAR_6) {
   FUNC_0(VAR_7, "WTX type a sel proto, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }


  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_7, "WTX type a second. config, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_4,
           VAR_1,
           2,
           VAR_10,
           1);
  if (VAR_6) {
   FUNC_0(VAR_7, "WTX type b sel proto, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }


  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_7, "WTX type b second. config, err = 0x%x\n",
    VAR_6);
   return VAR_6;
  }
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
