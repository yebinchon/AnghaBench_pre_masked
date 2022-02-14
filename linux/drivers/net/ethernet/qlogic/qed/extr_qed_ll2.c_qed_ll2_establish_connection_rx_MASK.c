
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ai_err_packet_too_big; int ai_err_no_buf; } ;
struct TYPE_3__ {int set_prod_addr; } ;
struct qed_ll2_info {TYPE_2__ input; TYPE_1__ rx_queue; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_ll2_error_handle { ____Placeholder_qed_ll2_error_handle } qed_ll2_error_handle ;
typedef enum core_error_handle { ____Placeholder_core_error_handle } core_error_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct qed_ll2_info*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ll2_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_2,
        struct qed_ll2_info *VAR_3)
{
 enum qed_ll2_error_handle VAR_4;
 enum core_error_handle VAR_5;
 u8 VAR_6 = 0;

 if (!FUNC_1(VAR_3))
  return 0;

 FUNC_0(VAR_3->rx_queue.set_prod_addr, 0x0);
 VAR_4 = VAR_3->input.ai_err_packet_too_big;
 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_6,
    VAR_1, VAR_5);
 VAR_4 = VAR_3->input.ai_err_no_buf;
 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_6, VAR_0, VAR_5);

 return FUNC_4(VAR_2, VAR_3, VAR_6);
}
