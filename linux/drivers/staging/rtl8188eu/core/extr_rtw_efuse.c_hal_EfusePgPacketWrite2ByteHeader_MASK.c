
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct pgpkt {int offset; int word_en; int word_cnts; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,scalar_t__,int*) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;
 int FUNC_3 (struct adapter*,int,struct pgpkt*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_4(struct adapter *VAR_3, u8 VAR_4, u16 *VAR_5, struct pgpkt *VAR_6)
{
 bool VAR_7 = 0;
 u16 VAR_8 = *VAR_5;
 u16 VAR_9 =
  VAR_1 - VAR_0;
 u8 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 u8 VAR_13 = 0;

 while (VAR_8 < VAR_9) {
  VAR_10 = ((VAR_6->offset & 0x07) << 5) | 0x0F;
  FUNC_2(VAR_3, VAR_8, VAR_10);
  FUNC_1(VAR_3, VAR_8, &VAR_11);

  while (VAR_11 == 0xFF) {
   if (VAR_13++ > VAR_2)
    return 0;

   FUNC_2(VAR_3, VAR_8, VAR_10);
   FUNC_1(VAR_3, VAR_8, &VAR_11);
  }


  if (VAR_11 == VAR_10) {
   VAR_8++;
   VAR_12 = VAR_10;
   VAR_10 = ((VAR_6->offset & 0x78) << 1) | VAR_6->word_en;

   FUNC_2(VAR_3, VAR_8, VAR_10);
   FUNC_1(VAR_3, VAR_8, &VAR_11);

   while (VAR_11 == 0xFF) {
    if (VAR_13++ > VAR_2)
     return 0;

    FUNC_2(VAR_3, VAR_8, VAR_10);
    FUNC_1(VAR_3, VAR_8, &VAR_11);
   }

   if ((VAR_11 & 0x0F) == 0x0F) {
    if (VAR_13++ > VAR_2)
     return 0;

    VAR_8++;
    continue;
   } else if (VAR_10 != VAR_11) {
    struct pgpkt VAR_14;

    VAR_14.offset = ((VAR_12 & 0xE0) >> 5) | ((VAR_11 & 0xF0) >> 1);
    VAR_14.word_en = VAR_11 & 0x0F;
    VAR_14.word_cnts = FUNC_0(VAR_14.word_en);
    if (!FUNC_3(VAR_3, VAR_4, &VAR_14, &VAR_8))
     return 0;
   } else {
    VAR_7 = 1;
    break;
   }
  } else if ((VAR_11 & 0x1F) == 0x0F) {
   VAR_8 += 2;
   continue;
  }
 }

 *VAR_5 = VAR_8;
 return VAR_7;
}
