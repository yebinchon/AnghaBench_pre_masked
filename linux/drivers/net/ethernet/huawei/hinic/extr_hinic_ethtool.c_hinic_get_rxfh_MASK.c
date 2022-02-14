
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hinic_dev {int flags; int rss_tmpl_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hinic_dev*,int ,scalar_t__*) ;
 int FUNC_1 (struct hinic_dev*,int ,int *) ;
 int FUNC_2 (struct hinic_dev*,int ,scalar_t__*) ;
 struct hinic_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
     u32 *VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 struct hinic_dev *VAR_9 = FUNC_3(VAR_5);
 u8 VAR_10 = 0;
 int VAR_11 = 0;

 if (!(VAR_9->flags & VAR_4))
  return -VAR_1;

 if (VAR_8) {
  VAR_11 = FUNC_0(VAR_9,
      VAR_9->rss_tmpl_idx,
      &VAR_10);
  if (VAR_11)
   return -VAR_0;

  *VAR_8 = VAR_10 ? VAR_2 : VAR_3;
 }

 if (VAR_6) {
  VAR_11 = FUNC_1(VAR_9,
           VAR_9->rss_tmpl_idx, VAR_6);
  if (VAR_11)
   return -VAR_0;
 }

 if (VAR_7)
  VAR_11 = FUNC_2(VAR_9,
       VAR_9->rss_tmpl_idx, VAR_7);

 return VAR_11;
}
