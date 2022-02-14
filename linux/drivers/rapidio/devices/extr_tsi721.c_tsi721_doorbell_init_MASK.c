
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tsi721_device {scalar_t__ regs; scalar_t__ idb_dma; int idb_base; TYPE_1__* pdev; int idb_work; scalar_t__ db_discard_count; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int,scalar_t__*,int ) ;
 int FUNC_9 (int,scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (int ,int *,char*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_11(struct tsi721_device *VAR_9)
{






 VAR_9->db_discard_count = 0;
 FUNC_0(&VAR_9->idb_work, VAR_8);


 VAR_9->idb_base = FUNC_8(&VAR_9->pdev->dev,
         VAR_3 * VAR_5,
         &VAR_9->idb_dma, VAR_2);
 if (!VAR_9->idb_base)
  return -VAR_1;

 FUNC_10(VAR_0, &VAR_9->pdev->dev,
    "Allocated IDB buffer @ %p (phys = %pad)",
    VAR_9->idb_base, &VAR_9->idb_dma);

 FUNC_9(FUNC_7(VAR_3),
  VAR_9->regs + FUNC_6(VAR_4));
 FUNC_9(((u64)VAR_9->idb_dma >> 32),
  VAR_9->regs + FUNC_2(VAR_4));
 FUNC_9(((u64)VAR_9->idb_dma & VAR_6),
  VAR_9->regs + FUNC_1(VAR_4));

 FUNC_9(0, VAR_9->regs + FUNC_4(VAR_4));

 FUNC_9(VAR_7, VAR_9->regs + FUNC_3(VAR_4));

 FUNC_9(0, VAR_9->regs + FUNC_5(VAR_4));

 return 0;
}
