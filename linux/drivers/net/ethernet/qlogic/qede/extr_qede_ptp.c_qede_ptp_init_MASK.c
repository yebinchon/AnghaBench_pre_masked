
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mult; scalar_t__ shift; int mask; int read; } ;
struct qede_ptp {TYPE_2__ cc; int tc; int work; TYPE_1__* ops; int lock; } ;
struct qede_dev {int cdev; struct qede_ptp* ptp; } ;
struct TYPE_4__ {int (* enable ) (int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(struct qede_dev *VAR_3, bool VAR_4)
{
 struct qede_ptp *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->ptp;
 if (!VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_5->lock);


 VAR_6 = VAR_5->ops->enable(VAR_3->cdev);
 if (VAR_6) {
  FUNC_1(VAR_3, "PTP HW enable failed\n");
  return VAR_6;
 }


 FUNC_2(&VAR_5->work, VAR_2);





 if (VAR_4) {
  FUNC_5(&VAR_5->cc, 0, sizeof(VAR_5->cc));
  VAR_5->cc.read = VAR_1;
  VAR_5->cc.mask = FUNC_0(64);
  VAR_5->cc.shift = 0;
  VAR_5->cc.mult = 1;

  FUNC_8(&VAR_5->tc, &VAR_5->cc,
     FUNC_4(FUNC_3()));
 }

 return VAR_6;
}
