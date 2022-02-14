
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_vlan_mac_obj {int head_exe_request; int raw; int wait; int complete; int restore; int delete_all; struct bnx2x_credit_pool_obj* vlans_pool; struct bnx2x_credit_pool_obj* macs_pool; scalar_t__ saved_ramrod_flags; scalar_t__ head_reader; int head; } ;
struct bnx2x_credit_pool_obj {int dummy; } ;
typedef int dma_addr_t ;
typedef int bnx2x_obj_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ,void*,int ,int,unsigned long*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x_vlan_mac_obj *VAR_4,
 u8 VAR_5, u32 VAR_6, u8 VAR_7, void *VAR_8, dma_addr_t VAR_9,
 int VAR_10, unsigned long *VAR_11, bnx2x_obj_type VAR_12,
 struct bnx2x_credit_pool_obj *VAR_13,
 struct bnx2x_credit_pool_obj *VAR_14)
{
 FUNC_0(&VAR_4->head);
 VAR_4->head_reader = 0;
 VAR_4->head_exe_request = 0;
 VAR_4->saved_ramrod_flags = 0;

 VAR_4->macs_pool = VAR_13;
 VAR_4->vlans_pool = VAR_14;

 VAR_4->delete_all = VAR_1;
 VAR_4->restore = VAR_2;
 VAR_4->complete = VAR_0;
 VAR_4->wait = VAR_3;

 FUNC_1(&VAR_4->raw, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12);
}
