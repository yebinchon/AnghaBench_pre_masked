
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct isci_port {int active_phy_mask; int hang_detect_users; TYPE_2__** phy_table; } ;
struct TYPE_4__ {TYPE_1__* link_layer_registers; } ;
struct TYPE_3__ {int link_layer_hang_detection_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct isci_port *VAR_1, u32 VAR_2)
{
 int VAR_3;
 u32 VAR_4 = VAR_1->active_phy_mask;

 if (VAR_2)
  ++VAR_1->hang_detect_users;
 else if (VAR_1->hang_detect_users > 1)
  --VAR_1->hang_detect_users;
 else
  VAR_1->hang_detect_users = 0;

 if (VAR_2 || (VAR_1->hang_detect_users == 0)) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if ((VAR_4 >> VAR_3) & 1) {
    FUNC_0(VAR_2,
           &VAR_1->phy_table[VAR_3]
       ->link_layer_registers
       ->link_layer_hang_detection_timeout);
   }
  }
 }
}
