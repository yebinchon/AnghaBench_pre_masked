
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qeth_cmd_buffer {int data; int finalize; int length; } ;
struct TYPE_2__ {int ulp_connection_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (struct qeth_cmd_buffer*) ;
 int FUNC_7 (int ,int *,int) ;
 int VAR_4 ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;

void FUNC_10(struct qeth_card *VAR_5, struct qeth_cmd_buffer *VAR_6,
     u16 VAR_7)
{
 u8 VAR_8 = FUNC_8(VAR_5);
 u16 VAR_9 = VAR_6->length;

 FUNC_9(FUNC_6(VAR_6), VAR_0, 0, VAR_9,
         VAR_6->data);
 VAR_6->finalize = VAR_4;

 FUNC_7(VAR_6->data, VAR_1, VAR_2);
 FUNC_7(FUNC_5(VAR_6->data), &VAR_9, 2);
 FUNC_7(FUNC_1(VAR_6->data), &VAR_8, 1);
 FUNC_7(FUNC_2(VAR_6->data), &VAR_7, 2);
 FUNC_7(FUNC_3(VAR_6->data), &VAR_7, 2);
 FUNC_7(FUNC_0(VAR_6->data),
        &VAR_5->token.ulp_connection_r, VAR_3);
 FUNC_7(FUNC_4(VAR_6->data), &VAR_7, 2);
}
