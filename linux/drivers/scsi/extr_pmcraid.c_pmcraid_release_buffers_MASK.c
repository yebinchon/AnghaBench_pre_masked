
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_timestamp_data {int dummy; } ;
struct pmcraid_instance {scalar_t__ timestamp_data_baddr; int * timestamp_data; TYPE_1__* pdev; scalar_t__ inq_data_baddr; int * inq_data; int num_hrrq; } ;
struct pmcraid_inquiry_data {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,scalar_t__) ;
 int FUNC_1 (struct pmcraid_instance*,int ) ;
 int FUNC_2 (struct pmcraid_instance*) ;
 int FUNC_3 (struct pmcraid_instance*,int ) ;
 int FUNC_4 (struct pmcraid_instance*,int ) ;

__attribute__((used)) static void FUNC_5(struct pmcraid_instance *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_0);
 FUNC_4(VAR_1, VAR_1->num_hrrq);

 if (VAR_1->inq_data != ((void*)0)) {
  FUNC_0(&VAR_1->pdev->dev,
        sizeof(struct pmcraid_inquiry_data),
        VAR_1->inq_data,
        VAR_1->inq_data_baddr);

  VAR_1->inq_data = ((void*)0);
  VAR_1->inq_data_baddr = 0;
 }

 if (VAR_1->timestamp_data != ((void*)0)) {
  FUNC_0(&VAR_1->pdev->dev,
        sizeof(struct pmcraid_timestamp_data),
        VAR_1->timestamp_data,
        VAR_1->timestamp_data_baddr);

  VAR_1->timestamp_data = ((void*)0);
  VAR_1->timestamp_data_baddr = 0;
 }
}
