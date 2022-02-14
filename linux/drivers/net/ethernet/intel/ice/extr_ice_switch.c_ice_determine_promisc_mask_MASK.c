
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int * mac_addr; } ;
struct TYPE_4__ {scalar_t__ vlan_id; } ;
struct TYPE_6__ {TYPE_2__ mac; TYPE_1__ mac_vlan; } ;
struct ice_fltr_info {scalar_t__ flag; TYPE_3__ l_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static u8 FUNC_3(struct ice_fltr_info *VAR_9)
{
 u16 VAR_10 = VAR_9->l_data.mac_vlan.vlan_id;
 u8 *VAR_11 = VAR_9->l_data.mac.mac_addr;
 bool VAR_12 = 0;
 u8 VAR_13 = 0;

 if (VAR_9->flag == VAR_0)
  VAR_12 = 1;

 if (FUNC_0(VAR_11))
  VAR_13 |= VAR_12 ?
   VAR_2 : VAR_1;
 else if (FUNC_1(VAR_11))
  VAR_13 |= VAR_12 ?
   VAR_4 : VAR_3;
 else if (FUNC_2(VAR_11))
  VAR_13 |= VAR_12 ?
   VAR_6 : VAR_5;
 if (VAR_10)
  VAR_13 |= VAR_12 ?
   VAR_8 : VAR_7;

 return VAR_13;
}
