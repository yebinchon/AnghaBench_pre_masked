
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int hard_header_len; int addr_len; int type; int * netdev_ops; int * header_ops; scalar_t__ flags; } ;
struct frhdr {int dummy; } ;
struct dlci_local {int receive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dlci_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4)
{
 struct dlci_local *VAR_5 = FUNC_0(VAR_4);

 VAR_4->flags = 0;
 VAR_4->header_ops = &VAR_1;
 VAR_4->netdev_ops = &VAR_2;
 VAR_4->needs_free_netdev = 1;

 VAR_5->receive = VAR_3;

 VAR_4->type = VAR_0;
 VAR_4->hard_header_len = sizeof(struct frhdr);
 VAR_4->addr_len = sizeof(short);

}
