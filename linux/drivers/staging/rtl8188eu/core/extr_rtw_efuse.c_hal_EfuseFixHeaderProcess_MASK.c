
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct pgpkt {int word_cnts; int offset; int word_en; } ;
struct adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (struct adapter*,int ,int*) ;
 scalar_t__ FUNC_2 (struct adapter*,int ,int,int*) ;
 int FUNC_3 (struct adapter*,scalar_t__,int ,int*) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static bool FUNC_5(struct adapter *VAR_0, u8 VAR_1, struct pgpkt *VAR_2, u16 *VAR_3)
{
 u8 VAR_4[8], VAR_5 = 0;
 u16 VAR_6 = *VAR_3;
 u32 VAR_7 = 0;

 FUNC_4(VAR_4, 0xff, 8);

 if (FUNC_1(VAR_0, VAR_2->offset, VAR_4)) {

  VAR_5 = FUNC_3(VAR_0, VAR_6 + 1, VAR_2->word_en, VAR_4);

  if (VAR_5 != 0xf) {
   VAR_7 = FUNC_2(VAR_0, VAR_2->offset, VAR_5, VAR_4);

   if (!VAR_7)
    return 0;
   else
    VAR_6 = FUNC_0(VAR_0);
  } else {
   VAR_6 = VAR_6 + (VAR_2->word_cnts * 2) + 1;
  }
 } else {
  VAR_6 = VAR_6 + (VAR_2->word_cnts * 2) + 1;
 }
 *VAR_3 = VAR_6;
 return 1;
}
