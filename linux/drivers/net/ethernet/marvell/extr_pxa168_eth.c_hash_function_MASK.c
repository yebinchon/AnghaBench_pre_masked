
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;

__attribute__((used)) static u32 FUNC_3(unsigned char *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 unsigned char VAR_7[VAR_0];




 FUNC_1(VAR_7, VAR_1, VAR_0);

 FUNC_2(VAR_7);
 FUNC_0(VAR_7);

 VAR_3 = (VAR_7[5] >> 2) & 0x3f;
 VAR_4 = (VAR_7[5] & 0x03) | (((VAR_7[4] & 0x7f)) << 2);
 VAR_5 = ((VAR_7[4] & 0x80) >> 7) | VAR_7[3] << 1;
 VAR_6 = (VAR_7[2] & 0xff) | ((VAR_7[1] & 1) << 8);

 VAR_2 = (VAR_3 << 9) | (VAR_4 ^ VAR_5 ^ VAR_6);
 VAR_2 = VAR_2 & 0x07ff;
 return VAR_2;
}
