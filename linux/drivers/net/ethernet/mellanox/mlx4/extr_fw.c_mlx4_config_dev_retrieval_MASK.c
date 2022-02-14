
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_config_dev_params {int vxlan_udp_dport; void* rx_csum_flags_port_2; void* rx_csum_flags_port_1; } ;
struct mlx4_config_dev {size_t rx_checksum_val; int vxlan_udp_dport; int member_0; } ;


 size_t FUNC_0 (void**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 void** VAR_6 ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_config_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_7,
         struct mlx4_config_dev_params *VAR_8)
{
 struct mlx4_config_dev VAR_9 = {0};
 int VAR_10;
 u8 VAR_11;





 if (!(VAR_7->caps.flags2 & VAR_5))
  return -VAR_4;

 VAR_10 = FUNC_2(VAR_7, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_11 = (VAR_9.rx_checksum_val >> 0) &
   0x7;

 if (VAR_11 >= FUNC_0(VAR_6))
  return -VAR_3;
 VAR_8->rx_csum_flags_port_1 = VAR_6[VAR_11];

 VAR_11 = (VAR_9.rx_checksum_val >> 4) &
   0x7;

 if (VAR_11 >= FUNC_0(VAR_6))
  return -VAR_3;
 VAR_8->rx_csum_flags_port_2 = VAR_6[VAR_11];

 VAR_8->vxlan_udp_dport = FUNC_1(VAR_9.vxlan_udp_dport);

 return 0;
}
