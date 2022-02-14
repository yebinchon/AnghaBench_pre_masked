
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * entry; } ;
struct TYPE_8__ {TYPE_1__ addr_filter_set; int cmd_type; } ;
struct TYPE_7__ {int uc_count; int * mc_table; scalar_t__ mc_count; int * uc_table; TYPE_3__* cmd_req_virt; } ;
typedef int PI_LAN_ADDR ;
typedef TYPE_2__ DFX_board_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(DFX_board_t *VAR_6)
 {
 int VAR_7;
 PI_LAN_ADDR *VAR_8;
 FUNC_2(VAR_6->cmd_req_virt, 0, VAR_5);
 VAR_6->cmd_req_virt->cmd_type = VAR_4;
 VAR_8 = &VAR_6->cmd_req_virt->addr_filter_set.entry[0];



 for (VAR_7=0; VAR_7 < (int)VAR_6->uc_count; VAR_7++)
  {
  if (VAR_7 < VAR_3)
   {
   FUNC_1(VAR_8, &VAR_6->uc_table[VAR_7*VAR_2], VAR_2);
   VAR_8++;
   }
  }



 for (VAR_7=0; VAR_7 < (int)VAR_6->mc_count; VAR_7++)
  {
  if ((VAR_7 + VAR_6->uc_count) < VAR_3)
   {
   FUNC_1(VAR_8, &VAR_6->mc_table[VAR_7*VAR_2], VAR_2);
   VAR_8++;
   }
  }



 if (FUNC_0(VAR_6) != VAR_1)
  return VAR_0;
 return VAR_1;
 }
