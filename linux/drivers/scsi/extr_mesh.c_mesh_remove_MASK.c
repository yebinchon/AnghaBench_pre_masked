
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mesh_state {int dma_cmd_bus; int dma_cmd_space; int dma_cmd_size; int dma; int mesh; int meshintr; struct Scsi_Host* host; } ;
struct macio_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,struct mesh_state*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct macio_dev*) ;
 TYPE_1__* FUNC_4 (struct macio_dev*) ;
 int FUNC_5 (struct macio_dev*) ;
 int FUNC_6 (struct macio_dev*) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct mesh_state*,int ) ;

__attribute__((used)) static int FUNC_10(struct macio_dev *VAR_0)
{
 struct mesh_state *VAR_1 = (struct mesh_state *)FUNC_3(VAR_0);
 struct Scsi_Host *VAR_2 = VAR_1->host;

 FUNC_8(VAR_2);

 FUNC_1(VAR_1->meshintr, VAR_1);


 FUNC_6(VAR_0);


 FUNC_9(VAR_1, 0);


 FUNC_2(VAR_1->mesh);
        FUNC_2(VAR_1->dma);


 FUNC_0(&FUNC_4(VAR_0)->dev, VAR_1->dma_cmd_size,
       VAR_1->dma_cmd_space, VAR_1->dma_cmd_bus);


 FUNC_5(VAR_0);

 FUNC_7(VAR_2);

 return 0;
}
