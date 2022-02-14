
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct _adapter {int dummy; } ;
struct PGPKT_STRUCT {int offset; int word_en; int* data; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct _adapter*,scalar_t__,int*) ;
 int FUNC_5 (struct _adapter*,scalar_t__,int) ;

__attribute__((used)) static u8 FUNC_6(struct _adapter *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct PGPKT_STRUCT VAR_5;
 u8 VAR_6, VAR_7, VAR_8;
 u16 VAR_9;
 int VAR_10;
 u8 VAR_11 = 1;

 VAR_5.offset = FUNC_1(VAR_3);
 VAR_5.word_en = FUNC_2(VAR_3);
 VAR_9 = VAR_4 + 1 + FUNC_3(VAR_5.word_en) * 2;
 if (VAR_9 > VAR_1)
  return 0;

 VAR_9 = 0;
 while (VAR_9 < VAR_4) {
  if (!FUNC_4(VAR_2, VAR_9++, &VAR_8)) {
   VAR_11 = 0;
   break;
  }
  VAR_6 = FUNC_1(VAR_8);
  VAR_7 = FUNC_2(VAR_8);
  if (VAR_5.offset != VAR_6) {
   VAR_9 += FUNC_3(VAR_7) * 2;
   continue;
  }
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (FUNC_0(VAR_10) & VAR_7) {
    if (FUNC_0(VAR_10) & VAR_5.word_en) {
     if (FUNC_4(
       VAR_2, VAR_9,
       &VAR_8))
      VAR_5.data[VAR_10 * 2] = VAR_8;
     else
      return 0;
     if (FUNC_4(
       VAR_2,
       VAR_9 + 1,
       &VAR_8))
      VAR_5.data[VAR_10 * 2 + 1] =
       VAR_8;
     else
      return 0;
    }
    VAR_9 += 2;
   }
  }
 }
 if (VAR_9 != VAR_4)
  return 0;
 VAR_9++;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (FUNC_0(VAR_10) & VAR_5.word_en) {
   FUNC_5(VAR_2, VAR_9, VAR_5.data[VAR_10 * 2]);
   FUNC_5(VAR_2, VAR_9 + 1,
          VAR_5.data[VAR_10 * 2 + 1]);

   if (!FUNC_4(VAR_2, VAR_9, &VAR_8)) {
    VAR_11 = 0;
   } else if (VAR_5.data[VAR_10 * 2] != VAR_8) {
    VAR_11 = 0;
    if (VAR_8 == 0xFF)
     FUNC_5(VAR_2, VAR_9,
            VAR_5.data[VAR_10 * 2]);
   }
   if (!FUNC_4(VAR_2, VAR_9 + 1, &VAR_8)) {
    VAR_11 = 0;
   } else if (VAR_5.data[VAR_10 * 2 + 1] != VAR_8) {
    VAR_11 = 0;
    if (VAR_8 == 0xFF)
     FUNC_5(VAR_2, VAR_9 + 1,
            VAR_5.data[VAR_10 * 2 +
              1]);
   }
  }
  VAR_9 += 2;
 }
 return VAR_11;
}
