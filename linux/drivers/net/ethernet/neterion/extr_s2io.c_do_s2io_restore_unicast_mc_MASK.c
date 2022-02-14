
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_param {int max_mac_addr; int mc_start_offset; int max_mc_addr; } ;
struct s2io_nic {TYPE_1__* def_mac_addr; int dev; struct config_param config; } ;
struct TYPE_2__ {int mac_addr; } ;


 int FUNC_0 (struct s2io_nic*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s2io_nic *VAR_0)
{
 int VAR_1;
 struct config_param *VAR_2 = &VAR_0->config;

 for (VAR_1 = 0; VAR_1 < VAR_2->max_mac_addr; VAR_1++)
  FUNC_1(VAR_0->dev,
         VAR_0->def_mac_addr[VAR_1].mac_addr);


 for (VAR_1 = VAR_2->mc_start_offset;
      VAR_1 < VAR_2->max_mc_addr; VAR_1++)
  FUNC_0(VAR_0, VAR_0->def_mac_addr[VAR_1].mac_addr);
}
