
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_start_page; int stop_page; int block_output; int block_input; int get_8390_hdr; scalar_t__ rx_start_page; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_5, int VAR_6,
       int VAR_7)
{
    struct net_device *VAR_8 = VAR_5->priv;

    VAR_4.tx_start_page = VAR_6;
    VAR_4.rx_start_page = VAR_6 + VAR_0;
    VAR_4.stop_page = VAR_7;


    VAR_4.get_8390_hdr = VAR_3;
    VAR_4.block_input = VAR_1;
    VAR_4.block_output = VAR_2;

    return 0;
}
