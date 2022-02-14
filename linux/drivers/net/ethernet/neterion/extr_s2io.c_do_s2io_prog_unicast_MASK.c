
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct config_param {int max_mac_addr; } ;
struct s2io_nic {TYPE_1__* def_mac_addr; struct config_param config; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int* mac_addr; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct s2io_nic*,int,int) ;
 int FUNC_2 (struct s2io_nic*,int,int) ;
 int FUNC_3 (struct s2io_nic*,int) ;
 struct s2io_nic* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, u8 *VAR_7)
{
 struct s2io_nic *VAR_8 = FUNC_4(VAR_6);
 register u64 VAR_9 = 0, VAR_10 = 0;
 int VAR_11;
 u64 VAR_12;
 struct config_param *VAR_13 = &VAR_8->config;






 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_9 <<= 8;
  VAR_9 |= VAR_7[VAR_11];
  VAR_10 <<= 8;
  VAR_10 |= VAR_8->def_mac_addr[0].mac_addr[VAR_11];
 }


 if (VAR_9 == VAR_10)
  return VAR_5;


 for (VAR_11 = 1; VAR_11 < VAR_13->max_mac_addr; VAR_11++) {
  VAR_12 = FUNC_3(VAR_8, VAR_11);
  if (VAR_12 == VAR_4)
   break;

  if (VAR_12 == VAR_9) {
   FUNC_0(VAR_3,
      "MAC addr:0x%llx already present in CAM\n",
      (unsigned long long)VAR_9);
   return VAR_5;
  }
 }
 if (VAR_11 == VAR_13->max_mac_addr) {
  FUNC_0(VAR_0, "CAM full no space left for Unicast MAC\n");
  return VAR_2;
 }

 FUNC_2(VAR_8, VAR_11, VAR_9);

 return FUNC_1(VAR_8, VAR_9, VAR_11);
}
