
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int broadcast; int hard_header_len; int type; int header_ops; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct net_device *VAR_1)
{
 VAR_0->header_ops = VAR_1->header_ops;

 VAR_0->type = VAR_1->type;
 VAR_0->hard_header_len = VAR_1->hard_header_len;
 VAR_0->addr_len = VAR_1->addr_len;

 FUNC_0(VAR_0->broadcast, VAR_1->broadcast,
  VAR_1->addr_len);
}
