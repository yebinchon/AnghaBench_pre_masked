
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radio_isa_card {int io; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct radio_isa_card *VAR_0)
{

 return 0xffff * !(FUNC_0(VAR_0->io) & 2);
}
