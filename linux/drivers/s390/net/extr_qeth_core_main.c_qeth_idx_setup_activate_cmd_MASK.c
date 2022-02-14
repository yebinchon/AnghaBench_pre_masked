
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qeth_cmd_buffer {int data; int finalize; int length; } ;
struct TYPE_6__ {int cula; int unit_addr2; int func_level; } ;
struct TYPE_5__ {int issuer_rm_w; } ;
struct qeth_card {TYPE_3__ info; TYPE_2__ token; TYPE_1__* dev; } ;
struct ccw_dev_id {int devno; } ;
struct ccw1 {int dummy; } ;
struct TYPE_4__ {scalar_t__ dev_port; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 struct ccw1* FUNC_6 (struct qeth_cmd_buffer*) ;
 int FUNC_7 (int ,struct ccw_dev_id*) ;
 int FUNC_8 (int ,int*,int) ;
 int VAR_5 ;
 int FUNC_9 (struct ccw1*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct qeth_card *VAR_6,
     struct qeth_cmd_buffer *VAR_7)
{
 u16 VAR_8 = (VAR_6->info.cula << 8) + VAR_6->info.unit_addr2;
 u8 VAR_9 = ((u8)VAR_6->dev->dev_port) | 0x80;
 struct ccw1 *VAR_10 = FUNC_6(VAR_7);
 struct ccw_dev_id VAR_11;

 FUNC_9(&VAR_10[0], VAR_1, VAR_2, VAR_3,
         VAR_7->data);
 FUNC_9(&VAR_10[1], VAR_0, 0, VAR_7->length, VAR_7->data);
 FUNC_7(FUNC_0(VAR_6), &VAR_11);
 VAR_7->finalize = VAR_5;

 FUNC_8(FUNC_3(VAR_7->data), &VAR_9, 1);
 FUNC_8(FUNC_2(VAR_7->data),
        &VAR_6->token.issuer_rm_w, VAR_4);
 FUNC_8(FUNC_1(VAR_7->data),
        &VAR_6->info.func_level, 2);
 FUNC_8(FUNC_4(VAR_7->data), &VAR_11.devno, 2);
 FUNC_8(FUNC_5(VAR_7->data), &VAR_8, 2);
}
