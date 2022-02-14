
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int features; int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_20)
{

 FUNC_1(VAR_20, VAR_20->mtu + VAR_14 + VAR_19 + VAR_13, VAR_18);


 FUNC_1(VAR_20, VAR_5 | VAR_1 |
     (VAR_20->features & VAR_17 ? VAR_2 : 0) |
     VAR_4 | VAR_3, VAR_0);

 FUNC_0(VAR_20);


 FUNC_1(VAR_20,
     (VAR_20->dev_addr[0] << 24) | (VAR_20->dev_addr[1] << 16) |
     (VAR_20->dev_addr[2] << 8) | (VAR_20->dev_addr[3]), VAR_15);
 FUNC_1(VAR_20,
     (VAR_20->dev_addr[4] << 8) | (VAR_20->dev_addr[5]), VAR_16);


 FUNC_1(VAR_20, VAR_11 | VAR_12, VAR_10);


 FUNC_1(VAR_20, VAR_7 | VAR_9 | VAR_8, VAR_6);
}
