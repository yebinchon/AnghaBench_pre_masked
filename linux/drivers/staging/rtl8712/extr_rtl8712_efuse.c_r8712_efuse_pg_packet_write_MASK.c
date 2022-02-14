
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const,int const) ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct _adapter*,scalar_t__,int*) ;
 int FUNC_3 (struct _adapter*,scalar_t__,int const) ;
 int FUNC_4 (struct _adapter*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (struct _adapter*) ;
 int FUNC_6 (struct _adapter*,int ) ;

u8 FUNC_7(struct _adapter *VAR_3, const u8 VAR_4,
          const u8 VAR_5, const u8 *VAR_6)
{
 u8 VAR_7 = 0;
 u16 VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10, VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 u8 VAR_14 = 1;


 VAR_10 = FUNC_6(VAR_3, VAR_0);
 if (VAR_10 != 0x03)
  return 0;
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 VAR_11 = FUNC_1(VAR_5);
 VAR_12 = 0;
 VAR_8 = 0;
 while (VAR_8 < VAR_2) {
  VAR_9 = FUNC_5(VAR_3);
  if ((VAR_9 + 1 + VAR_11 * 2) >
       VAR_2)
   return 0;
  VAR_8 = VAR_9;
  FUNC_3(VAR_3, VAR_8, VAR_7);
  VAR_13 = 0;

  while (!FUNC_2(VAR_3, VAR_8,
         &VAR_10)) {
   if (++VAR_13 > VAR_1) {
    VAR_14 = 0;
    break;
   }
  }
  if ((VAR_13 > VAR_1) ||
      (VAR_7 == VAR_10)) {

   u8 VAR_15;


   VAR_8++;
   for (VAR_15 = 0; VAR_15 < VAR_11 * 2; VAR_15++) {
    FUNC_3(VAR_3,
           VAR_8 + VAR_15,
           *(VAR_6 + VAR_15));
    if (!FUNC_2(VAR_3,
        VAR_8 + VAR_15,
        &VAR_10))
     VAR_14 = 0;
    else if (*(VAR_6 + VAR_15) != VAR_10)
     VAR_14 = 0;
   }
   break;
  }

  VAR_14 = 0;
  if (VAR_10 == 0xFF)
   return VAR_14;

  if (!FUNC_4(VAR_3, VAR_10, VAR_8))
   return 0;

  if (++VAR_12 > VAR_1)
   break;

 }
 return VAR_14;
}
