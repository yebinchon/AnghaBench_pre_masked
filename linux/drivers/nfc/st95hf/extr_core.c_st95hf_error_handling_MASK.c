
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st95hf_context {int current_rf_tech; int sendrcv_trflag; TYPE_1__* nfcdev; } ;
struct sk_buff {int* data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct st95hf_context *VAR_7,
     struct sk_buff *VAR_8,
     int VAR_9)
{
 int VAR_10 = 0;
 unsigned char VAR_11;
 struct device *VAR_12 = &VAR_7->nfcdev->dev;


 if (VAR_8->data[0] & VAR_2) {
  if (VAR_8->data[0] == VAR_5)
   VAR_10 = -VAR_1;
  else
   VAR_10 = -VAR_0;
  return VAR_10;
 }


 switch (VAR_7->current_rf_tech) {
 case 130:
  if (VAR_7->sendrcv_trflag == VAR_6) {
   VAR_11 = VAR_8->data[VAR_9 - 3];
   if (VAR_11 & VAR_3) {

    FUNC_0(VAR_12, "CRC error, byte received = 0x%x\n",
     VAR_11);
    VAR_10 = -VAR_0;
   }
  }
  break;
 case 129:
 case 128:
  VAR_11 = VAR_8->data[VAR_9 - 1];
  if (VAR_11 & VAR_4) {

   FUNC_0(VAR_12, "CRC error, byte received = 0x%x\n",
    VAR_11);
   VAR_10 = -VAR_0;
  }
  break;
 }

 return VAR_10;
}
