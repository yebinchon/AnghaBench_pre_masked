
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_lite {int state; int irq_queue; int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fimc_lite*) ;
 int FUNC_1 (struct fimc_lite*,int) ;
 int FUNC_2 (struct fimc_lite*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct fimc_lite *VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 if (!FUNC_0(VAR_2))
  return 0;

 FUNC_4(&VAR_2->slock, VAR_4);
 FUNC_3(VAR_1, &VAR_2->state);
 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->slock, VAR_4);

 FUNC_7(VAR_2->irq_queue,
      !FUNC_6(VAR_1, &VAR_2->state),
      (2*VAR_0/10));

 return FUNC_1(VAR_2, VAR_3);
}
