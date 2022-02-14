
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct net_local {scalar_t__ virt_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct net_local *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 u8 *VAR_4 = (u8 *)VAR_2;

 do {
  u16 VAR_5;

  VAR_5 = FUNC_0(VAR_0->virt_addr + VAR_1);
  *VAR_4++ = (u8)VAR_5;
  *VAR_4++ = (u8)(VAR_5 >> 8);
 } while (--VAR_3);
}
