
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_desc_ring {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(const int VAR_1, void *VAR_2)
{
 struct xgene_enet_desc_ring *VAR_3 = VAR_2;

 if (FUNC_2(&VAR_3->napi)) {
  FUNC_1(VAR_1);
  FUNC_0(&VAR_3->napi);
 }

 return VAR_0;
}
