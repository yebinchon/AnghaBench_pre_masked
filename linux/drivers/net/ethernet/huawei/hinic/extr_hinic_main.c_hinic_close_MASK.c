
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hinic_dev {unsigned int flags; int hwdev; int rss_tmpl_idx; int mgmt_lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct hinic_dev*) ;
 int FUNC_2 (struct hinic_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hinic_dev*,int ) ;
 int FUNC_5 (struct hinic_dev*,int ) ;
 int FUNC_6 (struct hinic_dev*) ;
 int FUNC_7 (struct hinic_dev*,int ) ;
 struct hinic_dev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct hinic_dev*,int ,struct net_device*,char*) ;
 int FUNC_11 (struct hinic_dev*,int ,struct net_device*,char*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct hinic_dev*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_5)
{
 struct hinic_dev *VAR_6 = FUNC_8(VAR_5);
 unsigned int VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6->mgmt_lock);

 VAR_7 = VAR_6->flags;
 VAR_6->flags &= ~VAR_1;

 FUNC_9(VAR_5);
 FUNC_12(VAR_5);

 FUNC_14(VAR_6);

 FUNC_13(&VAR_6->mgmt_lock);

 VAR_8 = FUNC_4(VAR_6, VAR_0);
 if (VAR_8) {
  FUNC_10(VAR_6, VAR_4, VAR_5,
     "Failed to set func port state\n");
  VAR_6->flags |= (VAR_7 & VAR_1);
  return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_2);
 if (VAR_8) {
  FUNC_10(VAR_6, VAR_4, VAR_5, "Failed to set port state\n");
  VAR_6->flags |= (VAR_7 & VAR_1);
  return VAR_8;
 }

 if (VAR_6->flags & VAR_3) {
  FUNC_6(VAR_6);
  FUNC_7(VAR_6, VAR_6->rss_tmpl_idx);
 }

 FUNC_1(VAR_6);
 FUNC_2(VAR_6);

 if (VAR_7 & VAR_1)
  FUNC_3(VAR_6->hwdev);

 FUNC_11(VAR_6, VAR_4, VAR_5, "HINIC_INTF is DOWN\n");
 return 0;
}
