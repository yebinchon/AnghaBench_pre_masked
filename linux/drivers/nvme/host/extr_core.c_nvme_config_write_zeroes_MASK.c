
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned short u32 ;
struct nvme_ns {int lba_shift; TYPE_1__* ctrl; } ;
struct gendisk {int queue; } ;
struct TYPE_2__ {int oncs; int quirks; scalar_t__ max_hw_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct gendisk *VAR_4, struct nvme_ns *VAR_5)
{
 u32 VAR_6;
 unsigned short VAR_7 = 1 << VAR_5->lba_shift;

 if (!(VAR_5->ctrl->oncs & VAR_0) ||
     (VAR_5->ctrl->quirks & VAR_1))
  return;
 if (VAR_5->ctrl->max_hw_sectors == VAR_2)
  VAR_6 = ((u32)(VAR_3 + 1) * VAR_7) >> 9;
 else
  VAR_6 = ((u32)(VAR_5->ctrl->max_hw_sectors + 1) * VAR_7) >> 9;

 FUNC_0(VAR_4->queue, VAR_6);
}
