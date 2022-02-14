
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; } ;
struct hinic_rx_mode_work {int rx_mode; int work; } ;
struct hinic_dev {int workq; struct hinic_rx_mode_work rx_mode_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct hinic_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 struct hinic_dev *VAR_8 = FUNC_0(VAR_7);
 struct hinic_rx_mode_work *VAR_9;
 u32 VAR_10;

 VAR_9 = &VAR_8->rx_mode_work;

 VAR_10 = VAR_4 |
    VAR_1 |
    VAR_0;

 if (VAR_7->flags & VAR_6)
  VAR_10 |= VAR_3;
 else if (VAR_7->flags & VAR_5)
  VAR_10 |= VAR_2;

 VAR_9->rx_mode = VAR_10;

 FUNC_1(VAR_8->workq, &VAR_9->work);
}
