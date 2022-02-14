
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct hinic_rx_mode_work {int rx_mode; } ;
struct hinic_dev {int netdev; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct hinic_dev*,int ) ;
 int FUNC_3 (struct hinic_dev*,int ,int ,char*) ;
 int VAR_2 ;
 struct hinic_dev* FUNC_4 (struct hinic_rx_mode_work*) ;
 struct hinic_rx_mode_work* FUNC_5 (struct work_struct*) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_3)
{
 struct hinic_rx_mode_work *VAR_4 = FUNC_5(VAR_3);
 struct hinic_dev *VAR_5 = FUNC_4(VAR_4);

 FUNC_3(VAR_5, VAR_1, VAR_5->netdev, "set rx mode work\n");

 FUNC_2(VAR_5, VAR_4->rx_mode);

 FUNC_1(VAR_5->netdev, VAR_0, VAR_2);
 FUNC_0(VAR_5->netdev, VAR_0, VAR_2);
}
