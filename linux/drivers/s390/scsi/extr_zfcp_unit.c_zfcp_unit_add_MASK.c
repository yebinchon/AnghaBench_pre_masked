
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int groups; int release; int * parent; } ;
struct zfcp_unit {int list; TYPE_1__ dev; int scsi_work; scalar_t__ fcp_lun; struct zfcp_port* port; } ;
struct zfcp_port {int unit_list_lock; int unit_list; int units; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,unsigned long long) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct zfcp_unit*) ;
 struct zfcp_unit* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct zfcp_port*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct zfcp_unit* FUNC_13 (struct zfcp_port*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_14 (struct zfcp_unit*) ;
 int VAR_7 ;

int FUNC_15(struct zfcp_port *VAR_8, u64 VAR_9)
{
 struct zfcp_unit *VAR_10;
 int VAR_11 = 0;

 FUNC_7(&VAR_4);
 if (FUNC_12(VAR_8)) {

  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_13(VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_9(&VAR_10->dev);
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_5(sizeof(struct zfcp_unit), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_10->port = VAR_8;
 VAR_10->fcp_lun = VAR_9;
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->dev.release = VAR_6;
 VAR_10->dev.groups = VAR_5;
 FUNC_0(&VAR_10->scsi_work, VAR_7);

 if (FUNC_2(&VAR_10->dev, "0x%016llx",
    (unsigned long long) VAR_9)) {
  FUNC_4(VAR_10);
  VAR_11 = -VAR_2;
  goto out;
 }

 if (FUNC_3(&VAR_10->dev)) {
  FUNC_9(&VAR_10->dev);
  VAR_11 = -VAR_2;
  goto out;
 }

 FUNC_1(&VAR_8->units);

 FUNC_10(&VAR_8->unit_list_lock);
 FUNC_6(&VAR_10->list, &VAR_8->unit_list);
 FUNC_11(&VAR_8->unit_list_lock);




 FUNC_8(&VAR_4);

 FUNC_14(VAR_10);
 return VAR_11;

out:
 FUNC_8(&VAR_4);
 return VAR_11;
}
