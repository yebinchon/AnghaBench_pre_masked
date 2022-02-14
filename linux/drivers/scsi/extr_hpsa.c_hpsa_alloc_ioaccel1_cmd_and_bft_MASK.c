
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct io_accel1_cmd {int dummy; } ;
struct ctlr_info {int ioaccel_maxsg; int nr_cmds; int * ioaccel_cmd_pool; int * ioaccel1_blockFetchTable; int ioaccel_cmd_pool_dhandle; TYPE_2__* pdev; TYPE_1__* cfgtable; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int io_accel_max_embedded_sg_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (struct ctlr_info*) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_4)
{
 VAR_4->ioaccel_maxsg =
  FUNC_5(&(VAR_4->cfgtable->io_accel_max_embedded_sg_count));
 if (VAR_4->ioaccel_maxsg > VAR_3)
  VAR_4->ioaccel_maxsg = VAR_3;





 FUNC_0(sizeof(struct io_accel1_cmd) %
   VAR_2);
 VAR_4->ioaccel_cmd_pool =
  FUNC_1(&VAR_4->pdev->dev,
   VAR_4->nr_cmds * sizeof(*VAR_4->ioaccel_cmd_pool),
   &VAR_4->ioaccel_cmd_pool_dhandle, VAR_1);

 VAR_4->ioaccel1_blockFetchTable =
  FUNC_3(((VAR_4->ioaccel_maxsg + 1) *
    sizeof(u32)), VAR_1);

 if ((VAR_4->ioaccel_cmd_pool == ((void*)0)) ||
  (VAR_4->ioaccel1_blockFetchTable == ((void*)0)))
  goto clean_up;

 FUNC_4(VAR_4->ioaccel_cmd_pool, 0,
  VAR_4->nr_cmds * sizeof(*VAR_4->ioaccel_cmd_pool));
 return 0;

clean_up:
 FUNC_2(VAR_4);
 return -VAR_0;
}
