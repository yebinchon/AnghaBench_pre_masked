
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ams369fg06 {int dummy; } ;


 unsigned short const VAR_0 ;
 unsigned short const VAR_1 ;
 unsigned short const VAR_2 ;
 int FUNC_0 (struct ams369fg06*,unsigned short const,unsigned short const) ;
 int FUNC_1 (unsigned short const) ;

__attribute__((used)) static int FUNC_2(struct ams369fg06 *VAR_3,
 const unsigned short *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 while ((VAR_4[VAR_6] & VAR_0) != VAR_1) {
  if ((VAR_4[VAR_6] & VAR_0) != VAR_2) {
   VAR_5 = FUNC_0(VAR_3, VAR_4[VAR_6], VAR_4[VAR_6+1]);
   if (VAR_5)
    break;
  } else {
   FUNC_1(VAR_4[VAR_6+1]);
  }
  VAR_6 += 2;
 }

 return VAR_5;
}
