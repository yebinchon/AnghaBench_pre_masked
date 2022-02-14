
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsi721_device {scalar_t__ regs; TYPE_1__* pdev; int pw_fifo; int pw_fifo_lock; int pw_work; scalar_t__ pw_discard_count; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct tsi721_device *VAR_6)
{
 VAR_6->pw_discard_count = 0;
 FUNC_0(&VAR_6->pw_work, VAR_5);
 FUNC_3(&VAR_6->pw_fifo_lock);
 if (FUNC_2(&VAR_6->pw_fifo,
   VAR_4 * 32, VAR_1)) {
  FUNC_4(&VAR_6->pdev->dev, "PW FIFO allocation failed");
  return -VAR_0;
 }


 FUNC_1(VAR_3, VAR_6->regs + VAR_2);
 return 0;
}
