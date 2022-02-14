
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_csi2 {int dev; int rstc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rcar_csi2*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct rcar_csi2 *VAR_3)
{
 FUNC_1(VAR_3, VAR_2, 0);
 FUNC_1(VAR_3, VAR_0, VAR_1);
 FUNC_2(VAR_3->rstc);
 FUNC_3(100, 150);
 FUNC_0(VAR_3->dev);
}
