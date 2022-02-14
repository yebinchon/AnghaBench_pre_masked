
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_dmb {unsigned long sba_idx; scalar_t__ cpu_addr; int dma_addr; int dmb_len; } ;
struct ism_dev {int sba_bitmap; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 unsigned long FUNC_4 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct ism_dev *VAR_9, struct smcd_dmb *VAR_10)
{
 unsigned long VAR_11;

 if (FUNC_0(VAR_10->dmb_len) > FUNC_3(&VAR_9->pdev->dev))
  return -VAR_0;

 if (!VAR_10->sba_idx) {
  VAR_11 = FUNC_4(VAR_9->sba_bitmap, VAR_4,
      VAR_3);
  if (VAR_11 == VAR_4)
   return -VAR_1;

  VAR_10->sba_idx = VAR_11;
 }
 if (VAR_10->sba_idx < VAR_3 ||
     FUNC_5(VAR_10->sba_idx, VAR_9->sba_bitmap))
  return -VAR_0;

 VAR_10->cpu_addr = FUNC_2(&VAR_9->pdev->dev, VAR_10->dmb_len,
        &VAR_10->dma_addr,
        VAR_2 | VAR_8 | VAR_6 | VAR_5 | VAR_7);
 if (!VAR_10->cpu_addr)
  FUNC_1(VAR_10->sba_idx, VAR_9->sba_bitmap);

 return VAR_10->cpu_addr ? 0 : -VAR_1;
}
