
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4[VAR_5] == 0) {
   VAR_8 = 1;
   break;
  }
 }

 if (!VAR_8) {

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   if (VAR_4[VAR_5] == 0xFF)
    break;

   VAR_7 += VAR_4[VAR_5];
   if (VAR_7 > VAR_3) {
    VAR_8 = 1;
    break;
   }
  }
 }

 if (!VAR_8) {

  if (VAR_7 < VAR_3) {
   if (VAR_5 < VAR_2) {

    VAR_6 =
      (VAR_3 - VAR_7) /
     (VAR_2 - VAR_5);
    if (VAR_6 < 2)
     VAR_8 = 1;
    else {
     for (; VAR_5 < VAR_2;
      VAR_5++)
      VAR_4[VAR_5] =
       VAR_6;
    }
   }
  } else if (VAR_5 < VAR_2)
   VAR_8 = 1;
 }

 if (VAR_8) {
  FUNC_0(VAR_1,
   "%s: Assigning equal bandwidth to all the vpaths",
   VAR_0);
  VAR_4[0] = VAR_3 /
     VAR_2;
  for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
   VAR_4[VAR_5] = VAR_4[0];
 }
}
