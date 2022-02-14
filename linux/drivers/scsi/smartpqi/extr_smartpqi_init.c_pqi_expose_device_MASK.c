
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int scsi3addr; int is_physical_device; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct pqi_scsi_dev *VAR_0)
{
 return !VAR_0->is_physical_device ||
  !FUNC_0(VAR_0->scsi3addr);
}
