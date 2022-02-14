
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct be_eq_obj {int napi; TYPE_1__ q; int adapter; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct be_eq_obj *VAR_3 = VAR_2;

 FUNC_0(VAR_3->adapter, VAR_3->q.id, 0, 1, 0, 0);
 FUNC_1(&VAR_3->napi);
 return VAR_0;
}
