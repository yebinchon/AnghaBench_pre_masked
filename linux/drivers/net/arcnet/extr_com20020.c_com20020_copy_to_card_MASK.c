
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,char*,int,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int ,void*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4, int VAR_5,
      int VAR_6, void *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_4->base_addr, VAR_10 = 512 * VAR_5 + VAR_6;


 FUNC_1((VAR_10 >> 8) | VAR_0, VAR_9, VAR_2);
 FUNC_1(VAR_10 & 0xff, VAR_9, VAR_3);


 FUNC_0(VAR_4, "outsb", VAR_8,
      FUNC_2(VAR_9, VAR_1, VAR_7, VAR_8));
}
