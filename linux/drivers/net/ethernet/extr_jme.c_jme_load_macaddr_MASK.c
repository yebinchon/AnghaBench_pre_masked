
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dev_addr; } ;
struct jme_adapter {int macaddr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_3)
{
 struct jme_adapter *VAR_4 = FUNC_2(VAR_3);
 unsigned char VAR_5[VAR_0];
 u32 VAR_6;

 FUNC_3(&VAR_4->macaddr_lock);
 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_5[0] = (VAR_6 >> 0) & 0xFF;
 VAR_5[1] = (VAR_6 >> 8) & 0xFF;
 VAR_5[2] = (VAR_6 >> 16) & 0xFF;
 VAR_5[3] = (VAR_6 >> 24) & 0xFF;
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_5[4] = (VAR_6 >> 0) & 0xFF;
 VAR_5[5] = (VAR_6 >> 8) & 0xFF;
 FUNC_1(VAR_3->dev_addr, VAR_5, VAR_0);
 FUNC_4(&VAR_4->macaddr_lock);
}
