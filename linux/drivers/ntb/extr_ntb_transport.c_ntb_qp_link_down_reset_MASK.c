
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int link_is_up; int active; scalar_t__ tx_async; scalar_t__ tx_memcpy; scalar_t__ tx_err_no_buf; scalar_t__ tx_ring_full; scalar_t__ tx_pkts; scalar_t__ tx_bytes; scalar_t__ rx_async; scalar_t__ rx_memcpy; scalar_t__ rx_err_ver; scalar_t__ rx_err_oflow; scalar_t__ rx_err_no_buf; scalar_t__ rx_ring_empty; scalar_t__ rx_pkts; scalar_t__ rx_bytes; scalar_t__ rx_index; scalar_t__ tx_index; } ;



__attribute__((used)) static void FUNC_0(struct ntb_transport_qp *VAR_0)
{
 VAR_0->link_is_up = 0;
 VAR_0->active = 0;

 VAR_0->tx_index = 0;
 VAR_0->rx_index = 0;
 VAR_0->rx_bytes = 0;
 VAR_0->rx_pkts = 0;
 VAR_0->rx_ring_empty = 0;
 VAR_0->rx_err_no_buf = 0;
 VAR_0->rx_err_oflow = 0;
 VAR_0->rx_err_ver = 0;
 VAR_0->rx_memcpy = 0;
 VAR_0->rx_async = 0;
 VAR_0->tx_bytes = 0;
 VAR_0->tx_pkts = 0;
 VAR_0->tx_ring_full = 0;
 VAR_0->tx_err_no_buf = 0;
 VAR_0->tx_memcpy = 0;
 VAR_0->tx_async = 0;
}
