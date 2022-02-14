
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {scalar_t__ dest; scalar_t__ fim; int src_sd; int csi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct csi_priv*) ;
 int FUNC_1 (struct csi_priv*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct csi_priv *VAR_3)
{
 if (VAR_3->dest == VAR_0)
  FUNC_1(VAR_3);






 FUNC_3(VAR_3->csi);


 FUNC_4(VAR_3->src_sd, VAR_2, VAR_1, 0);

 if (VAR_3->dest == VAR_0) {
  FUNC_0(VAR_3);


  if (VAR_3->fim)
   FUNC_2(VAR_3->fim, ((void*)0), 0);
 }
}
