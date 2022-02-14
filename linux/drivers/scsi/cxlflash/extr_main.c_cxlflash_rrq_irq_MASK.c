
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwq {int hrrq_slock; int irqpoll; int hrrq_online; struct afu* afu; } ;
struct afu {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct afu*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hwq*,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct hwq *VAR_5 = (struct hwq *)VAR_4;
 struct afu *VAR_6 = VAR_5->afu;
 unsigned long VAR_7;
 FUNC_0(VAR_2);
 int VAR_8 = 0;

 FUNC_5(&VAR_5->hrrq_slock, VAR_7);


 if (!VAR_5->hrrq_online) {
  FUNC_6(&VAR_5->hrrq_slock, VAR_7);
  return VAR_0;
 }

 if (FUNC_1(VAR_6)) {
  FUNC_2(&VAR_5->irqpoll);
  FUNC_6(&VAR_5->hrrq_slock, VAR_7);
  return VAR_0;
 }

 VAR_8 = FUNC_4(VAR_5, &VAR_2, -1);
 FUNC_6(&VAR_5->hrrq_slock, VAR_7);

 if (VAR_8 == 0)
  return VAR_1;

 FUNC_3(&VAR_2);
 return VAR_0;
}
