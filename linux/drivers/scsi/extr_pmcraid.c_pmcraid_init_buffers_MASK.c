
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_timestamp_data {int dummy; } ;
struct pmcraid_instance {int free_cmd_pool; struct pmcraid_cmd** cmd_list; int * timestamp_data; int timestamp_data_baddr; TYPE_1__* pdev; int * inq_data; int inq_data_baddr; int num_hrrq; } ;
struct pmcraid_inquiry_data {int dummy; } ;
struct pmcraid_cmd {int free_list; struct pmcraid_instance* drv_inst; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct pmcraid_instance*) ;
 scalar_t__ FUNC_3 (struct pmcraid_instance*) ;
 scalar_t__ FUNC_4 (struct pmcraid_instance*) ;
 scalar_t__ FUNC_5 (struct pmcraid_instance*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct pmcraid_cmd*,int) ;
 int FUNC_8 (struct pmcraid_instance*) ;
 int FUNC_9 (struct pmcraid_instance*,int) ;
 int FUNC_10 (struct pmcraid_instance*) ;
 int FUNC_11 (struct pmcraid_instance*,int ) ;

__attribute__((used)) static int FUNC_12(struct pmcraid_instance *VAR_3)
{
 int VAR_4;

 if (FUNC_5(VAR_3)) {
  FUNC_6("couldn't allocate memory for %d host rrqs\n",
        VAR_3->num_hrrq);
  return -VAR_0;
 }

 if (FUNC_3(VAR_3)) {
  FUNC_6("couldn't allocate memory for config buffers\n");
  FUNC_11(VAR_3, VAR_3->num_hrrq);
  return -VAR_0;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_6("couldn't allocate memory for cmd blocks\n");
  FUNC_10(VAR_3);
  FUNC_11(VAR_3, VAR_3->num_hrrq);
  return -VAR_0;
 }

 if (FUNC_4(VAR_3)) {
  FUNC_6("couldn't allocate memory control blocks\n");
  FUNC_10(VAR_3);
  FUNC_9(VAR_3, VAR_2);
  FUNC_11(VAR_3, VAR_3->num_hrrq);
  return -VAR_0;
 }


 VAR_3->inq_data = FUNC_0(&VAR_3->pdev->dev,
     sizeof(struct pmcraid_inquiry_data),
     &VAR_3->inq_data_baddr, VAR_1);
 if (VAR_3->inq_data == ((void*)0)) {
  FUNC_6("couldn't allocate DMA memory for INQUIRY\n");
  FUNC_8(VAR_3);
  return -VAR_0;
 }


 VAR_3->timestamp_data = FUNC_0(&VAR_3->pdev->dev,
     sizeof(struct pmcraid_timestamp_data),
     &VAR_3->timestamp_data_baddr,
     VAR_1);
 if (VAR_3->timestamp_data == ((void*)0)) {
  FUNC_6("couldn't allocate DMA memory for 				set time_stamp \n");

  FUNC_8(VAR_3);
  return -VAR_0;
 }






 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct pmcraid_cmd *VAR_5 = VAR_3->cmd_list[VAR_4];
  FUNC_7(VAR_5, VAR_4);
  VAR_5->drv_inst = VAR_3;
  FUNC_1(&VAR_5->free_list, &VAR_3->free_cmd_pool);
 }

 return 0;
}
