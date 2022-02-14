
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct scsi_cmnd {int request; } ;
struct pqi_ctrl_info {scalar_t__ max_hw_queue_index; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline u16 FUNC_2(struct pqi_ctrl_info *VAR_0,
 struct scsi_cmnd *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_1(FUNC_0(VAR_1->request));
 if (VAR_2 > VAR_0->max_hw_queue_index)
  VAR_2 = 0;

 return VAR_2;
}
