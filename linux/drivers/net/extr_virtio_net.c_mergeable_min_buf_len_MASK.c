
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct virtnet_info {TYPE_1__* dev; scalar_t__ big_packets; } ;
struct virtio_net_hdr_mrg_rxbuf {int dummy; } ;
struct TYPE_2__ {unsigned int max_mtu; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int const VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int FUNC_1 (unsigned int const,unsigned int const) ;
 unsigned int FUNC_2 (struct virtqueue*) ;

__attribute__((used)) static unsigned int FUNC_3(struct virtnet_info *VAR_4, struct virtqueue *VAR_5)
{
 const unsigned int VAR_6 = sizeof(struct virtio_net_hdr_mrg_rxbuf);
 unsigned int VAR_7 = FUNC_2(VAR_5);
 unsigned int VAR_8 = VAR_4->big_packets ? VAR_2 : VAR_4->dev->max_mtu;
 unsigned int VAR_9 = VAR_6 + VAR_0 + VAR_3 + VAR_8;
 unsigned int VAR_10 = FUNC_0(VAR_9, VAR_7);

 return FUNC_1(FUNC_1(VAR_10, VAR_6) - VAR_6,
     (unsigned int)VAR_1);
}
