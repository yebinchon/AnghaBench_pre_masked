
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ,int*) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int) ;

int FUNC_2(struct rtsx_chip *VAR_6, u8 VAR_7, u16 *VAR_8)
{
 int VAR_9;
 bool VAR_10 = 0;
 int VAR_11;
 u16 VAR_12 = 0;
 u8 VAR_13;

 VAR_9 = FUNC_1(VAR_6, VAR_0, 0xFF, VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_6, VAR_3, 0xFF, 0x80);
 if (VAR_9)
  return VAR_9;

 for (VAR_11 = 0; VAR_11 < 100000; VAR_11++) {
  VAR_9 = FUNC_0(VAR_6, VAR_3, &VAR_13);
  if (VAR_9)
   return VAR_9;
  if (!(VAR_13 & 0x80)) {
   VAR_10 = 1;
   break;
  }
 }

 if (!VAR_10)
  return VAR_4;

 VAR_9 = FUNC_0(VAR_6, VAR_1, &VAR_13);
 if (VAR_9)
  return VAR_9;
 VAR_12 = VAR_13;
 VAR_9 = FUNC_0(VAR_6, VAR_2, &VAR_13);
 if (VAR_9)
  return VAR_9;
 VAR_12 |= (u16)VAR_13 << 8;

 if (VAR_8)
  *VAR_8 = VAR_12;

 return VAR_5;
}
