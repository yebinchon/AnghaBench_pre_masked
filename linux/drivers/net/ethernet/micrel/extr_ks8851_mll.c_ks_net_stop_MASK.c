
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct ks_net {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct ks_net*) ;
 int FUNC_2 (struct ks_net*,int ) ;
 int FUNC_3 (struct ks_net*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ks_net* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ks_net*,int ,struct net_device*,char*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4)
{
 struct ks_net *VAR_5 = FUNC_6(VAR_4);

 FUNC_7(VAR_5, VAR_3, VAR_4, "shutting down\n");

 FUNC_8(VAR_4);

 FUNC_4(&VAR_5->lock);


 FUNC_3(VAR_5, VAR_0, 0x0000);
 FUNC_3(VAR_5, VAR_1, 0xffff);


 FUNC_1(VAR_5);


 FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_4->irq, VAR_4);
 FUNC_5(&VAR_5->lock);
 return 0;
}
