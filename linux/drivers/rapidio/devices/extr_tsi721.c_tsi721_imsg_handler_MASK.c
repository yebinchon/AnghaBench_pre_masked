
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct rio_mport {TYPE_2__* inb_msg; } ;
struct tsi721_device {int flags; TYPE_3__* imsg_ring; scalar_t__ regs; TYPE_1__* pdev; struct rio_mport mport; } ;
struct TYPE_6__ {int lock; int dev_id; } ;
struct TYPE_5__ {int (* mcback ) (struct rio_mport*,int ,size_t,int) ;} ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_1 (int) ;
 int VAR_5 ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (size_t,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rio_mport*,int ,size_t,int) ;
 int FUNC_7 (int *,char*,size_t) ;

__attribute__((used)) static void FUNC_8(struct tsi721_device *VAR_6, int VAR_7)
{
 u32 VAR_8 = VAR_7 - 4;
 u32 VAR_9;
 struct rio_mport *VAR_10 = &VAR_6->mport;

 FUNC_4(&VAR_6->imsg_ring[VAR_8].lock);

 VAR_9 = FUNC_2(VAR_6->regs + FUNC_0(VAR_7));

 if (VAR_9 & VAR_4)
  FUNC_7(&VAR_6->pdev->dev, "IB MBOX%d SRIO timeout", VAR_8);

 if (VAR_9 & VAR_3)
  FUNC_7(&VAR_6->pdev->dev, "IB MBOX%d PCIe error", VAR_8);

 if (VAR_9 & VAR_2)
  FUNC_7(&VAR_6->pdev->dev, "IB MBOX%d IB free queue low", VAR_8);


 FUNC_3(VAR_9, VAR_6->regs + FUNC_0(VAR_7));


 if (VAR_9 & VAR_1 &&
  VAR_10->inb_msg[VAR_8].mcback)
  VAR_10->inb_msg[VAR_8].mcback(VAR_10,
    VAR_6->imsg_ring[VAR_8].dev_id, VAR_8, -1);

 if (!(VAR_6->flags & VAR_5)) {
  u32 VAR_11;


  VAR_11 = FUNC_2(VAR_6->regs + VAR_0);
  VAR_11 |= FUNC_1(VAR_7);
  FUNC_3(VAR_11, VAR_6->regs + VAR_0);
 }

 FUNC_5(&VAR_6->imsg_ring[VAR_8].lock);
}
