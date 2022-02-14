
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iphdr {int ihl; scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
 struct iphdr *VAR_3 = (struct iphdr *)VAR_2;
 void *VAR_4;
 u16 *VAR_5;

 VAR_4 = VAR_2 + VAR_3->ihl * 4;

 if (VAR_3->protocol == VAR_0 || VAR_3->protocol == VAR_1) {
  VAR_5 = (u16 *)FUNC_0(VAR_3->protocol, VAR_4);
  *VAR_5 = ~(*VAR_5);
 }
}
