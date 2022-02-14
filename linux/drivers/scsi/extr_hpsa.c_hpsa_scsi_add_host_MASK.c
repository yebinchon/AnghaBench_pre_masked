
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int scsi_host; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->scsi_host, &VAR_0->pdev->dev);
 if (VAR_1) {
  FUNC_0(&VAR_0->pdev->dev, "scsi_add_host failed\n");
  return VAR_1;
 }
 FUNC_2(VAR_0->scsi_host);
 return 0;
}
