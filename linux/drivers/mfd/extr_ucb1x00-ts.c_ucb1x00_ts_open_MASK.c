
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucb1x00_ts {int * rtask; TYPE_1__* ucb; int y_res; int x_res; int irq_wait; scalar_t__ irq_disabled; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ irq_base; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,struct ucb1x00_ts*) ;
 int FUNC_3 (int *) ;
 struct ucb1x00_ts* FUNC_4 (struct input_dev*) ;
 int * FUNC_5 (int ,struct ucb1x00_ts*,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ,unsigned long,char*,struct ucb1x00_ts*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct ucb1x00_ts*) ;
 int FUNC_11 (struct ucb1x00_ts*) ;

__attribute__((used)) static int FUNC_12(struct input_dev *VAR_6)
{
 struct ucb1x00_ts *VAR_7 = FUNC_4(VAR_6);
 unsigned long VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_0(VAR_7->rtask);

 if (FUNC_6())
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 VAR_7->irq_disabled = 0;

 FUNC_3(&VAR_7->irq_wait);
 VAR_9 = FUNC_7(VAR_7->ucb->irq_base + VAR_3, VAR_5,
     VAR_8, "ucb1x00-ts", VAR_7);
 if (VAR_9 < 0)
  goto out;





 FUNC_9(VAR_7->ucb);
 VAR_7->x_res = FUNC_10(VAR_7);
 VAR_7->y_res = FUNC_11(VAR_7);
 FUNC_8(VAR_7->ucb);

 VAR_7->rtask = FUNC_5(VAR_4, VAR_7, "ktsd");
 if (!FUNC_1(VAR_7->rtask)) {
  VAR_9 = 0;
 } else {
  FUNC_2(VAR_7->ucb->irq_base + VAR_3, VAR_7);
  VAR_7->rtask = ((void*)0);
  VAR_9 = -VAR_0;
 }

 out:
 return VAR_9;
}
