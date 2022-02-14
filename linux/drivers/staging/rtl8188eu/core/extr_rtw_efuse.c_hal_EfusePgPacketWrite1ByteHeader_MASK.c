
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pgpkt {int offset; int word_en; int word_cnts; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int ,int*) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int FUNC_3 (struct adapter*,int,struct pgpkt*,int *) ;

__attribute__((used)) static bool FUNC_4(struct adapter *VAR_1, u8 VAR_2, u16 *VAR_3, struct pgpkt *VAR_4)
{
 bool VAR_5 = 0;
 u8 VAR_6 = 0, VAR_7 = 0;
 u16 VAR_8 = *VAR_3;
 u8 VAR_9 = 0;

 VAR_6 = ((VAR_4->offset << 4) & 0xf0) | VAR_4->word_en;

 FUNC_2(VAR_1, VAR_8, VAR_6);
 FUNC_1(VAR_1, VAR_8, &VAR_7);

 while (VAR_7 == 0xFF) {
  if (VAR_9++ > VAR_0)
   return 0;
  FUNC_2(VAR_1, VAR_8, VAR_6);
  FUNC_1(VAR_1, VAR_8, &VAR_7);
 }

 if (VAR_6 == VAR_7) {
  VAR_5 = 1;
 } else {
  struct pgpkt VAR_10;

  VAR_10.offset = (VAR_7 >> 4) & 0x0F;
  VAR_10.word_en = VAR_7 & 0x0F;
  VAR_10.word_cnts = FUNC_0(VAR_10.word_en);
  if (!FUNC_3(VAR_1, VAR_2, &VAR_10, &VAR_8))
   return 0;
 }

 *VAR_3 = VAR_8;
 return VAR_5;
}
