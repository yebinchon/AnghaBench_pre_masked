
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint16_t ;
typedef unsigned char u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;


 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 char* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*,unsigned int,int ) ;

char *FUNC_7(const u8 *VAR_3, int VAR_4, uint8_t VAR_5)
{
 unsigned char VAR_6, VAR_7;
 unsigned int VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_3(",%d", VAR_4);

 FUNC_1(VAR_4 < 2 || VAR_4 > 514);

 VAR_6 = VAR_3[0] + VAR_3[1];
 VAR_15 = 1;
 for (VAR_10 = 2; VAR_10 < VAR_4; VAR_10++) {
  VAR_7 = VAR_3[VAR_10];
  VAR_6 += VAR_7;
  VAR_15 &= VAR_1[VAR_7];
 }

 if (VAR_15) {

  VAR_12 = VAR_4 - 2;
  VAR_12 += 2;
  VAR_12 += 5;
  VAR_12 += 3 * 2;


  VAR_12 += 1;
 } else {

  VAR_4 = (VAR_4 + 2) / 3;

  VAR_12 = VAR_4 * 4;
  VAR_12 += 5;
  VAR_12 += 3 * 2;


  VAR_12 += 1;
 }

 VAR_12 += 1;

 FUNC_2("max: %d", VAR_12);

 VAR_9 = FUNC_5(VAR_12, VAR_2);
 if (!VAR_9)
  return ((void*)0);

 VAR_11 = 0;


 FUNC_6(VAR_9, "@%02x%c+", (unsigned) VAR_6, 0);
 VAR_11 = 5;
 VAR_14 = VAR_11 - 1;

 if (VAR_15) {
  VAR_8 = *(uint16_t *) VAR_3;
  VAR_3 += 2;

  VAR_9[VAR_11 + 1] = VAR_0[VAR_8 & 63];
  VAR_8 >>= 6;
  VAR_9[VAR_11] = VAR_0[VAR_8 & 63];
  VAR_11 += 2;

  VAR_13 = 250;
  for (VAR_10 = VAR_4; VAR_10 > 0; VAR_10--) {
   if (VAR_13 <= 0) {
    VAR_9[VAR_11++] = '\0';
    VAR_14 = VAR_11;
    VAR_9[VAR_11++] = '+';
    VAR_13 = 252;
   }

   VAR_9[VAR_11++] = *VAR_3++;
   FUNC_0(VAR_11 < VAR_12);
  }

  switch (VAR_5) {
  case 128: VAR_5 = 'I'; break;
  case 129: VAR_5 = 'D'; break;
  default: VAR_5 = 'S'; break;
  }
 } else {
  VAR_13 = 252;
  for (VAR_10 = VAR_4; VAR_10 > 0; VAR_10--) {
   if (VAR_13 <= 0) {
    VAR_9[VAR_11++] = '\0';
    VAR_14 = VAR_11;
    VAR_9[VAR_11++] = '+';
    VAR_13 = 252;
   }

   VAR_8 = *VAR_3++;
   VAR_8 |= *VAR_3++ << 8;
   VAR_8 |= *VAR_3++ << 16;

   FUNC_2("acc: %06x", VAR_8);

   VAR_9[VAR_11++] = VAR_0[VAR_8 & 63];
   VAR_8 >>= 6;
   VAR_9[VAR_11++] = VAR_0[VAR_8 & 63];
   VAR_8 >>= 6;
   VAR_9[VAR_11++] = VAR_0[VAR_8 & 63];
   VAR_8 >>= 6;
   VAR_9[VAR_11++] = VAR_0[VAR_8 & 63];

   FUNC_0(VAR_11 < VAR_12);
  }

  switch (VAR_5) {
  case 128: VAR_5 = 'J'; break;
  case 129: VAR_5 = 'E'; break;
  default: VAR_5 = 'T'; break;
  }
 }

 VAR_9[VAR_14] = VAR_5;
 VAR_9[VAR_11++] = 0;
 VAR_9[VAR_11] = 0;

 FUNC_4(" = %p %d", VAR_9, VAR_11);
 return VAR_9;
}
