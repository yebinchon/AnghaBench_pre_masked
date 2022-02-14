
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int keep_device; int scsi_device_list_entry; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct pqi_ctrl_info *VAR_0,
 struct pqi_scsi_dev *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->scsi_device_list_lock, VAR_2);
 FUNC_0(&VAR_1->scsi_device_list_entry);
 FUNC_2(&VAR_0->scsi_device_list_lock, VAR_2);


 VAR_1->keep_device = 0;
}
