
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct be_rx_obj {scalar_t__ rss_id; } ;
struct TYPE_2__ {int* rss_queue; scalar_t__* rsstable; scalar_t__* rss_hkey; int rss_flags; } ;
struct be_adapter {TYPE_1__ rss_info; struct be_rx_obj* rx_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct be_adapter*,scalar_t__*,int ,int,scalar_t__ const*) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,int) ;
 struct be_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7, const u32 *VAR_8,
         const u8 *VAR_9, const u8 VAR_10)
{
 int VAR_11 = 0, VAR_12, VAR_13;
 struct be_adapter *VAR_14 = FUNC_2(VAR_7);
 u8 VAR_15[VAR_6];


 if (VAR_10 != VAR_2 && VAR_10 != VAR_3)
  return -VAR_1;

 if (VAR_8) {
  struct be_rx_obj *VAR_16;

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_13 = VAR_8[VAR_12];
   VAR_16 = &VAR_14->rx_obj[VAR_13];
   VAR_15[VAR_12] = VAR_16->rss_id;
   VAR_14->rss_info.rss_queue[VAR_12] = VAR_13;
  }
 } else {
  FUNC_1(VAR_15, VAR_14->rss_info.rsstable,
         VAR_6);
 }

 if (!VAR_9)
  VAR_9 = VAR_14->rss_info.rss_hkey;

 VAR_11 = FUNC_0(VAR_14, VAR_15,
          VAR_14->rss_info.rss_flags,
          VAR_6, VAR_9);
 if (VAR_11) {
  VAR_14->rss_info.rss_flags = VAR_4;
  return -VAR_0;
 }
 FUNC_1(VAR_14->rss_info.rss_hkey, VAR_9, VAR_5);
 FUNC_1(VAR_14->rss_info.rsstable, VAR_15,
        VAR_6);
 return 0;
}
