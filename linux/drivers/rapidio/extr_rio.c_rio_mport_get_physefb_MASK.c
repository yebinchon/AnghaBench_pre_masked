
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rio_mport*,int,int*) ;
 int FUNC_2 (struct rio_mport*,int,int ,int ,int) ;
 int FUNC_3 (struct rio_mport*,int ,int ,int,int*) ;

u32
FUNC_4(struct rio_mport *VAR_0, int VAR_1,
        u16 VAR_2, u8 VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, 0);

 while (VAR_5) {
  if (VAR_1)
   FUNC_1(VAR_0, VAR_5,
       &VAR_6);
  else
   FUNC_3(VAR_0, VAR_2, VAR_3,
       VAR_5, &VAR_6);

  VAR_6 = FUNC_0(VAR_6);
  switch (VAR_6) {

  case 133:
  case 130:
  case 134:
  case 132:
  case 129:
  case 138:
  case 136:
   *VAR_4 = 1;
   return VAR_5;

  case 131:
  case 128:
  case 137:
  case 135:
   *VAR_4 = 2;
   return VAR_5;

  default:
   break;
  }

  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_5);
 }

 return VAR_5;
}
