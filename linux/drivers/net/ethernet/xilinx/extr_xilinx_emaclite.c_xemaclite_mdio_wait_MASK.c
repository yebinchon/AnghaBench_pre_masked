
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_local {scalar_t__ base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct net_local *VAR_3)
{
 u32 VAR_4;




 return FUNC_0(VAR_2,
      VAR_3->base_addr + VAR_1,
      VAR_4, !(VAR_4 & VAR_0),
      1000, 20000);
}
