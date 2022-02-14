
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (size_t,int ) ;

__attribute__((used)) static int FUNC_1(u16 VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_5) {
  if (!VAR_2[VAR_4]) {
   VAR_6 = FUNC_0(VAR_4, VAR_0);
   if (VAR_6 < 0)
    return VAR_6;
  }
  VAR_3[VAR_4] = 0;
 } else {
  if (VAR_3[VAR_4]) {
   VAR_6 = FUNC_0(VAR_4, VAR_1);
   if (VAR_6 < 0)
    return VAR_6;
  } else {
   VAR_6 = FUNC_0(VAR_4, VAR_0);
   if (VAR_6 < 0)
    return VAR_6;
  }
  VAR_2[VAR_4] = 0;
 }

 return 0;
}
