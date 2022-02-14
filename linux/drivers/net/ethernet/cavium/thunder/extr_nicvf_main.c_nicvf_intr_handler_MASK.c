
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf_cq_poll {int cq_idx; int napi; struct nicvf* nicvf; } ;
struct nicvf {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nicvf*,int ,int) ;
 int FUNC_2 (struct nicvf*,int ,int) ;
 int FUNC_3 (struct nicvf*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct nicvf_cq_poll *VAR_4 = (struct nicvf_cq_poll *)VAR_3;
 struct nicvf *VAR_5 = VAR_4->nicvf;
 int VAR_6 = VAR_4->cq_idx;

 FUNC_3(VAR_5);


 FUNC_2(VAR_5, VAR_1, VAR_6);


 FUNC_0(&VAR_4->napi);


 FUNC_1(VAR_5, VAR_1, VAR_6);

 return VAR_0;
}
