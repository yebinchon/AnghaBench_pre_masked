
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef size_t u16 ;


 size_t FUNC_0 (int,int,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(u8 *VAR_5, u16 *VAR_6,
      u32 VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u8 VAR_11;


 VAR_11 = 0;
 VAR_10 = 0;


 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_5[VAR_11] =
   FUNC_0(VAR_8, 0, VAR_1);
  VAR_11++;
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  VAR_5[VAR_11] =
   FUNC_0(VAR_8, 0, VAR_3);
  VAR_11++;
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
   VAR_5[VAR_11] =
   FUNC_0(VAR_9, VAR_8, VAR_2);
   VAR_11++;
  }
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
   VAR_5[VAR_11] =
   FUNC_0(VAR_9, VAR_8, VAR_2);
   VAR_11++;
  }
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
   VAR_5[VAR_11] =
   FUNC_0(VAR_9, VAR_8, VAR_4);
   VAR_11++;
  }
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
   VAR_5[VAR_11] =
   FUNC_0(VAR_9, VAR_8, VAR_4);
   VAR_11++;
  }
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
   VAR_5[VAR_11] =
   FUNC_0(VAR_9, VAR_8, VAR_4);
   VAR_11++;
  }
 }
 VAR_6[VAR_10] = VAR_11;
 VAR_10++;

 VAR_5[VAR_11++] =
  FUNC_0(0, 0, VAR_1);
 VAR_5[VAR_11++] =
  FUNC_0(0, 0, VAR_3);
 VAR_5[VAR_11++] =
  FUNC_0(0, 0, VAR_1);
 VAR_5[VAR_11++] =
  FUNC_0(0, 0, VAR_3);
 VAR_5[VAR_11++] =
  FUNC_0(0, 0, VAR_3);

 VAR_6[VAR_10] = VAR_0;
}
