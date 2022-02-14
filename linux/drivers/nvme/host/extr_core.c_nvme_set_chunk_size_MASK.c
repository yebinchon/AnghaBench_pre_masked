
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_ns {int lba_shift; int queue; scalar_t__ noiob; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct nvme_ns *VAR_0)
{
 u32 VAR_1 = (((u32)VAR_0->noiob) << (VAR_0->lba_shift - 9));
 FUNC_0(VAR_0->queue, FUNC_1(VAR_1));
}
