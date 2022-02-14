
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int addr_len; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 VAR_2->type = VAR_0;
 VAR_2->flags = VAR_1;
 VAR_2->hard_header_len = 10;
 VAR_2->addr_len = 2;
 FUNC_0(VAR_2);
}
