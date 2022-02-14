
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 FUNC_1(FUNC_2(VAR_3), VAR_2->base_addr + VAR_0);
 return FUNC_2(FUNC_0(VAR_2->base_addr + VAR_1));
}
