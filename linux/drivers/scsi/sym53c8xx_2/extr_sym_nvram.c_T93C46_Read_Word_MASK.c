
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_device {int dummy; } ;


 int FUNC_0 (struct sym_device*,int*,unsigned char*) ;

__attribute__((used)) static void FUNC_1(struct sym_device *VAR_0,
  unsigned short *VAR_1, unsigned char *VAR_2)
{
 int VAR_3;
 u_char VAR_4;

 *VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_0(VAR_0, &VAR_4, VAR_2);

  if (VAR_4 & 0x01)
   *VAR_1 |= (0x01 << (15 - VAR_3));
  else
   *VAR_1 &= ~(0x01 << (15 - VAR_3));
 }
}
