
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xge_pdata*) ;

__attribute__((used)) static irqreturn_t FUNC_3(const int VAR_1, void *VAR_2)
{
 struct xge_pdata *VAR_3 = VAR_2;

 if (FUNC_1(&VAR_3->napi)) {
  FUNC_2(VAR_3);
  FUNC_0(&VAR_3->napi);
 }

 return VAR_0;
}
