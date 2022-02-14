
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct qeth_cmd_buffer {int data; } ;
struct TYPE_4__ {scalar_t__ ulp_filter_w; scalar_t__ cm_connection_r; } ;
struct qeth_card {TYPE_2__ token; TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ dev_port; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 struct qeth_cmd_buffer* FUNC_6 (struct qeth_card*,int ,int ) ;
 scalar_t__ FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_4 ;
 int FUNC_9 (struct qeth_card*,int ) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_5)
{
 u8 VAR_6 = FUNC_7(VAR_5);
 struct qeth_cmd_buffer *VAR_7;
 u16 VAR_8;
 int VAR_9;

 FUNC_0(VAR_5, 2, "ulpenabl");

 VAR_7 = FUNC_6(VAR_5, VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 *(FUNC_3(VAR_7->data)) = (u8) VAR_5->dev->dev_port;
 FUNC_5(FUNC_4(VAR_7->data), &VAR_6, 1);
 FUNC_5(FUNC_1(VAR_7->data),
        &VAR_5->token.cm_connection_r, VAR_1);
 FUNC_5(FUNC_2(VAR_7->data),
        &VAR_5->token.ulp_filter_w, VAR_1);
 VAR_9 = FUNC_8(VAR_5, VAR_7, VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;
 return FUNC_9(VAR_5, VAR_8);
}
