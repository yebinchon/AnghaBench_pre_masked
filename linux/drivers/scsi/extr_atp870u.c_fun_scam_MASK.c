
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_unit {int dummy; } ;


 int FUNC_0 (struct atp_unit*,int ,int) ;
 int FUNC_1 (struct atp_unit*,int ,int,unsigned short) ;

__attribute__((used)) static unsigned char FUNC_2(struct atp_unit *VAR_0, unsigned short int *VAR_1)
{
 unsigned short int VAR_2, VAR_3;
 unsigned char VAR_4;

 FUNC_1(VAR_0, 0, 0x1c, *VAR_1);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, 0, 0x1c);
  VAR_4 = (unsigned char) (VAR_3 >> 8);
  if ((VAR_3 & 0x8000) != 0)
   VAR_2 = 0;
 }
 *VAR_1 |= 0x4000;
 FUNC_1(VAR_0, 0, 0x1c, *VAR_1);
 *VAR_1 &= 0xdfff;
 FUNC_1(VAR_0, 0, 0x1c, *VAR_1);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  if ((FUNC_0(VAR_0, 0, 0x1c) & 0x2000) != 0)
   VAR_2 = 0;
 }
 *VAR_1 |= 0x8000;
 *VAR_1 &= 0xe0ff;
 FUNC_1(VAR_0, 0, 0x1c, *VAR_1);
 *VAR_1 &= 0xbfff;
 FUNC_1(VAR_0, 0, 0x1c, *VAR_1);
 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  if ((FUNC_0(VAR_0, 0, 0x1c) & 0x4000) != 0)
   VAR_2 = 0;
 }

 return VAR_4;
}
