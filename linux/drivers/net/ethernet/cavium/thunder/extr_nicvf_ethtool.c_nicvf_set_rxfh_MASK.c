
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct nicvf_rss_info {int rss_size; int key; int * ind_tbl; int enable; } ;
struct nicvf {int netdev; struct nicvf_rss_info rss_info; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__ const*,int) ;
 int FUNC_1 (int ,char*) ;
 struct nicvf* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nicvf*) ;
 int FUNC_4 (struct nicvf*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5, const u32 *VAR_6,
     const u8 *VAR_7, const u8 VAR_8)
{
 struct nicvf *VAR_9 = FUNC_2(VAR_5);
 struct nicvf_rss_info *VAR_10 = &VAR_9->rss_info;
 int VAR_11;

 if (VAR_8 != VAR_2 && VAR_8 != VAR_3)
  return -VAR_1;

 if (!VAR_10->enable) {
  FUNC_1(VAR_9->netdev,
      "RSS is disabled, cannot change settings\n");
  return -VAR_0;
 }

 if (VAR_6) {
  for (VAR_11 = 0; VAR_11 < VAR_10->rss_size; VAR_11++)
   VAR_10->ind_tbl[VAR_11] = VAR_6[VAR_11];
 }

 if (VAR_7) {
  FUNC_0(VAR_10->key, VAR_7, VAR_4 * sizeof(u64));
  FUNC_4(VAR_9);
 }

 FUNC_3(VAR_9);
 return 0;
}
