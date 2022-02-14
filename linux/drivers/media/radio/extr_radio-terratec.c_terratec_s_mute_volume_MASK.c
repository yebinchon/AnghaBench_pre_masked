
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radio_isa_card {scalar_t__ io; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct radio_isa_card *VAR_0, bool VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1)
  VAR_2 = 0;
 VAR_2 = VAR_2 + (VAR_2 * 32);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_2 & (0x80 >> VAR_3))
   FUNC_0(0x80, VAR_0->io + 1);
  else
   FUNC_0(0x00, VAR_0->io + 1);
 }
 return 0;
}
