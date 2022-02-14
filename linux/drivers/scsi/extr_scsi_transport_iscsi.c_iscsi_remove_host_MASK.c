
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct iscsi_cls_host {int bsg_q; } ;
struct device {int dummy; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct transport_container *VAR_0,
        struct device *VAR_1, struct device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);
 struct iscsi_cls_host *VAR_4 = VAR_3->shost_data;

 FUNC_0(VAR_4->bsg_q);
 return 0;
}
