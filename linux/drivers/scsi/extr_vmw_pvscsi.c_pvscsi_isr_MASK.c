
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int hw_lock; int work; int workqueue; scalar_t__ use_msg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pvscsi_adapter*) ;
 int FUNC_1 (struct pvscsi_adapter*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct pvscsi_adapter *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_3(&VAR_3->hw_lock, VAR_4);
 FUNC_1(VAR_3);
 if (VAR_3->use_msg && FUNC_0(VAR_3))
  FUNC_2(VAR_3->workqueue, &VAR_3->work);
 FUNC_4(&VAR_3->hw_lock, VAR_4);

 return VAR_0;
}
