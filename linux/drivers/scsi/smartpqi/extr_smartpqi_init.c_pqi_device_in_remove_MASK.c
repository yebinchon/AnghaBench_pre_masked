
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {scalar_t__ in_remove; } ;
struct pqi_ctrl_info {int in_shutdown; } ;



__attribute__((used)) static inline bool FUNC_0(struct pqi_ctrl_info *VAR_0,
     struct pqi_scsi_dev *VAR_1)
{
 return VAR_1->in_remove && !VAR_0->in_shutdown;
}
