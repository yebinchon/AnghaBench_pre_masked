
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_q {scalar_t__ owner; } ;
struct csio_hw {int pdev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct csio_q*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_3, void *VAR_4)
{
 struct csio_q *VAR_5 = (struct csio_q *) VAR_4;
 struct csio_hw *VAR_6;

 if (FUNC_3(!VAR_5))
  return VAR_1;

 VAR_6 = (struct csio_hw *)VAR_5->owner;

 if (FUNC_3(FUNC_2(VAR_6->pdev))) {
  FUNC_0(VAR_6, VAR_2);
  return VAR_1;
 }

 FUNC_1(VAR_5);

 return VAR_0;
}
