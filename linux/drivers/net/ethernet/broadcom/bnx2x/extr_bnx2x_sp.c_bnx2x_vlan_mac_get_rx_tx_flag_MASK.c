
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x_raw_obj {scalar_t__ obj_type; } ;
struct bnx2x_vlan_mac_obj {struct bnx2x_raw_obj raw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline u8 FUNC_0(struct bnx2x_vlan_mac_obj *VAR_5)
{
 struct bnx2x_raw_obj *VAR_6 = &VAR_5->raw;
 u8 VAR_7 = 0;

 if ((VAR_6->obj_type == VAR_2) ||
     (VAR_6->obj_type == VAR_1))
  VAR_7 |= VAR_4;

 if ((VAR_6->obj_type == VAR_0) ||
     (VAR_6->obj_type == VAR_1))
  VAR_7 |= VAR_3;

 return VAR_7;
}
