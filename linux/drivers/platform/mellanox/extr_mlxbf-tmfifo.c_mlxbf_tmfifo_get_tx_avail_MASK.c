
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlxbf_tmfifo {int tx_fifo_size; scalar_t__ tx_base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlxbf_tmfifo *VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u64 VAR_8;


 if (VAR_5 == VAR_3)
  VAR_6 = VAR_4->tx_fifo_size / VAR_0;
 else
  VAR_6 = 1;

 VAR_8 = FUNC_1(VAR_4->tx_base + VAR_1);
 VAR_7 = FUNC_0(VAR_2, VAR_8);
 return VAR_4->tx_fifo_size - VAR_6 - VAR_7;
}
