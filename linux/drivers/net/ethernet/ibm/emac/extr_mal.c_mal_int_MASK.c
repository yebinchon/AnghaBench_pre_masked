
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mal_instance {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mal_instance*,int ) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct mal_instance *VAR_7 = VAR_6;
 u32 VAR_8 = FUNC_0(VAR_7, VAR_1);

 if (VAR_8 & VAR_4) {

  if (VAR_8 & VAR_3) {
   if (VAR_8 & VAR_2)
    return FUNC_1(VAR_5, VAR_6);
   else
    return FUNC_3(VAR_5, VAR_6);
  } else {
   return FUNC_2(VAR_5, VAR_6);
  }
 }
 return VAR_0;
}
