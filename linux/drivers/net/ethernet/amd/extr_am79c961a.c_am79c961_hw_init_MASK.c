
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct dev_priv {int chip_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int) ;
 struct dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_4)
{
 struct dev_priv *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(&VAR_5->chip_lock);
 FUNC_4 (VAR_4->base_addr, VAR_0, VAR_1);
 FUNC_4 (VAR_4->base_addr, VAR_2, VAR_3);
 FUNC_3(&VAR_5->chip_lock);

 FUNC_0(VAR_4, 0x66);
 FUNC_0(VAR_4, 0x99);

 return 0;
}
