
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st95hf_context {TYPE_1__* nfcdev; struct nfc_digital_dev* ddev; } ;
struct param_list {int param_offset; int new_param_val; } ;
struct nfc_digital_dev {scalar_t__ curr_protocol; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned char* cmd_params; } ;
struct TYPE_3__ {struct device dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct st95hf_context*,unsigned char) ;
 int FUNC_2 (struct st95hf_context*,int ,int,struct param_list*,int) ;

__attribute__((used)) static int FUNC_3(struct st95hf_context *VAR_6,
        bool VAR_7,
        int VAR_8)
{
 int VAR_9 = 0;
 unsigned char VAR_10 = 0;
 struct param_list VAR_11[1];
 struct nfc_digital_dev *VAR_12 = VAR_6->ddev;
 struct device *VAR_13 = &VAR_6->nfcdev->dev;

 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_6, VAR_8 & 0x3f);
  if (VAR_9) {
   FUNC_0(VAR_13, "Config. setting error on WTX req, err = 0x%x\n",
    VAR_9);
   return VAR_9;
  }


  VAR_11[0].param_offset = 1;
  VAR_11[0].new_param_val = VAR_8;

  VAR_9 = FUNC_2(VAR_6,
           VAR_2,
           1,
           VAR_11,
           0);
  if (VAR_9)
   FUNC_0(VAR_13, "WTX response send, err = 0x%x\n", VAR_9);
  return VAR_9;
 }


 if (VAR_12->curr_protocol == VAR_3)
  VAR_10 = VAR_5[VAR_0].cmd_params[3];
 else if (VAR_12->curr_protocol == VAR_4)
  VAR_10 = VAR_5[VAR_1].cmd_params[3];

 VAR_9 = FUNC_1(VAR_6, VAR_10);
 if (VAR_9)
  FUNC_0(VAR_13, "Default config. setting error after WTX processing, err = 0x%x\n",
   VAR_9);

 return VAR_9;
}
