
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxbf_tmfifo {int tx_fifo_size; scalar_t__ rx_base; void* rx_fifo_size; scalar_t__ tx_base; } ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mlxbf_tmfifo *VAR_8)
{
 u64 VAR_9;


 VAR_9 = FUNC_2(VAR_8->tx_base + VAR_4);
 VAR_8->tx_fifo_size =
  FUNC_0(VAR_7, VAR_9);
 VAR_9 = (VAR_9 & ~VAR_6) |
  FUNC_1(VAR_6,
      VAR_8->tx_fifo_size / 2);
 VAR_9 = (VAR_9 & ~VAR_5) |
  FUNC_1(VAR_5,
      VAR_8->tx_fifo_size - 1);
 FUNC_3(VAR_9, VAR_8->tx_base + VAR_4);


 VAR_9 = FUNC_2(VAR_8->rx_base + VAR_0);
 VAR_8->rx_fifo_size =
  FUNC_0(VAR_3, VAR_9);
 VAR_9 = (VAR_9 & ~VAR_2) |
  FUNC_1(VAR_2, 0);
 VAR_9 = (VAR_9 & ~VAR_1) |
  FUNC_1(VAR_1, 1);
 FUNC_3(VAR_9, VAR_8->rx_base + VAR_0);
}
