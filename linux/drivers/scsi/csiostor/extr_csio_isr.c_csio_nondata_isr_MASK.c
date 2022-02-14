
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int flags; int lock; int evtq_work; int pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_4, void *VAR_5)
{
 struct csio_hw *VAR_6 = (struct csio_hw *) VAR_5;
 int VAR_7;
 unsigned long VAR_8;

 if (FUNC_7(!VAR_6))
  return VAR_2;

 if (FUNC_7(FUNC_3(VAR_6->pdev))) {
  FUNC_0(VAR_6, VAR_3);
  return VAR_2;
 }

 FUNC_5(&VAR_6->lock, VAR_8);
 FUNC_1(VAR_6);
 VAR_7 = FUNC_2(VAR_6);

 if (VAR_7 == 0 && !(VAR_6->flags & VAR_0)) {
  VAR_6->flags |= VAR_0;
  FUNC_6(&VAR_6->lock, VAR_8);
  FUNC_4(&VAR_6->evtq_work);
  return VAR_1;
 }
 FUNC_6(&VAR_6->lock, VAR_8);
 return VAR_1;
}
