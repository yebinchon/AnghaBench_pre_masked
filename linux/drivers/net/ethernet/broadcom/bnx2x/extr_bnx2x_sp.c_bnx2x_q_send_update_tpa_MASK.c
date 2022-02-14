
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tpa_update_ramrod_data {int dummy; } ;
struct bnx2x_queue_update_tpa_params {int dummy; } ;
struct TYPE_2__ {struct bnx2x_queue_update_tpa_params update_tpa; } ;
struct bnx2x_queue_state_params {TYPE_1__ params; struct bnx2x_queue_sp_obj* q_obj; } ;
struct bnx2x_queue_sp_obj {int func_id; int * cids; int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_queue_sp_obj*,struct bnx2x_queue_update_tpa_params*,struct tpa_update_ramrod_data*) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct tpa_update_ramrod_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_5(struct bnx2x *VAR_4,
     struct bnx2x_queue_state_params *VAR_5)
{
 struct bnx2x_queue_sp_obj *VAR_6 = VAR_5->q_obj;
 struct tpa_update_ramrod_data *VAR_7 =
  (struct tpa_update_ramrod_data *)VAR_6->rdata;
 dma_addr_t VAR_8 = VAR_6->rdata_mapping;
 struct bnx2x_queue_update_tpa_params *VAR_9 =
  &VAR_5->params.update_tpa;
 u16 VAR_10;


 FUNC_4(VAR_7, 0, sizeof(*VAR_7));


 FUNC_2(VAR_4, VAR_6, VAR_9, VAR_7);





 VAR_10 = VAR_1 |
  ((VAR_6->func_id) << VAR_3);







 return FUNC_3(VAR_4, VAR_2,
        VAR_6->cids[VAR_0],
        FUNC_0(VAR_8),
        FUNC_1(VAR_8), VAR_10);
}
