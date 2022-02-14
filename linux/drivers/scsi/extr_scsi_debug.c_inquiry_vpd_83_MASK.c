
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uuid_t ;
typedef int b ;


 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (scalar_t__,unsigned char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_5(unsigned char *VAR_5, int VAR_6,
     int VAR_7, int VAR_8,
     const char *VAR_9, int VAR_10,
     const uuid_t *VAR_11)
{
 int VAR_12, VAR_13;
 char VAR_14[32];

 VAR_13 = VAR_7 + 1;

 VAR_5[0] = 0x2;
 VAR_5[1] = 0x1;
 VAR_5[2] = 0x0;
 FUNC_0(&VAR_5[4], VAR_3, 8);
 FUNC_0(&VAR_5[12], VAR_2, 16);
 FUNC_0(&VAR_5[28], VAR_9, VAR_10);
 VAR_12 = 8 + 16 + VAR_10;
 VAR_5[3] = VAR_12;
 VAR_12 += 4;
 if (VAR_8 >= 0) {
  if (VAR_4) {

   VAR_5[VAR_12++] = 0x1;
   VAR_5[VAR_12++] = 0xa;
   VAR_5[VAR_12++] = 0x0;
   VAR_5[VAR_12++] = 0x12;
   VAR_5[VAR_12++] = 0x10;
   VAR_5[VAR_12++] = 0x0;
   FUNC_0(VAR_5 + VAR_12, VAR_11, 16);
   VAR_12 += 16;
  } else {

   VAR_5[VAR_12++] = 0x1;
   VAR_5[VAR_12++] = 0x3;
   VAR_5[VAR_12++] = 0x0;
   VAR_5[VAR_12++] = 0x8;
   FUNC_3(VAR_1 + VAR_8, VAR_5 + VAR_12);
   VAR_12 += 8;
  }

  VAR_5[VAR_12++] = 0x61;
  VAR_5[VAR_12++] = 0x94;
  VAR_5[VAR_12++] = 0x0;
  VAR_5[VAR_12++] = 0x4;
  VAR_5[VAR_12++] = 0x0;
  VAR_5[VAR_12++] = 0x0;
  VAR_5[VAR_12++] = 0x0;
  VAR_5[VAR_12++] = 0x1;
 }

 VAR_5[VAR_12++] = 0x61;
 VAR_5[VAR_12++] = 0x93;
 VAR_5[VAR_12++] = 0x0;
 VAR_5[VAR_12++] = 0x8;
 FUNC_3(VAR_0 + VAR_13, VAR_5 + VAR_12);
 VAR_12 += 8;

 VAR_5[VAR_12++] = 0x61;
 VAR_5[VAR_12++] = 0x95;
 VAR_5[VAR_12++] = 0x0;
 VAR_5[VAR_12++] = 0x4;
 VAR_5[VAR_12++] = 0;
 VAR_5[VAR_12++] = 0;
 FUNC_2(VAR_6, VAR_5 + VAR_12);
 VAR_12 += 2;

 VAR_5[VAR_12++] = 0x61;
 VAR_5[VAR_12++] = 0xa3;
 VAR_5[VAR_12++] = 0x0;
 VAR_5[VAR_12++] = 0x8;
 FUNC_3(VAR_0 + VAR_7, VAR_5 + VAR_12);
 VAR_12 += 8;

 VAR_5[VAR_12++] = 0x63;
 VAR_5[VAR_12++] = 0xa8;
 VAR_5[VAR_12++] = 0x0;
 VAR_5[VAR_12++] = 24;
 FUNC_0(VAR_5 + VAR_12, "naa.32222220", 12);
 VAR_12 += 12;
 FUNC_4(VAR_14, sizeof(VAR_14), "%08X", VAR_7);
 FUNC_0(VAR_5 + VAR_12, VAR_14, 8);
 VAR_12 += 8;
 FUNC_1(VAR_5 + VAR_12, 0, 4);
 VAR_12 += 4;
 return VAR_12;
}
