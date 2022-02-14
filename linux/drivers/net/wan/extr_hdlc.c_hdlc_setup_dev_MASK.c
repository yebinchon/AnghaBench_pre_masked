
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int min_mtu; int hard_header_len; int * header_ops; scalar_t__ addr_len; int type; void* max_mtu; void* mtu; int priv_flags; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_6)
{



 VAR_6->flags = VAR_3 | VAR_2;
 VAR_6->priv_flags = VAR_4;
 VAR_6->mtu = VAR_1;
 VAR_6->min_mtu = 68;
 VAR_6->max_mtu = VAR_1;
 VAR_6->type = VAR_0;
 VAR_6->hard_header_len = 16;
 VAR_6->addr_len = 0;
 VAR_6->header_ops = &VAR_5;
}
