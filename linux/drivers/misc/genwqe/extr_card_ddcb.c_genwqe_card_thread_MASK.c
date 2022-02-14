
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int queue_waitq; int queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct genwqe_dev*,int *) ;
 scalar_t__ FUNC_2 (struct genwqe_dev*) ;
 scalar_t__ FUNC_3 (struct genwqe_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 struct genwqe_dev *VAR_5 = (struct genwqe_dev *)VAR_2;

 while (!FUNC_4()) {

  FUNC_1(VAR_5, &VAR_5->queue);

  if (VAR_0) {
   VAR_4 = FUNC_5(
    VAR_5->queue_waitq,
    FUNC_2(VAR_5) ||
    (VAR_3 = FUNC_4()), 1);
  } else {
   VAR_4 = FUNC_5(
    VAR_5->queue_waitq,
    FUNC_3(VAR_5) ||
    (VAR_3 = FUNC_4()), VAR_1);
  }
  if (VAR_3)
   break;





  FUNC_0();
 }
 return 0;
}
