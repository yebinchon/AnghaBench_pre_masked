
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct il_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct il_priv*,int ,int ,int ,int ) ;
 int FUNC_1 (struct il_priv*,int ,int ) ;

int
FUNC_2(struct il_priv *VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

  FUNC_1(VAR_4, VAR_0,
      VAR_1);


  VAR_6 =
      FUNC_0(VAR_4, VAR_0,
     VAR_1,
     VAR_1,
     VAR_3);
  if (VAR_6 >= 0)
   return VAR_6;
 }

 return VAR_6;
}
