
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvme_ns {int lba_shift; } ;
typedef int sector_t ;



__attribute__((used)) static inline u64 FUNC_0(struct nvme_ns *VAR_0, sector_t VAR_1)
{
 return (VAR_1 >> (VAR_0->lba_shift - 9));
}
