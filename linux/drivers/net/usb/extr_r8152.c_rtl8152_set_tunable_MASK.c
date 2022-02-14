
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8152 {int napi; int rx_copybreak; } ;
struct net_device {int dummy; } ;
struct ethtool_tunable {int id; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8152* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct r8152*,int ,struct net_device*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
          const struct ethtool_tunable *VAR_5,
          const void *VAR_6)
{
 struct r8152 *VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8;

 switch (VAR_5->id) {
 case 128:
  VAR_8 = *(u32 *)VAR_6;
  if (VAR_8 < VAR_2) {
   FUNC_3(VAR_7, VAR_3, VAR_4,
      "Invalid rx copy break value\n");
   return -VAR_0;
  }

  if (VAR_7->rx_copybreak != VAR_8) {
   FUNC_0(&VAR_7->napi);
   VAR_7->rx_copybreak = VAR_8;
   FUNC_1(&VAR_7->napi);
  }
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
