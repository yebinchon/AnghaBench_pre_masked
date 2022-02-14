
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sbands; } ;
struct ath10k {int hw; TYPE_1__ mac; TYPE_3__* dfs_detector; } ;
struct TYPE_6__ {int (* exit ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int channels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(struct ath10k *VAR_3)
{
 FUNC_2(VAR_3->hw);

 if (FUNC_0(VAR_0) && VAR_3->dfs_detector)
  VAR_3->dfs_detector->exit(VAR_3->dfs_detector);

 FUNC_3(VAR_3->mac.sbands[VAR_1].channels);
 FUNC_3(VAR_3->mac.sbands[VAR_2].channels);

 FUNC_1(VAR_3->hw, ((void*)0));
}
