
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
struct mlx4_counter {scalar_t__ counter_mode; int tx_bytes; int rx_bytes; int tx_frames; int rx_frames; } ;
struct ifla_vf_stats {void* tx_bytes; void* rx_bytes; void* tx_packets; void* rx_packets; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int,struct mlx4_counter*) ;
 int FUNC_2 (struct mlx4_dev*,int) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;

int FUNC_5(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4,
        struct ifla_vf_stats *VAR_5)
{
 struct mlx4_counter VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_3(VAR_2))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_2, VAR_4);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_2, VAR_7, VAR_3);
 VAR_8 = FUNC_1(VAR_2, VAR_7, VAR_3, &VAR_6);
 if (!VAR_8 && VAR_6.counter_mode == 0) {
  VAR_5->rx_packets = FUNC_0(VAR_6.rx_frames);
  VAR_5->tx_packets = FUNC_0(VAR_6.tx_frames);
  VAR_5->rx_bytes = FUNC_0(VAR_6.rx_bytes);
  VAR_5->tx_bytes = FUNC_0(VAR_6.tx_bytes);
 }

 return VAR_8;
}
