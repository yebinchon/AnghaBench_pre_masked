
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {int flags; int vport_delete_work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Scsi_Host*,int *) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct fc_vport* FUNC_3 (struct device*) ;
 struct Scsi_Host* FUNC_4 (struct fc_vport*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct fc_vport *VAR_8 = FUNC_3(VAR_4);
 struct Scsi_Host *VAR_9 = FUNC_4(VAR_8);
 unsigned long VAR_10;

 FUNC_1(VAR_9->host_lock, VAR_10);
 if (VAR_8->flags & (VAR_2 | VAR_1 | VAR_3)) {
  FUNC_2(VAR_9->host_lock, VAR_10);
  return -VAR_0;
 }
 VAR_8->flags |= VAR_3;
 FUNC_2(VAR_9->host_lock, VAR_10);

 FUNC_0(VAR_9, &VAR_8->vport_delete_work);
 return VAR_7;
}
