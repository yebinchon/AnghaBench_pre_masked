
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm6242_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msm6242_priv*,int ,int ) ;
 int FUNC_1 (struct msm6242_priv*,int ) ;
 int FUNC_2 (struct msm6242_priv*,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct msm6242_priv *VAR_3)
{
 int VAR_4 = 5;

 FUNC_2(VAR_3, VAR_2, VAR_0);

 while ((FUNC_1(VAR_3, VAR_0) & VAR_1) && VAR_4) {
  FUNC_0(VAR_3, VAR_2, VAR_0);
  FUNC_4(70);
  FUNC_2(VAR_3, VAR_2, VAR_0);
  VAR_4--;
 }

 if (!VAR_4)
  FUNC_3("timed out waiting for RTC (0x%x)\n",
   FUNC_1(VAR_3, VAR_0));
}
