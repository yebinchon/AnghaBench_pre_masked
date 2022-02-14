
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ocelot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct ocelot*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ocelot *VAR_3, u8 VAR_4, bool VAR_5,
    u32 *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_4);
 if (VAR_7 == VAR_2) {
  if (VAR_5)
   return -VAR_0;

  do {
   VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_4);
  } while (VAR_7 == VAR_2);
 }

 switch (VAR_7) {
 case 134:
  return -VAR_0;
 case 133:
 case 132:
 case 131:
 case 130:
 case 128:
  VAR_8 = FUNC_0(VAR_7);
  VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_4);
  if (VAR_7 == 129)
   *VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4);
  else
   *VAR_6 = VAR_7;

  return VAR_8;
 case 129:
  *VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4);

  return 4;
 default:
  *VAR_6 = VAR_7;

  return 4;
 }
}
