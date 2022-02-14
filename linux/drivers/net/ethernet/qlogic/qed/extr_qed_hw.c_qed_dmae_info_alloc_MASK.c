
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int channel; int intermediate_buffer_phys_addr; int dmae_cmd_phys_addr; int * p_completion_word; int * p_intermediate_buffer; struct dmae_cmd* p_dmae_cmd; int completion_word_phys_addr; } ;
struct qed_hwfn {int rel_pf_id; TYPE_3__ dmae_info; TYPE_2__* cdev; } ;
struct dmae_cmd {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct qed_hwfn*) ;

int FUNC_2(struct qed_hwfn *VAR_3)
{
 dma_addr_t *VAR_4 = &VAR_3->dmae_info.completion_word_phys_addr;
 struct dmae_cmd **VAR_5 = &VAR_3->dmae_info.p_dmae_cmd;
 u32 **VAR_6 = &VAR_3->dmae_info.p_intermediate_buffer;
 u32 **VAR_7 = &VAR_3->dmae_info.p_completion_word;

 *VAR_7 = FUNC_0(&VAR_3->cdev->pdev->dev,
         sizeof(u32), VAR_4, VAR_2);
 if (!*VAR_7)
  goto err;

 VAR_4 = &VAR_3->dmae_info.dmae_cmd_phys_addr;
 *VAR_5 = FUNC_0(&VAR_3->cdev->pdev->dev,
        sizeof(struct dmae_cmd),
        VAR_4, VAR_2);
 if (!*VAR_5)
  goto err;

 VAR_4 = &VAR_3->dmae_info.intermediate_buffer_phys_addr;
 *VAR_6 = FUNC_0(&VAR_3->cdev->pdev->dev,
         sizeof(u32) * VAR_0,
         VAR_4, VAR_2);
 if (!*VAR_6)
  goto err;

 VAR_3->dmae_info.channel = VAR_3->rel_pf_id;

 return 0;
err:
 FUNC_1(VAR_3);
 return -VAR_1;
}
