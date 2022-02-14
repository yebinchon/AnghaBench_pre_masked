
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; int dev_addr; int mtu; } ;
struct ag71xx {int rx_buf_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct ag71xx*) ;
 int FUNC_5 (struct ag71xx*) ;
 int FUNC_6 (struct ag71xx*,int ,unsigned int) ;
 struct ag71xx* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct ag71xx *VAR_4 = FUNC_7(VAR_3);
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3->mtu);
 VAR_4->rx_buf_size =
  FUNC_0(VAR_5 + VAR_2 + VAR_1);


 FUNC_6(VAR_4, VAR_0, VAR_5);
 FUNC_2(VAR_4, VAR_3->dev_addr);

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto err;

 FUNC_8(VAR_3->phydev);

 return 0;

err:
 FUNC_5(VAR_4);
 return VAR_6;
}
