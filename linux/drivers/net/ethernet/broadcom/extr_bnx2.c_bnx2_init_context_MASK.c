
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct bnx2*,int,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct bnx2 *VAR_6)
{
 u32 VAR_7;

 VAR_7 = 96;
 while (VAR_7) {
  u32 VAR_8, VAR_9, VAR_10;
  int VAR_11;

  VAR_7--;

  if (FUNC_0(VAR_6) == VAR_0) {
   u32 VAR_12;

   VAR_8 = FUNC_3(VAR_7);
   if (VAR_7 & 0x8) {
    VAR_12 = 0x60 + (VAR_7 & 0xf0) + (VAR_7 & 0x7);
   }
   else {
    VAR_12 = VAR_7;
   }
   VAR_9 = FUNC_3(VAR_12);
  }
  else {
       VAR_8 = FUNC_2(VAR_7);
   VAR_9 = VAR_8;
  }

  for (VAR_11 = 0; VAR_11 < (VAR_3 / VAR_5); VAR_11++) {
   VAR_8 += (VAR_11 << VAR_4);
   VAR_9 += (VAR_11 << VAR_4);

   FUNC_1(VAR_6, VAR_2, VAR_8);
   FUNC_1(VAR_6, VAR_1, VAR_9);


   for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10 += 4)
    FUNC_4(VAR_6, VAR_8, VAR_10, 0);
  }
 }
}
