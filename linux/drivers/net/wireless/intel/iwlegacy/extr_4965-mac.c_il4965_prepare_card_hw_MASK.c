
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int hw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_4)
{
 int VAR_5;

 VAR_4->hw_ready = 0;

 FUNC_1(VAR_4);
 if (VAR_4->hw_ready)
  return;


 FUNC_2(VAR_4, VAR_0, VAR_2);

 VAR_5 =
     FUNC_0(VAR_4, VAR_0,
    ~VAR_1,
    VAR_1, 150000);


 if (VAR_5 != -VAR_3)
  FUNC_1(VAR_4);
}
