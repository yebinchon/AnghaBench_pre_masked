
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct pgpkt {int offset; int word_en; int word_cnts; int data; } ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct adapter*,int,int,int ) ;
 int FUNC_4 (struct adapter*,int,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct adapter*,int,int*) ;
 int FUNC_6 (struct adapter*,int,int) ;
 int FUNC_7 (struct adapter*,int ,int*) ;
 scalar_t__ FUNC_8 (struct pgpkt*,struct pgpkt*,int*) ;

__attribute__((used)) static bool FUNC_9(struct adapter *VAR_4, u8 VAR_5, u16 *VAR_6, struct pgpkt *VAR_7)
{
 bool VAR_8 = 0;
 u8 VAR_9, VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 =
  VAR_2 - VAR_0;
 struct pgpkt VAR_16;

 FUNC_7(VAR_4, VAR_3, (u8 *)&VAR_14);
 VAR_14 %= VAR_1;

 while (1) {
  if (VAR_14 >= VAR_15) {
   VAR_8 = 0;
   break;
  }

  if (FUNC_5(VAR_4, VAR_14, &VAR_10) && (VAR_10 != 0xFF)) {
   if (FUNC_1(VAR_10)) {
    VAR_11 = VAR_10;
    VAR_14++;
    FUNC_5(VAR_4, VAR_14, &VAR_10);
    if (FUNC_0(VAR_10)) {
     VAR_8 = 0;
     break;
    } else {
     VAR_16.offset = ((VAR_11 & 0xE0) >> 5) | ((VAR_10 & 0xF0) >> 1);
     VAR_16.word_en = VAR_10 & 0x0F;
    }
   } else {
    VAR_11 = VAR_10;
    VAR_16.offset = (VAR_11 >> 4) & 0x0F;
    VAR_16.word_en = VAR_11 & 0x0F;
   }

   VAR_16.word_cnts = FUNC_2(VAR_16.word_en);


   if ((VAR_16.offset == VAR_7->offset) &&
       (!FUNC_6(VAR_4, VAR_16.word_cnts, VAR_14 + 1)) &&
       FUNC_8(VAR_7, &VAR_16, &VAR_12)) {

    VAR_13 = FUNC_4(VAR_4, VAR_14 + 1, VAR_12, VAR_7->data);
    if (VAR_13 != 0x0F) {
     u32 VAR_17 = 0;


     VAR_17 = FUNC_3(VAR_4, VAR_7->offset, VAR_13, VAR_7->data);

     if (!VAR_17) {
      VAR_8 = 0;
      break;
     }
    }

    for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
     if ((VAR_12 & (0x1 << VAR_9)) == 0)
      VAR_7->word_en |= (0x1 << VAR_9);
    }
    VAR_7->word_cnts = FUNC_2(VAR_7->word_en);
   }

   VAR_14 = VAR_14 + (VAR_16.word_cnts * 2) + 1;
  } else {

   *VAR_6 = VAR_14;
   VAR_8 = 1;
   break;
  }
 }
 return VAR_8;
}
