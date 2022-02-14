
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_local {scalar_t__ base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_local *VAR_6)
{
 u32 VAR_7;


 FUNC_1(VAR_0, VAR_6->base_addr + VAR_1);


 VAR_7 = FUNC_0(VAR_6->base_addr + VAR_4);
 FUNC_1(VAR_7 & (~VAR_5),
    VAR_6->base_addr + VAR_4);


 VAR_7 = FUNC_0(VAR_6->base_addr + VAR_2);
 FUNC_1(VAR_7 & (~VAR_3),
    VAR_6->base_addr + VAR_2);
}
