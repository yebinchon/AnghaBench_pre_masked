
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tsi721_dma_sts {int dummy; } ;
struct tsi721_dma_desc {int dummy; } ;
struct tsi721_device {int flags; TYPE_1__* msix; } ;
struct TYPE_5__ {TYPE_3__* device; } ;
struct tsi721_bdma_chan {size_t id; int bd_num; int sts_size; int * sts_base; int sts_phys; TYPE_2__ dchan; int * bd_base; int bd_phys; scalar_t__ regs; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int vector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct tsi721_device* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct tsi721_bdma_chan *VAR_8)
{
 u32 VAR_9;




 if (!VAR_8->bd_base)
  return 0;


 VAR_9 = FUNC_2(VAR_8->regs + VAR_3);
 if (VAR_9 & VAR_4)
  return -VAR_0;


 FUNC_3(VAR_2, VAR_8->regs + VAR_1);
 FUNC_0(VAR_8->dchan.device->dev,
  (VAR_8->bd_num + 1) * sizeof(struct tsi721_dma_desc),
  VAR_8->bd_base, VAR_8->bd_phys);
 VAR_8->bd_base = ((void*)0);


 FUNC_0(VAR_8->dchan.device->dev,
  VAR_8->sts_size * sizeof(struct tsi721_dma_sts),
  VAR_8->sts_base, VAR_8->sts_phys);
 VAR_8->sts_base = ((void*)0);
 return 0;
}
