
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radio_isa_card {scalar_t__ io; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct radio_isa_card *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 VAR_3 = VAR_1 / 160;
 VAR_2 = (VAR_3 * VAR_3 + 2500) / 5000;
 VAR_2 = (VAR_2 * VAR_3 + 5000) / 10000;
 VAR_2 -= (10 * VAR_3 * VAR_3 + 10433) / 20866;
 VAR_2 += 4 * VAR_3 - 11505;

 FUNC_0((VAR_2 >> 8) & 0x01, VAR_0->io + 4);
 FUNC_0(VAR_2 >> 9, VAR_0->io + 6);
 FUNC_0(VAR_2 & 0xff, VAR_0->io + 8);
 return 0;
}
