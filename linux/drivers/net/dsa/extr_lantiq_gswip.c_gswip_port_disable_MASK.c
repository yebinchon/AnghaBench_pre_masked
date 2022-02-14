
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dsa_switch*,int) ;
 int FUNC_5 (struct dsa_switch*,int) ;
 int FUNC_6 (struct gswip_priv*,int ,int ,int ) ;
 int FUNC_7 (struct gswip_priv*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct dsa_switch *VAR_5, int VAR_6)
{
 struct gswip_priv *VAR_7 = VAR_5->priv;

 if (!FUNC_5(VAR_5, VAR_6))
  return;

 if (!FUNC_4(VAR_5, VAR_6)) {
  FUNC_6(VAR_7, VAR_2,
    VAR_3,
    FUNC_2(VAR_6));

  FUNC_6(VAR_7, FUNC_0(VAR_6), 0, VAR_1);
 }

 FUNC_7(VAR_7, VAR_0, 0,
     FUNC_1(VAR_6));
 FUNC_7(VAR_7, VAR_4, 0,
     FUNC_3(VAR_6));
}
