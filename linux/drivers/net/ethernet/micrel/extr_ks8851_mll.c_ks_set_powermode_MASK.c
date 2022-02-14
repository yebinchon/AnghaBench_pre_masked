
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_net {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct ks_net*,int ) ;
 int FUNC_1 (struct ks_net*,int ,unsigned int) ;
 int FUNC_2 (struct ks_net*,int ,int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ks_net *VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;

 FUNC_2(VAR_4, VAR_3, VAR_4->netdev, "setting power mode %d\n", VAR_5);

 FUNC_0(VAR_4, VAR_0);
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_5;

 FUNC_1(VAR_4, VAR_1, VAR_6);
}
