
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_reg_pcap {int port_num; int caps_127_96; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_reg_pcap*,int ,int) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_reg_pcap*,int,struct mlx5_reg_pcap*,int,int ,int ,int) ;

int FUNC_3(struct mlx5_core_dev *VAR_1, u8 VAR_2, u32 VAR_3)
{
 struct mlx5_reg_pcap VAR_4;
 struct mlx5_reg_pcap VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.caps_127_96 = FUNC_0(VAR_3);
 VAR_4.port_num = VAR_2;

 return FUNC_2(VAR_1, &VAR_4, sizeof(VAR_4), &VAR_5,
        sizeof(VAR_5), VAR_0, 0, 1);
}
