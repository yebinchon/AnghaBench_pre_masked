
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct mvpp2*,int,int,int ,int ) ;

int FUNC_1(struct mvpp2 *VAR_5, int VAR_6, int VAR_7)
{
 switch (VAR_7) {
 case 130:

  FUNC_0(VAR_5, VAR_6, 1,
          VAR_3, VAR_2);
  FUNC_0(VAR_5, VAR_6, 1,
          VAR_4, VAR_2);

  FUNC_0(VAR_5, VAR_6, 0,
          VAR_3, VAR_1);
  FUNC_0(VAR_5, VAR_6, 0,
          VAR_4, VAR_1);
  break;

 case 131:

  FUNC_0(VAR_5, VAR_6, 1,
          VAR_3, VAR_1);
  FUNC_0(VAR_5, VAR_6, 1,
          VAR_4, VAR_1);

  FUNC_0(VAR_5, VAR_6, 0,
          VAR_3, VAR_2);
  FUNC_0(VAR_5, VAR_6, 0,
          VAR_4, VAR_2);
  break;

 case 129:
 case 128:

  FUNC_0(VAR_5, VAR_6, 0,
          VAR_3, VAR_1);
  FUNC_0(VAR_5, VAR_6, 0,
          VAR_4, VAR_1);
  FUNC_0(VAR_5, VAR_6, 0,
          VAR_3, VAR_2);
  FUNC_0(VAR_5, VAR_6, 0,
          VAR_4, VAR_2);
  break;

 default:
  if ((VAR_7 < 0) || (VAR_7 > 130))
   return -VAR_0;
 }

 return 0;
}
