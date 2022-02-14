
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct mlxsw_sp_port_xstats {scalar_t__* tx_bytes; scalar_t__* tx_packets; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_port_xstats *VAR_1,
           u8 VAR_2, u64 *VAR_3,
           u64 *VAR_4)
{
 int VAR_5;

 *VAR_3 = 0;
 *VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2 & FUNC_0(VAR_5)) {
   *VAR_3 += VAR_1->tx_packets[VAR_5];
   *VAR_4 += VAR_1->tx_bytes[VAR_5];
  }
 }
}
