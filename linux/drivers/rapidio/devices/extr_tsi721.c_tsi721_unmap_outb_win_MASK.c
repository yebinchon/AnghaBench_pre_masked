
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct tsi721_ob_win {int active; scalar_t__ destid; scalar_t__ rstart; scalar_t__ base; scalar_t__ size; TYPE_2__* pbar; } ;
struct tsi721_device {int obwin_cnt; scalar_t__ regs; TYPE_1__* pdev; struct tsi721_ob_win* ob_win; } ;
struct rio_mport {struct tsi721_device* priv; } ;
struct TYPE_4__ {int free; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *,char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rio_mport *VAR_2,
      u16 VAR_3, u64 VAR_4)
{
 struct tsi721_device *VAR_5 = VAR_2->priv;
 struct tsi721_ob_win *VAR_6;
 int VAR_7;

 FUNC_2(VAR_0, &VAR_5->pdev->dev, "did=%d ra=0x%llx", VAR_3, VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_5->ob_win[VAR_7];

  if (VAR_6->active &&
      VAR_6->destid == VAR_3 && VAR_6->rstart == VAR_4) {
   FUNC_2(VAR_0, &VAR_5->pdev->dev,
      "free OBW%d @%llx", VAR_7, VAR_6->base);
   VAR_6->active = 0;
   FUNC_1(0, VAR_5->regs + FUNC_0(VAR_7));
   VAR_6->pbar->free += VAR_6->size;
   VAR_5->obwin_cnt++;
   break;
  }
 }
}
