
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct net_device {int needs_free_netdev; int flags; scalar_t__ needed_headroom; int features; int priv_flags; int type; scalar_t__ addr_len; scalar_t__ hard_header_len; int * netdev_ops; } ;
struct iphdr {int dummy; } ;
struct gtp0_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_8)
{
 VAR_8->netdev_ops = &VAR_7;
 VAR_8->needs_free_netdev = 1;

 VAR_8->hard_header_len = 0;
 VAR_8->addr_len = 0;


 VAR_8->type = VAR_0;
 VAR_8->flags = VAR_4 | VAR_2 | VAR_1;

 VAR_8->priv_flags |= VAR_3;
 VAR_8->features |= VAR_6;
 FUNC_0(VAR_8);


 VAR_8->needed_headroom = VAR_5 +
      sizeof(struct iphdr) +
      sizeof(struct udphdr) +
      sizeof(struct gtp0_header);
}
