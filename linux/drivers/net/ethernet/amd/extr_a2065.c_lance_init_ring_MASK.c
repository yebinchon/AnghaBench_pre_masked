
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * dev_addr; } ;
struct lance_private {int lance_log_tx_bufs; int lance_log_rx_bufs; scalar_t__ tx_old; scalar_t__ rx_old; scalar_t__ tx_new; scalar_t__ rx_new; struct lance_init_block* lance_init_block; struct lance_init_block* init_block; } ;
struct lance_init_block {int rx_len; int rx_ptr; int tx_len; int tx_ptr; scalar_t__* filter; TYPE_1__* btx_ring; TYPE_1__* brx_ring; TYPE_1__*** rx_buf; TYPE_1__*** tx_buf; int * phys_addr; scalar_t__ mode; } ;
struct TYPE_2__ {int tmd0; int tmd1_hadr; int length; int rmd0; int rmd1_hadr; scalar_t__ mblength; int rmd1_bits; scalar_t__ misc; scalar_t__ tmd1_bits; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct lance_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct lance_private *VAR_3 = FUNC_2(VAR_2);
 volatile struct lance_init_block *VAR_4 = VAR_3->init_block;
 volatile struct lance_init_block *VAR_5 = VAR_3->lance_init_block;

 int VAR_6;
 int VAR_7;


 FUNC_3(VAR_2);
 VAR_3->rx_new = VAR_3->tx_new = 0;
 VAR_3->rx_old = VAR_3->tx_old = 0;

 VAR_4->mode = 0;




 VAR_4->phys_addr[0] = VAR_2->dev_addr[1];
 VAR_4->phys_addr[1] = VAR_2->dev_addr[0];
 VAR_4->phys_addr[2] = VAR_2->dev_addr[3];
 VAR_4->phys_addr[3] = VAR_2->dev_addr[2];
 VAR_4->phys_addr[4] = VAR_2->dev_addr[5];
 VAR_4->phys_addr[5] = VAR_2->dev_addr[4];


 FUNC_1(VAR_2, "TX rings:\n");
 for (VAR_7 = 0; VAR_7 <= 1 << VAR_3->lance_log_tx_bufs; VAR_7++) {
  VAR_6 = FUNC_0(&VAR_5->tx_buf[VAR_7][0]);
  VAR_4->btx_ring[VAR_7].tmd0 = VAR_6;
  VAR_4->btx_ring[VAR_7].tmd1_hadr = VAR_6 >> 16;
  VAR_4->btx_ring[VAR_7].tmd1_bits = 0;
  VAR_4->btx_ring[VAR_7].length = 0xf000;
  VAR_4->btx_ring[VAR_7].misc = 0;
  if (VAR_7 < 3)
   FUNC_1(VAR_2, "%d: 0x%08x\n", VAR_7, VAR_6);
 }


 FUNC_1(VAR_2, "RX rings:\n");
 for (VAR_7 = 0; VAR_7 < 1 << VAR_3->lance_log_rx_bufs; VAR_7++) {
  VAR_6 = FUNC_0(&VAR_5->rx_buf[VAR_7][0]);

  VAR_4->brx_ring[VAR_7].rmd0 = VAR_6;
  VAR_4->brx_ring[VAR_7].rmd1_hadr = VAR_6 >> 16;
  VAR_4->brx_ring[VAR_7].rmd1_bits = VAR_0;
  VAR_4->brx_ring[VAR_7].length = -VAR_1 | 0xf000;
  VAR_4->brx_ring[VAR_7].mblength = 0;
  if (VAR_7 < 3)
   FUNC_1(VAR_2, "%d: 0x%08x\n", VAR_7, VAR_6);
 }




 VAR_6 = FUNC_0(&VAR_5->brx_ring);
 VAR_4->rx_len = (VAR_3->lance_log_rx_bufs << 13) | (VAR_6 >> 16);
 VAR_4->rx_ptr = VAR_6;
 FUNC_1(VAR_2, "RX ptr: %08x\n", VAR_6);


 VAR_6 = FUNC_0(&VAR_5->btx_ring);
 VAR_4->tx_len = (VAR_3->lance_log_tx_bufs << 13) | (VAR_6 >> 16);
 VAR_4->tx_ptr = VAR_6;
 FUNC_1(VAR_2, "TX ptr: %08x\n", VAR_6);


 VAR_4->filter[0] = 0;
 VAR_4->filter[1] = 0;
}
