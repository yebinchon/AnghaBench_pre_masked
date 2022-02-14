
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned char *VAR_2, unsigned char *VAR_3) {
 int VAR_4, VAR_5, VAR_6;
 unsigned char VAR_7 = 0, VAR_8, VAR_9[8] = {0};


 for (VAR_4 = 0; VAR_4 < 256; VAR_4++) {
  VAR_7 ^= VAR_2[VAR_4];
  VAR_8 = VAR_1[VAR_2[VAR_4]];
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   if ((VAR_4 & (1<<VAR_5)) == 0)
    VAR_9[VAR_5] ^= VAR_8;
 }


 VAR_6 = (VAR_9[3] << 6) + (VAR_9[2] << 4) + (VAR_9[1] << 2) + VAR_9[0];
 VAR_3[0] = ~(VAR_6 ^ (VAR_6<<1) ^ (VAR_1[VAR_7] ? 0xaa : 0));

 VAR_6 = (VAR_9[7] << 6) + (VAR_9[6] << 4) + (VAR_9[5] << 2) + VAR_9[4];
 VAR_3[1] = ~(VAR_6 ^ (VAR_6<<1) ^ (VAR_1[VAR_7] ? 0xaa : 0));

 VAR_3[2] = VAR_0[VAR_7];
}
