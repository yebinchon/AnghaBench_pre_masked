
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_mac_info {int collision_delta; int ifs_ratio; int tx_packet_delta; int in_ifs_mode; scalar_t__ current_ifs_val; scalar_t__ ifs_max_val; scalar_t__ ifs_min_val; scalar_t__ ifs_step_size; int adaptive_ifs; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct e1000_hw *VAR_2)
{
 struct e1000_mac_info *VAR_3 = &VAR_2->mac;

 if (!VAR_3->adaptive_ifs) {
  FUNC_0("Not in Adaptive IFS mode!\n");
  return;
 }

 if ((VAR_3->collision_delta * VAR_3->ifs_ratio) > VAR_3->tx_packet_delta) {
  if (VAR_3->tx_packet_delta > VAR_1) {
   VAR_3->in_ifs_mode = 1;
   if (VAR_3->current_ifs_val < VAR_3->ifs_max_val) {
    if (!VAR_3->current_ifs_val)
     VAR_3->current_ifs_val = VAR_3->ifs_min_val;
    else
     VAR_3->current_ifs_val +=
         VAR_3->ifs_step_size;
    FUNC_1(VAR_0, VAR_3->current_ifs_val);
   }
  }
 } else {
  if (VAR_3->in_ifs_mode &&
      (VAR_3->tx_packet_delta <= VAR_1)) {
   VAR_3->current_ifs_val = 0;
   VAR_3->in_ifs_mode = 0;
   FUNC_1(VAR_0, 0);
  }
 }
}
