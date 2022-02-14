
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hinic_dev {int flags; int rss_hash_engine; int rss_tmpl_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int const*,scalar_t__ const*) ;
 int FUNC_1 (struct hinic_dev*,int ,int ) ;
 struct hinic_dev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_8, const u32 *VAR_9,
     const u8 *VAR_10, const u8 VAR_11)
{
 struct hinic_dev *VAR_12 = FUNC_2(VAR_8);
 int VAR_13 = 0;

 if (!(VAR_12->flags & VAR_5))
  return -VAR_1;

 if (VAR_11 != VAR_2) {
  if (VAR_11 != VAR_3 && VAR_11 != VAR_4)
   return -VAR_1;

  VAR_12->rss_hash_engine = (VAR_11 == VAR_4) ?
   VAR_7 :
   VAR_6;
  VAR_13 = FUNC_1
   (VAR_12, VAR_12->rss_tmpl_idx,
   VAR_12->rss_hash_engine);
  if (VAR_13)
   return -VAR_0;
 }

 VAR_13 = FUNC_0(VAR_8, VAR_9, VAR_10);

 return VAR_13;
}
