
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_address_info {unsigned int ioaddr; int reg_nr; scalar_t__ mohawk; int page_nr; } ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct set_address_info *VAR_0, char *VAR_1)
{
 unsigned int VAR_2 = VAR_0->ioaddr;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  if (VAR_0->reg_nr > 15) {
   VAR_0->reg_nr = 8;
   VAR_0->page_nr++;
   FUNC_1(VAR_0->page_nr);
  }
  if (VAR_0->mohawk)
   FUNC_0(VAR_0->reg_nr++, VAR_1[5 - VAR_3]);
  else
   FUNC_0(VAR_0->reg_nr++, VAR_1[VAR_3]);
 }
}
