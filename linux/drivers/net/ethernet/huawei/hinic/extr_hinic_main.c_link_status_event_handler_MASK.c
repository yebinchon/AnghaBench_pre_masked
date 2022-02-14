
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_port_link_status {scalar_t__ link; scalar_t__ status; } ;
struct hinic_dev {int flags; int netdev; int mgmt_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hinic_dev*,int ,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_4, void *VAR_5, u16 VAR_6,
          void *VAR_7, u16 *VAR_8)
{
 struct hinic_port_link_status *VAR_9, *VAR_10;
 struct hinic_dev *VAR_11 = VAR_4;

 VAR_9 = VAR_5;

 if (VAR_9->link == VAR_1) {
  FUNC_0(&VAR_11->mgmt_lock);

  VAR_11->flags |= VAR_2;

  if ((VAR_11->flags & (VAR_2 | VAR_0)) ==
      (VAR_2 | VAR_0)) {
   FUNC_2(VAR_11->netdev);
   FUNC_5(VAR_11->netdev);
  }

  FUNC_6(&VAR_11->mgmt_lock);

  FUNC_3(VAR_11, VAR_3, VAR_11->netdev, "HINIC_Link is UP\n");
 } else {
  FUNC_0(&VAR_11->mgmt_lock);

  VAR_11->flags &= ~VAR_2;

  FUNC_1(VAR_11->netdev);
  FUNC_4(VAR_11->netdev);

  FUNC_6(&VAR_11->mgmt_lock);

  FUNC_3(VAR_11, VAR_3, VAR_11->netdev, "HINIC_Link is DOWN\n");
 }

 VAR_10 = VAR_7;
 VAR_10->status = 0;

 *VAR_8 = sizeof(*VAR_10);
}
