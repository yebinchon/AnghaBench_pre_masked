
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_hba {int queue_count; int * complete_hdr; int * debugfs_complete_hdr; TYPE_1__* hw; } ;
struct TYPE_2__ {int complete_hdr_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_1)
{
 int VAR_2 = VAR_1->hw->complete_hdr_size;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->queue_count; VAR_3++)
  FUNC_0(VAR_1->debugfs_complete_hdr[VAR_3],
         VAR_1->complete_hdr[VAR_3],
         VAR_0 * VAR_2);
}
