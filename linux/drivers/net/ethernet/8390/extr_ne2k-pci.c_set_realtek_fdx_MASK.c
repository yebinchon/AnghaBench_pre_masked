
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {long base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int,long) ;

__attribute__((used)) static inline int FUNC_1(struct net_device *VAR_3)
{
 long VAR_4 = VAR_3->base_addr;

 FUNC_0(0xC0 + VAR_0, VAR_4 + VAR_2);
 FUNC_0(0xC0, VAR_4 + 0x01);
 FUNC_0(0x40, VAR_4 + 0x06);
 FUNC_0(0x00, VAR_4 + 0x01);
 FUNC_0(VAR_1 + VAR_0, VAR_4 + VAR_2);
 return 0;
}
