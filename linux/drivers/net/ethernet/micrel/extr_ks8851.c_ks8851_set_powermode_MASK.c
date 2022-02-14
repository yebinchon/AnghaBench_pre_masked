
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8851_net {int netdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct ks8851_net*,int ) ;
 int FUNC_1 (struct ks8851_net*,int ,unsigned int) ;
 int FUNC_2 (struct ks8851_net*,int ,int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ks8851_net *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;

 FUNC_2(VAR_3, VAR_2, VAR_3->netdev, "setting power mode %d\n", VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_4;

 FUNC_1(VAR_3, VAR_0, VAR_5);
}
