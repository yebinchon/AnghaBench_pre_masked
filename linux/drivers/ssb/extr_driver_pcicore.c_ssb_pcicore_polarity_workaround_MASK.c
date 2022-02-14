
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssb_pcicore {int dummy; } ;


 int FUNC_0 (struct ssb_pcicore*,int) ;

__attribute__((used)) static u8 FUNC_1(struct ssb_pcicore *VAR_0)
{
 return (FUNC_0(VAR_0, 0x204) & 0x10) ? 0xC0 : 0x80;
}
