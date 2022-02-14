
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mutex; int * p_intermediate_buffer; int intermediate_buffer_phys_addr; int * p_dmae_cmd; int dmae_cmd_phys_addr; int * p_completion_word; int completion_word_phys_addr; } ;
struct qed_hwfn {TYPE_3__ dmae_info; TYPE_2__* cdev; } ;
struct dmae_cmd {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct qed_hwfn *VAR_1)
{
 dma_addr_t VAR_2;


 FUNC_1(&VAR_1->dmae_info.mutex);

 if (VAR_1->dmae_info.p_completion_word) {
  VAR_2 = VAR_1->dmae_info.completion_word_phys_addr;
  FUNC_0(&VAR_1->cdev->pdev->dev,
      sizeof(u32),
      VAR_1->dmae_info.p_completion_word, VAR_2);
  VAR_1->dmae_info.p_completion_word = ((void*)0);
 }

 if (VAR_1->dmae_info.p_dmae_cmd) {
  VAR_2 = VAR_1->dmae_info.dmae_cmd_phys_addr;
  FUNC_0(&VAR_1->cdev->pdev->dev,
      sizeof(struct dmae_cmd),
      VAR_1->dmae_info.p_dmae_cmd, VAR_2);
  VAR_1->dmae_info.p_dmae_cmd = ((void*)0);
 }

 if (VAR_1->dmae_info.p_intermediate_buffer) {
  VAR_2 = VAR_1->dmae_info.intermediate_buffer_phys_addr;
  FUNC_0(&VAR_1->cdev->pdev->dev,
      sizeof(u32) * VAR_0,
      VAR_1->dmae_info.p_intermediate_buffer,
      VAR_2);
  VAR_1->dmae_info.p_intermediate_buffer = ((void*)0);
 }

 FUNC_2(&VAR_1->dmae_info.mutex);
}
