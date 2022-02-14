
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int * dev_addr; } ;
struct lance_private {scalar_t__ tx_old; scalar_t__ rx_old; scalar_t__ tx_new; scalar_t__ rx_new; scalar_t__ init_block_dvma; struct lance_init_block* init_block_mem; } ;
struct lance_init_block {int rx_len; int rx_ptr; int tx_len; int tx_ptr; TYPE_2__* brx_ring; TYPE_1__* btx_ring; int * phys_addr; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __u32 ;
struct TYPE_4__ {int rmd0; int rmd1_hadr; int length; scalar_t__ mblength; int rmd1_bits; } ;
struct TYPE_3__ {int tmd0; int tmd1_hadr; int length; scalar_t__ misc; scalar_t__ tmd1_bits; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_10)
{
 struct lance_private *VAR_11 = FUNC_3(VAR_10);
 struct lance_init_block *VAR_12 = VAR_11->init_block_mem;
 dma_addr_t VAR_13 = VAR_11->init_block_dvma;
 __u32 VAR_14;
 int VAR_15;


 FUNC_4(VAR_10);
 VAR_11->rx_new = VAR_11->tx_new = 0;
 VAR_11->rx_old = VAR_11->tx_old = 0;




 VAR_12->phys_addr [0] = VAR_10->dev_addr [1];
 VAR_12->phys_addr [1] = VAR_10->dev_addr [0];
 VAR_12->phys_addr [2] = VAR_10->dev_addr [3];
 VAR_12->phys_addr [3] = VAR_10->dev_addr [2];
 VAR_12->phys_addr [4] = VAR_10->dev_addr [5];
 VAR_12->phys_addr [5] = VAR_10->dev_addr [4];


 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_14 = FUNC_0(VAR_13 + FUNC_1(VAR_9, VAR_15));
  VAR_12->btx_ring [VAR_15].tmd0 = VAR_14;
  VAR_12->btx_ring [VAR_15].tmd1_hadr = VAR_14 >> 16;
  VAR_12->btx_ring [VAR_15].tmd1_bits = 0;
  VAR_12->btx_ring [VAR_15].length = 0xf000;
  VAR_12->btx_ring [VAR_15].misc = 0;
 }


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_0(VAR_13 + FUNC_1(VAR_8, VAR_15));

  VAR_12->brx_ring [VAR_15].rmd0 = VAR_14;
  VAR_12->brx_ring [VAR_15].rmd1_hadr = VAR_14 >> 16;
  VAR_12->brx_ring [VAR_15].rmd1_bits = VAR_2;
  VAR_12->brx_ring [VAR_15].length = -VAR_3 | 0xf000;
  VAR_12->brx_ring [VAR_15].mblength = 0;
 }




 VAR_14 = FUNC_0(VAR_13 + FUNC_2(VAR_6, 0));
 VAR_12->rx_len = (VAR_0 << 13) | (VAR_14 >> 16);
 VAR_12->rx_ptr = VAR_14;


 VAR_14 = FUNC_0(VAR_13 + FUNC_2(VAR_7, 0));
 VAR_12->tx_len = (VAR_1 << 13) | (VAR_14 >> 16);
 VAR_12->tx_ptr = VAR_14;
}
