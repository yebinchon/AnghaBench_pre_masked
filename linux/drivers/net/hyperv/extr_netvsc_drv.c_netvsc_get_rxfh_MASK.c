
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rndis_device {int rss_key; int * rx_table; } ;
struct netvsc_device {struct rndis_device* extension; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 struct netvsc_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, u32 *VAR_5, u8 *VAR_6,
      u8 *VAR_7)
{
 struct net_device_context *VAR_8 = FUNC_1(VAR_4);
 struct netvsc_device *VAR_9 = FUNC_2(VAR_8->nvdev);
 struct rndis_device *VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_0;

 if (VAR_7)
  *VAR_7 = VAR_1;

 VAR_10 = VAR_9->extension;
 if (VAR_5) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
   VAR_5[VAR_11] = VAR_10->rx_table[VAR_11];
 }

 if (VAR_6)
  FUNC_0(VAR_6, VAR_10->rss_key, VAR_3);

 return 0;
}
