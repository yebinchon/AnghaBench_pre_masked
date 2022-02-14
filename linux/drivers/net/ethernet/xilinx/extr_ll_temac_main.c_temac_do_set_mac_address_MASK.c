
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int indirect_lock; } ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct temac_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct temac_local*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct temac_local *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;


 FUNC_1(VAR_3->indirect_lock, VAR_4);
 FUNC_3(VAR_3, VAR_0,
        (VAR_2->dev_addr[0]) |
        (VAR_2->dev_addr[1] << 8) |
        (VAR_2->dev_addr[2] << 16) |
        (VAR_2->dev_addr[3] << 24));


 FUNC_3(VAR_3, VAR_1,
        (VAR_2->dev_addr[4] & 0x000000ff) |
        (VAR_2->dev_addr[5] << 8));
 FUNC_2(VAR_3->indirect_lock, VAR_4);
}
