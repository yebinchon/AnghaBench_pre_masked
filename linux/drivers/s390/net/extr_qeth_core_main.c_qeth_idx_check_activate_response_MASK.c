
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct qeth_channel {TYPE_1__* ccwdev; } ;
struct qeth_card {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int ) ;



 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_7(struct qeth_card *VAR_3,
         struct qeth_channel *VAR_4,
         struct qeth_cmd_buffer *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_6(VAR_3, VAR_5->data);
 if (VAR_6)
  return VAR_6;

 if (FUNC_4(VAR_5->data))
  return 0;


 FUNC_1(VAR_3, 2, "idxneg%c",
   FUNC_3(VAR_5->data));

 switch (FUNC_3(VAR_5->data)) {
 case 128:
  FUNC_5(&VAR_4->ccwdev->dev,
   "The adapter is used exclusively by another host\n");
  return -VAR_0;
 case 130:
 case 129:
  FUNC_5(&VAR_4->ccwdev->dev,
   "Setting the device online failed because of insufficient authorization\n");
  return -VAR_2;
 default:
  FUNC_2(2, "IDX_ACTIVATE on channel %x: negative reply\n",
     FUNC_0(VAR_4->ccwdev));
  return -VAR_1;
 }
}
