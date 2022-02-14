
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int zone_blocks; int device; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline sector_t FUNC_1(struct scsi_disk *VAR_0)
{
 return FUNC_0(VAR_0->device, VAR_0->zone_blocks);
}
