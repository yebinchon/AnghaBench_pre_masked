
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_sata_port {struct ipr_ioa_cfg* ioa_cfg; } ;
struct ipr_ioa_cfg {struct ipr_hrr_queue* hrrq; } ;
struct ipr_hrr_queue {int ioa_is_dead; int _lock; int allow_cmds; } ;
struct ipr_cmnd {int dummy; } ;
struct ata_queued_cmd {struct ipr_cmnd* lldd_task; struct ata_port* ap; } ;
struct ata_port {struct ipr_sata_port* private_data; } ;


 int VAR_0 ;
 struct ipr_cmnd* FUNC_0 (struct ipr_hrr_queue*) ;
 int FUNC_1 (struct ipr_ioa_cfg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct ipr_sata_port *VAR_3 = VAR_2->private_data;
 struct ipr_ioa_cfg *VAR_4 = VAR_3->ioa_cfg;
 struct ipr_cmnd *VAR_5;
 struct ipr_hrr_queue *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4);
 VAR_6 = &VAR_4->hrrq[VAR_7];

 VAR_1->lldd_task = ((void*)0);
 FUNC_2(&VAR_6->_lock);
 if (FUNC_4(VAR_6->ioa_is_dead)) {
  FUNC_3(&VAR_6->_lock);
  return 0;
 }

 if (FUNC_4(!VAR_6->allow_cmds)) {
  FUNC_3(&VAR_6->_lock);
  return VAR_0;
 }

 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(&VAR_6->_lock);
  return VAR_0;
 }

 VAR_1->lldd_task = VAR_5;
 FUNC_3(&VAR_6->_lock);
 return 0;
}
