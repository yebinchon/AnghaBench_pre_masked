
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7134_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int,int) ;

void FUNC_3(struct saa7134_dev *VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = 1 << VAR_4;
 switch (VAR_5) {
 case 0:
 case 1:
  FUNC_0("setting GPIO%d to static %d\n", VAR_4, VAR_5);

  if (VAR_6 & 0x00c00000)
   FUNC_1(VAR_2, 0x0f, 0x00);
  if (VAR_5)
   VAR_7 = VAR_6;
  else
   VAR_7 = 0;
  FUNC_2(VAR_0 >> 2, VAR_6, VAR_6);
  FUNC_2(VAR_1 >> 2, VAR_6, VAR_7);
  break;
 case 3:
  FUNC_0("setting GPIO%d to tristate\n", VAR_4);
  FUNC_2(VAR_0 >> 2, VAR_6, 0);
  break;
 }
}
