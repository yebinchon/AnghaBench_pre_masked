
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct be_eq_obj {scalar_t__ spurious_intr; TYPE_1__ q; int napi; struct be_adapter* adapter; } ;
struct be_adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct be_adapter*,int ,int,int,int,int ) ;
 int FUNC_2 (struct be_eq_obj*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct be_eq_obj *VAR_4 = VAR_3;
 struct be_adapter *VAR_5 = VAR_4->adapter;
 int VAR_6 = 0;
 if (FUNC_3(&VAR_4->napi)) {
  VAR_6 = FUNC_2(VAR_4);
  FUNC_0(&VAR_4->napi);
  if (VAR_6)
   VAR_4->spurious_intr = 0;
 }
 FUNC_1(VAR_5, VAR_4->q.id, 0, 1, VAR_6, 0);





 if (VAR_6 || VAR_4->spurious_intr++ == 0)
  return VAR_0;
 else
  return VAR_1;
}
