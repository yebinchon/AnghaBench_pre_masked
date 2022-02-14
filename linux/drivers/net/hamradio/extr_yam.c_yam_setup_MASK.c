
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {int bitrate; int baudrate; int send_queue; scalar_t__ irq; scalar_t__ iobase; struct net_device* dev; int pers; int slot; int txtail; int txd; int holdd; scalar_t__ dupmode; int magic; } ;
struct net_device {int dev_addr; int broadcast; int addr_len; int mtu; int hard_header_len; int type; int * header_ops; int * netdev_ops; scalar_t__ irq; scalar_t__ base_addr; } ;


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
 int FUNC_0 (int ,int *,int ) ;
 struct yam_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_15)
{
 struct yam_port *VAR_16 = FUNC_1(VAR_15);

 VAR_16->magic = VAR_10;
 VAR_16->bitrate = VAR_4;
 VAR_16->baudrate = VAR_4 * 2;
 VAR_16->iobase = 0;
 VAR_16->irq = 0;
 VAR_16->dupmode = 0;
 VAR_16->holdd = VAR_5;
 VAR_16->txd = VAR_8;
 VAR_16->txtail = VAR_9;
 VAR_16->slot = VAR_7;
 VAR_16->pers = VAR_6;
 VAR_16->dev = VAR_15;

 VAR_15->base_addr = VAR_16->iobase;
 VAR_15->irq = VAR_16->irq;

 FUNC_2(&VAR_16->send_queue);

 VAR_15->netdev_ops = &VAR_14;
 VAR_15->header_ops = &VAR_13;

 VAR_15->type = VAR_0;
 VAR_15->hard_header_len = VAR_2;
 VAR_15->mtu = VAR_3;
 VAR_15->addr_len = VAR_1;
 FUNC_0(VAR_15->broadcast, &VAR_11, VAR_1);
 FUNC_0(VAR_15->dev_addr, &VAR_12, VAR_1);
}
