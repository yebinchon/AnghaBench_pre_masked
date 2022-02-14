
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54s_priv {int fw_state; int fw_comp; } ;



 void* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct p54s_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct p54s_priv *VAR_4)
{
 FUNC_2(VAR_4, VAR_1, FUNC_1(
         VAR_3 | VAR_2));

 switch (VAR_4->fw_state) {
 case 129:
  VAR_4->fw_state = VAR_0;
  FUNC_0(&VAR_4->fw_comp);
  break;
 case 128:
  VAR_4->fw_state = VAR_0;

  break;
 default:
  break;
 }
}
