
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2)
{
 u_int VAR_3 = VAR_2->base_addr;

 return FUNC_0(VAR_3, VAR_1) +
  (FUNC_0(VAR_3, VAR_0) << 8);
}
