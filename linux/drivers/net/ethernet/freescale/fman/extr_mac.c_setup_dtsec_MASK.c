
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_device {TYPE_1__* priv; int adjust_link; int stop; int start; int set_multi; int set_tstamp; int set_allmulti; int set_exception; int set_rx_pause; int set_tx_pause; int remove_hash_mac_addr; int add_hash_mac_addr; int change_addr; int set_promisc; int init; } ;
struct TYPE_2__ {int disable; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(struct mac_device *VAR_16)
{
 VAR_16->init = VAR_6;
 VAR_16->set_promisc = VAR_10;
 VAR_16->change_addr = VAR_7;
 VAR_16->add_hash_mac_addr = VAR_2;
 VAR_16->remove_hash_mac_addr = VAR_3;
 VAR_16->set_tx_pause = VAR_12;
 VAR_16->set_rx_pause = VAR_1;
 VAR_16->set_exception = VAR_9;
 VAR_16->set_allmulti = VAR_8;
 VAR_16->set_tstamp = VAR_11;
 VAR_16->set_multi = VAR_13;
 VAR_16->start = VAR_14;
 VAR_16->stop = VAR_15;
 VAR_16->adjust_link = VAR_0;
 VAR_16->priv->enable = VAR_5;
 VAR_16->priv->disable = VAR_4;
}
