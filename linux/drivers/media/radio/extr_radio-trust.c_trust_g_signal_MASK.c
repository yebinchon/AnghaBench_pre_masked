
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radio_isa_card {int io; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct radio_isa_card *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < 100; VAR_1++)
  VAR_2 |= FUNC_0(VAR_0->io);
 return (VAR_2 & 1) ? 0 : 0xffff;
}
