
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st95_digital_cmd_complete_arg {int rats; } ;
struct st95hf_context {int fwi; int current_rf_tech; int sendrcv_trflag; struct st95_digital_cmd_complete_arg complete_cb_arg; TYPE_1__* nfcdev; struct nfc_digital_dev* ddev; } ;
struct sk_buff {int len; int* data; } ;
struct nfc_digital_dev {scalar_t__ curr_protocol; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned char* cmd_params; } ;
struct TYPE_3__ {struct device dev; } ;


 size_t VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct st95hf_context*,unsigned char) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct st95hf_context *VAR_7,
       struct sk_buff *VAR_8,
       int VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 unsigned char VAR_12;
 struct nfc_digital_dev *VAR_13 = VAR_7->ddev;
 struct device *VAR_14 = &VAR_7->nfcdev->dev;
 struct st95_digital_cmd_complete_arg *VAR_15;

 VAR_15 = &VAR_7->complete_cb_arg;


 FUNC_3(VAR_8, VAR_9);


 FUNC_2(VAR_8, 2);

 VAR_11 = VAR_8->len;


 if (VAR_13->curr_protocol == VAR_1 && VAR_15->rats &&
     (VAR_8->data[1] & VAR_3)) {
  if (VAR_8->data[1] & VAR_2)
   VAR_7->fwi =
    (VAR_8->data[3] & VAR_4) >> 4;
  else
   VAR_7->fwi =
    (VAR_8->data[2] & VAR_4) >> 4;

  VAR_12 = VAR_6[VAR_0].cmd_params[3];

  VAR_10 = FUNC_1(VAR_7, VAR_12);
  if (VAR_10) {
   FUNC_0(VAR_14, "error in config_fdt to handle fwi of ATS, error=%d\n",
    VAR_10);
   return VAR_10;
  }
 }
 VAR_15->rats = 0;


 switch (VAR_7->current_rf_tech) {
 case 130:
  if (VAR_7->sendrcv_trflag == VAR_5)
   FUNC_4(VAR_8, (VAR_11 - 5));
  else
   FUNC_4(VAR_8, (VAR_11 - 3));
  break;
 case 129:
 case 128:
  FUNC_4(VAR_8, (VAR_11 - 3));
  break;
 }

 return VAR_10;
}
