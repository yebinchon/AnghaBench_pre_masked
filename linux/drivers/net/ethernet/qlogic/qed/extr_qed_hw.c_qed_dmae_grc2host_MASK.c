
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct qed_hwfn {TYPE_1__ dmae_info; } ;
struct qed_dmae_params {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int,int ,int ,int ,int,struct qed_dmae_params*) ;

int FUNC_3(struct qed_hwfn *VAR_2,
        struct qed_ptt *VAR_3,
        u32 VAR_4,
        dma_addr_t VAR_5, u32 VAR_6,
        struct qed_dmae_params *VAR_7)
{
 u32 VAR_8 = VAR_4 / sizeof(u32);
 int VAR_9;


 FUNC_0(&VAR_2->dmae_info.mutex);

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8,
          VAR_5, VAR_0,
          VAR_1,
          VAR_6, VAR_7);

 FUNC_1(&VAR_2->dmae_info.mutex);

 return VAR_9;
}
