
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atl2_adapter {scalar_t__ txs_next_clear; int txs_write_ptr; scalar_t__ rxd_write_ptr; scalar_t__ rxd_read_ptr; int txd_read_ptr; scalar_t__ txd_write_ptr; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct atl2_adapter *VAR_0)
{

 VAR_0->txd_write_ptr = 0;
 FUNC_0(&VAR_0->txd_read_ptr, 0);

 VAR_0->rxd_read_ptr = 0;
 VAR_0->rxd_write_ptr = 0;

 FUNC_0(&VAR_0->txs_write_ptr, 0);
 VAR_0->txs_next_clear = 0;
}
