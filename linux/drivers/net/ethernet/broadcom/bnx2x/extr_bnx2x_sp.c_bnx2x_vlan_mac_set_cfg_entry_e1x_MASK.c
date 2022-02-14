
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mac_configuration_entry {int flags; int lsb_mac_addr; int middle_mac_addr; int msb_mac_addr; int vlan_id; int pf_id; int clients_bit_vector; } ;
struct bnx2x_raw_obj {int cl_id; int func_id; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct bnx2x *VAR_4,
 struct bnx2x_vlan_mac_obj *VAR_5, bool VAR_6, int VAR_7, u8 *VAR_8,
 u16 VAR_9, struct mac_configuration_entry *VAR_10)
{
 struct bnx2x_raw_obj *VAR_11 = &VAR_5->raw;
 u32 VAR_12 = (1 << VAR_11->cl_id);

 VAR_10->clients_bit_vector = FUNC_3(VAR_12);
 VAR_10->pf_id = VAR_11->func_id;
 VAR_10->vlan_id = FUNC_2(VAR_9);

 if (VAR_6) {
  FUNC_0(VAR_10->flags, VAR_0,
    VAR_3);
  FUNC_0(VAR_10->flags,
    VAR_1, VAR_7);


  FUNC_1(&VAR_10->msb_mac_addr,
          &VAR_10->middle_mac_addr,
          &VAR_10->lsb_mac_addr, VAR_8);
 } else
  FUNC_0(VAR_10->flags, VAR_0,
    VAR_2);
}
