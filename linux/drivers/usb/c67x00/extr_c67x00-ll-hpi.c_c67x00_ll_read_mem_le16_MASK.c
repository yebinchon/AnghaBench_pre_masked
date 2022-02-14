
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct c67x00_device {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (struct c67x00_device*,int) ;
 int FUNC_1 (struct c67x00_device*,int,int *,int) ;

void FUNC_2(struct c67x00_device *VAR_0, u16 VAR_1,
        void *VAR_2, int VAR_3)
{
 u8 *VAR_4 = VAR_2;

 if (VAR_1 & 0x01) {

  u16 VAR_5;
  VAR_5 = FUNC_0(VAR_0, VAR_1 - 1);
  *VAR_4++ = (VAR_5 >> 8) & 0x00ff;
  VAR_1++;
  VAR_3--;
 }

 FUNC_1(VAR_0, VAR_1, (__le16 *)VAR_4, VAR_3 / 2);
 VAR_4 += VAR_3 & ~0x01;
 VAR_1 += VAR_3 & ~0x01;
 VAR_3 &= 0x01;

 if (VAR_3) {
  u16 VAR_6;
  VAR_6 = FUNC_0(VAR_0, VAR_1);
  *VAR_4 = VAR_6 & 0x00ff;
 }
}
