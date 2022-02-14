
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;
struct Am79C960 {int RDP; int RAP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_4)
{
 volatile struct Am79C960 *VAR_5 = (struct Am79C960 *)VAR_4->base_addr;

 VAR_5->RAP = VAR_0;
 VAR_5->RDP = VAR_2;
 FUNC_0(VAR_4);
 VAR_5->RDP = VAR_1 | VAR_3;
 FUNC_1(VAR_4);
}
