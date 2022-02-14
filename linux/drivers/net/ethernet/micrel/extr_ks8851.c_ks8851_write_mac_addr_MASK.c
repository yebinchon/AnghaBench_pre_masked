
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;
struct ks8851_net {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ks8851_net*,int ) ;
 int FUNC_2 (struct ks8851_net*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ks8851_net* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct ks8851_net *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 FUNC_3(&VAR_4->lock);





 FUNC_1(VAR_4, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(VAR_4, FUNC_0(VAR_5), VAR_3->dev_addr[VAR_5]);
 if (!FUNC_6(VAR_3))
  FUNC_1(VAR_4, VAR_2);

 FUNC_4(&VAR_4->lock);

 return 0;
}
