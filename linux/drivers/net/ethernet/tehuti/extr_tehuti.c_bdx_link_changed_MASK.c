
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bdx_priv {int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bdx_priv*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct bdx_priv *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, VAR_1) & VAR_0;

 if (!VAR_3) {
  if (FUNC_3(VAR_2->ndev)) {
   FUNC_5(VAR_2->ndev);
   FUNC_2(VAR_2->ndev);
   FUNC_1(VAR_2->ndev, "Link Down\n");
  }
 } else {
  if (!FUNC_3(VAR_2->ndev)) {
   FUNC_6(VAR_2->ndev);
   FUNC_4(VAR_2->ndev);
   FUNC_1(VAR_2->ndev, "Link Up\n");
  }
 }
}
