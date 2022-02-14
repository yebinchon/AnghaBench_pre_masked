
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int shost_gendev; } ;


 int FUNC_0 (int *,void (*) (struct iscsi_cls_session*),int ) ;
 int VAR_0 ;

void FUNC_1(struct Scsi_Host *VAR_1,
     void (*VAR_2)(struct iscsi_cls_session *))
{
 FUNC_0(&VAR_1->shost_gendev, VAR_2,
         VAR_0);
}
