
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int if_port; int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
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
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_15)
{
 unsigned int VAR_16 = VAR_15->base_addr;
 int VAR_17;

 FUNC_0(0);
 FUNC_4(0x0001, VAR_16 + 4);
 FUNC_4(0x3f00, VAR_16 + 8);


 FUNC_0(2);
 for (VAR_17 = 0; VAR_17 < 6; VAR_17++)
  FUNC_3(VAR_15->dev_addr[VAR_17], VAR_16 + VAR_17);

 FUNC_6(VAR_15, VAR_15->if_port);


 FUNC_4(VAR_10, VAR_16 + VAR_2);
 FUNC_0(6);
 for (VAR_17 = 0; VAR_17 < 9; VAR_17++)
  FUNC_1(VAR_16+VAR_17);
 FUNC_2(VAR_16 + 10);
 FUNC_2(VAR_16 + 12);


 FUNC_0(1);

 FUNC_5(VAR_15);
 FUNC_4(VAR_11, VAR_16 + VAR_2);
 FUNC_4(VAR_7, VAR_16 + VAR_2);
 FUNC_4(VAR_14, VAR_16 + VAR_2);

 FUNC_4(VAR_9 | 0xff, VAR_16 + VAR_2);

 FUNC_4(VAR_0 | VAR_3 | VAR_13 | VAR_6 | VAR_4,
  VAR_16 + VAR_2);
 FUNC_4(VAR_8 | VAR_3 | VAR_13 | VAR_5 | VAR_12
  | VAR_1, VAR_16 + VAR_2);
}
