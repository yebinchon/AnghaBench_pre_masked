
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_bus_flash_session {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int shost_gendev; } ;


 struct device* FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 struct iscsi_bus_flash_session* FUNC_1 (struct device*) ;

__attribute__((used)) static struct iscsi_bus_flash_session *
FUNC_2(struct Scsi_Host *VAR_1, uint32_t VAR_2)
{
 struct iscsi_bus_flash_session *VAR_3 = ((void*)0);
 struct device *VAR_4;

 VAR_4 = FUNC_0(&VAR_1->shost_gendev, &VAR_2,
    VAR_0);
 if (VAR_4)
  VAR_3 = FUNC_1(VAR_4);

 return VAR_3;
}
