
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int smp_req; } ;
struct sas_task {int task_proto; int num_scatter; TYPE_1__ smp_task; int data_dir; int * scatter; } ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int *,int,int ) ;
 int FUNC_2 (struct hisi_hba*,struct sas_task*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hisi_hba *VAR_5,
       struct sas_task *VAR_6, int *VAR_7,
       int *VAR_8)
{
 struct device *VAR_9 = VAR_5->dev;
 int VAR_10;

 if (FUNC_3(VAR_6->task_proto)) {
  *VAR_7 = VAR_6->num_scatter;
 } else {
  unsigned int VAR_11;

  if (VAR_6->num_scatter) {
   *VAR_7 = FUNC_1(VAR_9, VAR_6->scatter,
          VAR_6->num_scatter, VAR_6->data_dir);
   if (!*VAR_7) {
    VAR_10 = -VAR_2;
    goto prep_out;
   }
  } else if (VAR_6->task_proto & VAR_4) {
   *VAR_8 = FUNC_1(VAR_9, &VAR_6->smp_task.smp_req,
       1, VAR_0);
   if (!*VAR_8) {
    VAR_10 = -VAR_2;
    goto prep_out;
   }
   VAR_11 = FUNC_4(&VAR_6->smp_task.smp_req);
   if (VAR_11 & 0x3) {
    VAR_10 = -VAR_1;
    goto err_out_dma_unmap;
   }
  }
 }

 if (*VAR_7 > VAR_3) {
  FUNC_0(VAR_9, "task prep: n_elem(%d) > HISI_SAS_SGE_PAGE_CNT",
   *VAR_7);
  VAR_10 = -VAR_1;
  goto err_out_dma_unmap;
 }
 return 0;

err_out_dma_unmap:

 FUNC_2(VAR_5, VAR_6, *VAR_7,
      *VAR_8);
prep_out:
 return VAR_10;
}
