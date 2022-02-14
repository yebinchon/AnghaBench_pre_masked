
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int name; int * dev_addr; } ;
struct TYPE_5__ {int uc_count; scalar_t__ mc_count; int group_prom; int * uc_table; } ;
typedef TYPE_1__ DFX_board_t ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, void *VAR_5)
 {
 struct sockaddr *VAR_6 = (struct sockaddr *)VAR_5;
 DFX_board_t *VAR_7 = FUNC_4(VAR_4);



 FUNC_3(VAR_4->dev_addr, VAR_6->sa_data, VAR_1);
 FUNC_3(&VAR_7->uc_table[0], VAR_6->sa_data, VAR_1);
 VAR_7->uc_count = 1;
 if ((VAR_7->uc_count + VAR_7->mc_count) > VAR_2)
  {
  VAR_7->group_prom = VAR_3;
  VAR_7->mc_count = 0;



  if (FUNC_2(VAR_7) != VAR_0)
   {
   FUNC_0("%s: Could not update adapter filters!\n", VAR_4->name);
   }
  else
   {
   FUNC_0("%s: Adapter filters updated!\n", VAR_4->name);
   }
  }



 if (FUNC_1(VAR_7) != VAR_0)
  {
  FUNC_0("%s: Could not set new MAC address!\n", VAR_4->name);
  }
 else
  {
  FUNC_0("%s: Adapter CAM updated with new MAC address\n", VAR_4->name);
  }
 return 0;
 }
