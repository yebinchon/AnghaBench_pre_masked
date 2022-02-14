
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * arq_bi; } ;
struct TYPE_5__ {int dma_head; int desc_buf; TYPE_1__ r; } ;
struct TYPE_6__ {int num_arq_entries; TYPE_2__ arq; } ;
struct i40e_hw {TYPE_3__ aq; } ;


 int FUNC_0 (struct i40e_hw*,int *) ;
 int FUNC_1 (struct i40e_hw*,int *) ;

__attribute__((used)) static void FUNC_2(struct i40e_hw *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->aq.num_arq_entries; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->aq.arq.r.arq_bi[VAR_1]);


 FUNC_0(VAR_0, &VAR_0->aq.arq.desc_buf);


 FUNC_1(VAR_0, &VAR_0->aq.arq.dma_head);
}
