
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {long base_addr; } ;


 int FUNC_0 (long) ;
 int FUNC_1 (int,long) ;

__attribute__((used)) static inline int FUNC_2(struct net_device *VAR_0)
{
 long VAR_1 = VAR_0->base_addr;

 FUNC_1(FUNC_0(VAR_1 + 0x20) | 0x80, VAR_1 + 0x20);
 return 0;
}
