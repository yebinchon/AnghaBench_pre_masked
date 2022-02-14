
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {scalar_t__ id; int ds; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mt7530_priv*,int ,int ,int) ;
 int FUNC_9 (struct mt7530_priv*,int ,int ) ;
 int FUNC_10 (struct mt7530_priv*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct mt7530_priv *VAR_6,
         int VAR_7)
{

 FUNC_10(VAR_6, FUNC_4(VAR_7),
       VAR_4);


 FUNC_9(VAR_6, FUNC_3(VAR_7), VAR_5);


 FUNC_9(VAR_6, VAR_3, FUNC_6(FUNC_0(VAR_7)));


 if (VAR_6->id == VAR_2)
  FUNC_8(VAR_6, VAR_3, VAR_1, VAR_0 | FUNC_1(VAR_7));




 FUNC_10(VAR_6, FUNC_2(VAR_7),
       FUNC_5(FUNC_7(VAR_6->ds)));

 return 0;
}
