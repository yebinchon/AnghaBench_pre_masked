
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int,int,int,int,int) ;

int FUNC_1(u8 *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_2 = VAR_0[0];
 VAR_3 = VAR_0[1];
 VAR_4 = VAR_0[2];
 VAR_5 = VAR_0[3];
 VAR_6 = VAR_0[4];
 VAR_7 = VAR_0[5];
 if (VAR_1 == 0) VAR_8 = VAR_0[6];
 else VAR_8 = 0;

 if (VAR_2 < 0) {
  VAR_9 = 0;
 } else {
  VAR_9 = FUNC_0(VAR_2+1900, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


  if (VAR_8 & 0x80)
   VAR_8 |= (-1 << 8);
  if (-52 <= VAR_8 && VAR_8 <= 52)
   VAR_9 -= VAR_8 * 15 * 60;
 }
 return VAR_9;
}
