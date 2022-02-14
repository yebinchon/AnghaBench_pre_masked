
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct slow_path_element {int dummy; } ;
struct qed_spq_entry {int dummy; } ;
struct qed_spq {int chain; int p_phys; struct qed_spq_entry* p_virt; } ;
struct qed_hwfn {TYPE_2__* cdev; struct qed_spq* p_spq; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qed_spq_entry* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct qed_spq*) ;
 struct qed_spq* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct qed_hwfn *VAR_5)
{
 struct qed_spq_entry *VAR_6 = ((void*)0);
 struct qed_spq *VAR_7 = ((void*)0);
 dma_addr_t VAR_8 = 0;
 u32 VAR_9;


 VAR_7 = FUNC_2(sizeof(struct qed_spq), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 if (FUNC_3(VAR_5->cdev,
       VAR_4,
       VAR_3,
       VAR_2,
       0,
       sizeof(struct slow_path_element),
       &VAR_7->chain, ((void*)0)))
  goto spq_allocate_fail;


 VAR_9 = FUNC_5(&VAR_7->chain);
 VAR_6 = FUNC_0(&VAR_5->cdev->pdev->dev,
        VAR_9 * sizeof(struct qed_spq_entry),
        &VAR_8, VAR_1);
 if (!VAR_6)
  goto spq_allocate_fail;

 VAR_7->p_virt = VAR_6;
 VAR_7->p_phys = VAR_8;
 VAR_5->p_spq = VAR_7;

 return 0;

spq_allocate_fail:
 FUNC_4(VAR_5->cdev, &VAR_7->chain);
 FUNC_1(VAR_7);
 return -VAR_0;
}
