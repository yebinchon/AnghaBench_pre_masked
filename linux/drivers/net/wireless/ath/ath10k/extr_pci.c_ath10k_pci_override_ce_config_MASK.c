
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ce_pipe_config {void* nbytes_max; void* pipedir; } ;
struct ce_attr {scalar_t__ dest_nentries; scalar_t__ src_sz_max; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {void* pipenum; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 struct ce_attr* VAR_1 ;
 struct ce_pipe_config* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ath10k *VAR_4)
{
 struct ce_attr *VAR_5;
 struct ce_pipe_config *VAR_6;






 VAR_5 = &VAR_1[5];
 VAR_5->src_sz_max = 0;
 VAR_5->dest_nentries = 0;


 VAR_6 = &VAR_2[5];
 VAR_6->pipedir = FUNC_0(VAR_0);
 VAR_6->nbytes_max = FUNC_0(2048);


 VAR_3[15].pipenum = FUNC_0(1);
}
