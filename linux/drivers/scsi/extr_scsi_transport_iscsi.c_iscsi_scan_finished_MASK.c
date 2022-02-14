
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_host {int nr_scans; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct Scsi_Host *VAR_0, unsigned long VAR_1)
{
 struct iscsi_cls_host *VAR_2 = VAR_0->shost_data;




 return !FUNC_0(&VAR_2->nr_scans);
}
