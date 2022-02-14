
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct docg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*,int) ;
 int FUNC_3 (struct docg3*,int) ;
 int FUNC_4 (struct docg3*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct docg3 *VAR_3, void *VAR_4, int VAR_5,
          int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u16 VAR_10, *VAR_11;
 u8 VAR_12, *VAR_13;

 FUNC_0("doc_read_data_area(buf=%p, len=%d)\n", VAR_4, VAR_5);
 VAR_8 = VAR_5 & 0x1;
 VAR_9 = VAR_5 - VAR_8;

 if (VAR_6)
  FUNC_4(VAR_3, VAR_0, VAR_1);
 VAR_11 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7 += 2) {
  VAR_10 = FUNC_3(VAR_3, VAR_0);
  if (VAR_11) {
   *VAR_11 = VAR_10;
   VAR_11++;
  }
 }

 if (VAR_8) {
  FUNC_4(VAR_3, VAR_0 | VAR_2,
      VAR_1);
  FUNC_1(VAR_3, 1);
  VAR_13 = (u8 *)VAR_11;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   VAR_12 = FUNC_2(VAR_3, VAR_0);
   if (VAR_13) {
    *VAR_13 = VAR_12;
    VAR_13++;
   }
  }
 }
}
