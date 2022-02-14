
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
 int FUNC_0 (char*,void const*,int) ;
 int FUNC_1 (struct docg3*,int ,int) ;
 int FUNC_2 (struct docg3*,int,int) ;

__attribute__((used)) static void FUNC_3(struct docg3 *VAR_3, const void *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u16 *VAR_9;
 u8 *VAR_10;

 FUNC_0("doc_write_data_area(buf=%p, len=%d)\n", VAR_4, VAR_5);
 VAR_7 = VAR_5 & 0x3;
 VAR_8 = VAR_5 - VAR_7;

 FUNC_2(VAR_3, VAR_0, VAR_1);
 VAR_9 = (u16 *)VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6 += 2) {
  FUNC_2(VAR_3, *VAR_9, VAR_0);
  VAR_9++;
 }

 VAR_10 = (u8 *)VAR_9;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_2(VAR_3, VAR_0 | VAR_2,
      VAR_1);
  FUNC_1(VAR_3, *VAR_10, VAR_0);
  VAR_10++;
 }
}
