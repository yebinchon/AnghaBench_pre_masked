
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_q {int dummy; } ;
struct csio_hw {scalar_t__ intr_mode; int flags; int lock; int evtq_work; int intr_iq_idx; int pdev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct csio_q*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct csio_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 struct csio_q* FUNC_3 (struct csio_hw*,int ) ;
 scalar_t__ FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_hw*) ;
 scalar_t__ FUNC_6 (struct csio_hw*,struct csio_q*,int *,int *) ;
 int FUNC_7 (struct csio_hw*,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_14(int VAR_6, void *VAR_7)
{
 struct csio_hw *VAR_8 = (struct csio_hw *) VAR_7;
 struct csio_q *VAR_9 = ((void*)0);
 int VAR_10;
 irqreturn_t VAR_11 = VAR_3;
 unsigned long VAR_12;

 if (FUNC_13(!VAR_8))
  return VAR_3;

 if (FUNC_13(FUNC_9(VAR_8->pdev))) {
  FUNC_1(VAR_8, VAR_5);
  return VAR_3;
 }


 if (VAR_8->intr_mode == VAR_1)
  FUNC_7(VAR_8, 0, FUNC_2(VAR_4));





 if (FUNC_4(VAR_8))
  VAR_11 = VAR_2;


 VAR_9 = FUNC_3(VAR_8, VAR_8->intr_iq_idx);

 FUNC_0(VAR_9);


 if (FUNC_8(FUNC_6(VAR_8, VAR_9, ((void*)0), ((void*)0)) == 0))
  VAR_11 = VAR_2;

 FUNC_11(&VAR_8->lock, VAR_12);
 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 == 0 && !(VAR_8->flags & VAR_0)) {
  VAR_8->flags |= VAR_0;
  FUNC_12(&VAR_8->lock, VAR_12);
  FUNC_10(&VAR_8->evtq_work);
  return VAR_2;
 }
 FUNC_12(&VAR_8->lock, VAR_12);

 return VAR_11;
}
