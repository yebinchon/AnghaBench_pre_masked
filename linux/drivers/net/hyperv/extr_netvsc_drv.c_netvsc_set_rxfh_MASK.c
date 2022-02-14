
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rndis_device {scalar_t__* rx_table; scalar_t__* rss_key; } ;
struct netvsc_device {scalar_t__ const num_chn; struct rndis_device* extension; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 struct net_device_context* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rndis_device*,scalar_t__ const*) ;
 struct netvsc_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, const u32 *VAR_7,
      const u8 *VAR_8, const u8 VAR_9)
{
 struct net_device_context *VAR_10 = FUNC_0(VAR_6);
 struct netvsc_device *VAR_11 = FUNC_2(VAR_10->nvdev);
 struct rndis_device *VAR_12;
 int VAR_13;

 if (!VAR_11)
  return -VAR_1;

 if (VAR_9 != VAR_3 && VAR_9 != VAR_4)
  return -VAR_2;

 VAR_12 = VAR_11->extension;
 if (VAR_7) {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
   if (VAR_7[VAR_13] >= VAR_11->num_chn)
    return -VAR_0;

  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
   VAR_12->rx_table[VAR_13] = VAR_7[VAR_13];
 }

 if (!VAR_8) {
  if (!VAR_7)
   return 0;

  VAR_8 = VAR_12->rss_key;
 }

 return FUNC_1(VAR_12, VAR_8);
}
