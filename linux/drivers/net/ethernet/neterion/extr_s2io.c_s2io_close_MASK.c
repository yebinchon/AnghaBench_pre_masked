
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct config_param {int max_mc_addr; } ;
struct s2io_nic {struct config_param config; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct s2io_nic*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct s2io_nic*,int) ;
 int FUNC_2 (struct s2io_nic*) ;
 struct s2io_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct s2io_nic*) ;
 int FUNC_5 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct s2io_nic *VAR_2 = FUNC_3(VAR_1);
 struct config_param *VAR_3 = &VAR_2->config;
 u64 VAR_4;
 int VAR_5;




 if (!FUNC_2(VAR_2))
  return 0;

 FUNC_5(VAR_2);

 for (VAR_5 = 1; VAR_5 < VAR_3->max_mc_addr; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, VAR_5);
  if (VAR_4 != VAR_0)
   FUNC_0(VAR_2, VAR_4);
 }

 FUNC_4(VAR_2);

 return 0;
}
