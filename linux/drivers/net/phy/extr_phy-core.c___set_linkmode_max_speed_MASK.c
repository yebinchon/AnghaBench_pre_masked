
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct phy_setting {scalar_t__ speed; int bit; } ;


 int FUNC_0 (struct phy_setting*) ;
 int FUNC_1 (int ,unsigned long*) ;
 struct phy_setting* VAR_0 ;

__attribute__((used)) static int FUNC_2(u32 VAR_1, unsigned long *VAR_2)
{
 const struct phy_setting *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_0; VAR_4 < FUNC_0(VAR_0); VAR_4++, VAR_3++) {
  if (VAR_3->speed > VAR_1)
   FUNC_1(VAR_3->bit, VAR_2);
  else
   break;
 }

 return 0;
}
