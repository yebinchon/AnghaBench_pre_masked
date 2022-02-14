
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static u_char FUNC_2(struct net_device *VAR_3, unsigned VAR_4)
{
 int VAR_5 = VAR_3->base_addr;

 FUNC_1(VAR_4 >> 8, VAR_5, VAR_1);
 FUNC_1(VAR_4 & 0xff, VAR_5, VAR_2);

 return FUNC_0(VAR_5, VAR_0);
}
