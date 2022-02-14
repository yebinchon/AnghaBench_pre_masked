
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_init_ramrod_data {int dummy; } ;
struct bnx2x_queue_state_params {struct bnx2x_queue_sp_obj* q_obj; } ;
struct bnx2x_queue_sp_obj {int * cids; int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_queue_state_params*,struct client_init_ramrod_data*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_queue_state_params*,struct client_init_ramrod_data*) ;
 int FUNC_4 (struct bnx2x*,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct client_init_ramrod_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(struct bnx2x *VAR_3,
     struct bnx2x_queue_state_params *VAR_4)
{
 struct bnx2x_queue_sp_obj *VAR_5 = VAR_4->q_obj;
 struct client_init_ramrod_data *VAR_6 =
  (struct client_init_ramrod_data *)VAR_5->rdata;
 dma_addr_t VAR_7 = VAR_5->rdata_mapping;
 int VAR_8 = VAR_2;


 FUNC_5(VAR_6, 0, sizeof(*VAR_6));


 FUNC_2(VAR_3, VAR_4, VAR_6);
 FUNC_3(VAR_3, VAR_4, VAR_6);







 return FUNC_4(VAR_3, VAR_8, VAR_5->cids[VAR_0],
        FUNC_0(VAR_7),
        FUNC_1(VAR_7), VAR_1);
}
