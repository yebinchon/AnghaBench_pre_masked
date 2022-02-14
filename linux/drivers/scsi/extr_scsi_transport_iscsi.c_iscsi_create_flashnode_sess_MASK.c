
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_transport {int dummy; } ;
struct TYPE_3__ {int * parent; int * bus; int * type; } ;
struct iscsi_bus_flash_session {int target_id; struct iscsi_bus_flash_session* dd_data; TYPE_1__ dev; struct iscsi_transport* transport; } ;
struct Scsi_Host {int host_no; int shost_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct iscsi_bus_flash_session*) ;
 struct iscsi_bus_flash_session* FUNC_3 (int,int ) ;

struct iscsi_bus_flash_session *
FUNC_4(struct Scsi_Host *VAR_3, int VAR_4,
       struct iscsi_transport *VAR_5,
       int VAR_6)
{
 struct iscsi_bus_flash_session *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7) + VAR_6, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->transport = VAR_5;
 VAR_7->target_id = VAR_4;
 VAR_7->dev.type = &VAR_2;
 VAR_7->dev.bus = &VAR_1;
 VAR_7->dev.parent = &VAR_3->shost_gendev;
 FUNC_0(&VAR_7->dev, "flashnode_sess-%u:%u",
       VAR_3->host_no, VAR_4);

 VAR_8 = FUNC_1(&VAR_7->dev);
 if (VAR_8)
  goto free_fnode_sess;

 if (VAR_6)
  VAR_7->dd_data = &VAR_7[1];

 return VAR_7;

free_fnode_sess:
 FUNC_2(VAR_7);
 return ((void*)0);
}
