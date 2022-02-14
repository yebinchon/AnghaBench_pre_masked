
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {unsigned int sector_size; } ;
typedef unsigned int sector_t ;



__attribute__((used)) static inline unsigned int FUNC_0(struct scsi_device *VAR_0, sector_t VAR_1)
{
 return VAR_1 * VAR_0->sector_size;
}
