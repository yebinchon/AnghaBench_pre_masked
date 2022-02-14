
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_port_rx_mode_cmd {int rx_mode; int func_idx; } ;
struct hinic_hwdev {int hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int rx_mode_cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hinic_hwdev*,int ,struct hinic_port_rx_mode_cmd*,int,int *,int *) ;

int FUNC_2(struct hinic_dev *VAR_1, u32 VAR_2)
{
 struct hinic_hwdev *VAR_3 = VAR_1->hwdev;
 struct hinic_port_rx_mode_cmd VAR_4;

 VAR_4.func_idx = FUNC_0(VAR_3->hwif);
 VAR_4.rx_mode = VAR_2;

 return FUNC_1(VAR_3, VAR_0,
      &VAR_4, sizeof(VAR_4),
      ((void*)0), ((void*)0));
}
