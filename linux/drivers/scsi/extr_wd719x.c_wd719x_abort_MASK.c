
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wd719x_scb {int phys; } ;
struct wd719x {TYPE_3__* sh; TYPE_1__* pdev; } ;
struct scsi_cmnd {int tag; TYPE_2__* device; } ;
struct TYPE_6__ {int host_lock; } ;
struct TYPE_5__ {int lun; int id; int host; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct wd719x_scb* FUNC_1 (struct scsi_cmnd*) ;
 struct wd719x* FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct wd719x*,int,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct wd719x_scb*,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7;
 struct wd719x_scb *VAR_8 = FUNC_1(VAR_4);
 struct wd719x *VAR_9 = FUNC_2(VAR_4->device->host);

 FUNC_0(&VAR_9->pdev->dev, "abort command, tag: %x\n", VAR_4->tag);

 VAR_5 = VAR_3;

 FUNC_3(VAR_9->sh->host_lock, VAR_7);
 VAR_6 = FUNC_5(VAR_9, VAR_5, VAR_4->device->id,
       VAR_4->device->lun, VAR_4->tag, VAR_8->phys, 0);
 FUNC_6(VAR_8, VAR_0);
 FUNC_4(VAR_9->sh->host_lock, VAR_7);
 if (VAR_6)
  return VAR_1;

 return VAR_2;
}
