
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_4__ {int cula; scalar_t__ unit_addr2; } ;
struct TYPE_3__ {scalar_t__ ulp_filter_r; scalar_t__ ulp_connection_w; scalar_t__ cm_connection_r; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__ token; } ;
struct ccw_dev_id {scalar_t__ devno; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,struct ccw_dev_id*) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 struct qeth_cmd_buffer* FUNC_9 (struct qeth_card*,int ,int ) ;
 int FUNC_10 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct qeth_card *VAR_5)
{
 __u16 VAR_6;
 struct qeth_cmd_buffer *VAR_7;
 struct ccw_dev_id VAR_8;

 FUNC_1(VAR_5, 2, "ulpsetup");

 VAR_7 = FUNC_9(VAR_5, VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 FUNC_8(FUNC_4(VAR_7->data),
        &VAR_5->token.cm_connection_r, VAR_1);
 FUNC_8(FUNC_2(VAR_7->data),
        &VAR_5->token.ulp_connection_w, VAR_1);
 FUNC_8(FUNC_5(VAR_7->data),
        &VAR_5->token.ulp_filter_r, VAR_1);

 FUNC_7(FUNC_0(VAR_5), &VAR_8);
 FUNC_8(FUNC_3(VAR_7->data), &VAR_8.devno, 2);
 VAR_6 = (VAR_5->info.cula << 8) + VAR_5->info.unit_addr2;
 FUNC_8(FUNC_6(VAR_7->data), &VAR_6, 2);
 return FUNC_10(VAR_5, VAR_7, VAR_4, ((void*)0));
}
