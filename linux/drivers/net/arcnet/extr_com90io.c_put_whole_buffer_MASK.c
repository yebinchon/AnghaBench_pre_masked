
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4, unsigned VAR_5,
        unsigned VAR_6, char *VAR_7)
{
 int VAR_8 = VAR_4->base_addr;

 FUNC_0((VAR_5 >> 8) | VAR_0, VAR_8, VAR_2);
 FUNC_0(VAR_5 & 0xff, VAR_8,VAR_3);

 while (VAR_6--)



  FUNC_0(*(VAR_7++), VAR_8, VAR_1);

}
