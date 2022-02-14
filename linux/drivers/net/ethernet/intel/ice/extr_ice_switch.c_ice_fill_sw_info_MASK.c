
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_hw {scalar_t__ evb_veb; } ;
struct TYPE_3__ {int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ice_fltr_info {int lb_en; int lan_en; int flag; scalar_t__ fltr_act; scalar_t__ lkup_type; TYPE_2__ l_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ice_hw *VAR_13, struct ice_fltr_info *VAR_14)
{
 VAR_14->lb_en = 0;
 VAR_14->lan_en = 0;
 if ((VAR_14->flag & VAR_0) &&
     (VAR_14->fltr_act == VAR_3 ||
      VAR_14->fltr_act == VAR_4 ||
      VAR_14->fltr_act == VAR_1 ||
      VAR_14->fltr_act == VAR_2)) {



  if (VAR_14->lkup_type != VAR_12)
   VAR_14->lb_en = 1;
  if (VAR_13->evb_veb) {
   if (VAR_14->lkup_type == VAR_6 ||
       VAR_14->lkup_type == VAR_10 ||
       VAR_14->lkup_type == VAR_7 ||
       VAR_14->lkup_type == VAR_11 ||
       VAR_14->lkup_type == VAR_5 ||
       VAR_14->lkup_type == VAR_12 ||
       (VAR_14->lkup_type == VAR_8 &&
        !FUNC_0(VAR_14->l_data.mac.mac_addr)) ||
       (VAR_14->lkup_type == VAR_9 &&
        !FUNC_0(VAR_14->l_data.mac.mac_addr)))
    VAR_14->lan_en = 1;
  } else {
   VAR_14->lan_en = 1;
  }
 }
}
