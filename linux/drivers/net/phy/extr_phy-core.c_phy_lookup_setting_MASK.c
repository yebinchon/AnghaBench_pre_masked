
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_setting {scalar_t__ bit; int speed; int duplex; } ;


 int FUNC_0 (struct phy_setting*) ;
 scalar_t__ VAR_0 ;
 struct phy_setting* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long const*) ;

const struct phy_setting *
FUNC_2(int VAR_2, int VAR_3, const unsigned long *VAR_4, bool VAR_5)
{
 const struct phy_setting *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9;

 for (VAR_9 = 0, VAR_6 = VAR_1; VAR_9 < FUNC_0(VAR_1); VAR_9++, VAR_6++) {
  if (VAR_6->bit < VAR_0 &&
      FUNC_1(VAR_6->bit, VAR_4)) {
   VAR_8 = VAR_6;
   if (VAR_6->speed == VAR_2 && VAR_6->duplex == VAR_3) {

    VAR_7 = VAR_6;
    break;
   } else if (!VAR_5) {
    if (!VAR_7 && VAR_6->speed <= VAR_2)

     VAR_7 = VAR_6;

    if (VAR_6->speed < VAR_2)
     break;
   }
  }
 }

 if (!VAR_7 && !VAR_5)
  VAR_7 = VAR_8;

 return VAR_7;
}
