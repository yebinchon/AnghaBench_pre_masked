
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int vf_valid; } ;
struct TYPE_4__ {TYPE_1__ p_func; void* state; } ;
struct hc_status_block_data_e2 {TYPE_2__ common; } ;
struct hc_status_block_data_e1x {TYPE_2__ common; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct bnx2x*,int,int*,int) ;
 int FUNC_5 (struct hc_status_block_data_e2*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_4, int VAR_5)
{
 u32 *VAR_6;
 u32 VAR_7 = 0;
 struct hc_status_block_data_e2 VAR_8;
 struct hc_status_block_data_e1x VAR_9;


 if (!FUNC_0(VAR_4)) {
  FUNC_5(&VAR_8, 0, sizeof(struct hc_status_block_data_e2));
  VAR_8 = VAR_3;
  VAR_8 = 0;
  VAR_6 = (u32 *)&VAR_8;
  VAR_7 = sizeof(struct hc_status_block_data_e2)/sizeof(u32);
 } else {
  FUNC_5(&VAR_9, 0,
         sizeof(struct hc_status_block_data_e1x));
  VAR_9.common.state = VAR_3;
  VAR_9.common.p_func.vf_valid = 0;
  VAR_6 = (u32 *)&VAR_9;
  VAR_7 = sizeof(struct hc_status_block_data_e1x)/sizeof(u32);
 }
 FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_4, VAR_0 +
   FUNC_1(VAR_5), 0,
   VAR_1);
 FUNC_3(VAR_4, VAR_0 +
   FUNC_2(VAR_5), 0,
   VAR_2);
}
