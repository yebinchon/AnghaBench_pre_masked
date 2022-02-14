
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {int ds; } ;
struct dsa_switch {int * ports; struct mt7530_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mt7530_priv*,int ,int ,int ) ;
 int FUNC_8 (struct mt7530_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct dsa_switch *VAR_7, int VAR_8)
{
 struct mt7530_priv *VAR_9 = VAR_7->priv;
 bool VAR_10 = 1;
 int VAR_11;





 FUNC_7(VAR_9, FUNC_0(VAR_8), VAR_4,
     VAR_2);
 FUNC_7(VAR_9, FUNC_1(VAR_8), VAR_6,
     FUNC_3(VAR_3));

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (FUNC_4(VAR_7, VAR_11) &&
      FUNC_5(&VAR_7->ports[VAR_11])) {
   VAR_10 = 0;
   break;
  }
 }




 if (VAR_10) {
  FUNC_8(VAR_9, FUNC_0(VAR_0),
        FUNC_2(FUNC_6(VAR_9->ds)));
  FUNC_8(VAR_9, FUNC_1(VAR_0),
        VAR_5);
 }
}
