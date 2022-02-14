
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net {int tx_packets; int tx_zcopy_err; int tx_flush; } ;



__attribute__((used)) static bool FUNC_0(struct vhost_net *VAR_0)
{



 return !VAR_0->tx_flush &&
  VAR_0->tx_packets / 64 >= VAR_0->tx_zcopy_err;
}
