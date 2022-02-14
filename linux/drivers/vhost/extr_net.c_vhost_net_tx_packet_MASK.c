
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net {int tx_packets; scalar_t__ tx_zcopy_err; } ;



__attribute__((used)) static void FUNC_0(struct vhost_net *VAR_0)
{
 ++VAR_0->tx_packets;
 if (VAR_0->tx_packets < 1024)
  return;
 VAR_0->tx_packets = 0;
 VAR_0->tx_zcopy_err = 0;
}
