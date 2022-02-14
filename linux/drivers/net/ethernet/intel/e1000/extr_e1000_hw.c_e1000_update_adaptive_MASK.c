
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int collision_delta; int ifs_ratio; int tx_packet_delta; int in_ifs_mode; scalar_t__ current_ifs_val; scalar_t__ ifs_max_val; scalar_t__ ifs_min_val; scalar_t__ ifs_step_size; scalar_t__ adaptive_ifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct e1000_hw *VAR_2)
{
 if (VAR_2->adaptive_ifs) {
  if ((VAR_2->collision_delta * VAR_2->ifs_ratio) > VAR_2->tx_packet_delta) {
   if (VAR_2->tx_packet_delta > VAR_1) {
    VAR_2->in_ifs_mode = 1;
    if (VAR_2->current_ifs_val < VAR_2->ifs_max_val) {
     if (VAR_2->current_ifs_val == 0)
      VAR_2->current_ifs_val =
          VAR_2->ifs_min_val;
     else
      VAR_2->current_ifs_val +=
          VAR_2->ifs_step_size;
     FUNC_1(VAR_0, VAR_2->current_ifs_val);
    }
   }
  } else {
   if (VAR_2->in_ifs_mode &&
       (VAR_2->tx_packet_delta <= VAR_1)) {
    VAR_2->current_ifs_val = 0;
    VAR_2->in_ifs_mode = 0;
    FUNC_1(VAR_0, 0);
   }
  }
 } else {
  FUNC_0("Not in Adaptive IFS mode!\n");
 }
}
