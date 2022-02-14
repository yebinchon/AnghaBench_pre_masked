
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * peer_flags; int * ops; int * pdev_param; int * vdev_param; int * cmd; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct ath10k *VAR_5)
{
 VAR_5->wmi.cmd = &VAR_0;
 VAR_5->wmi.vdev_param = &VAR_4;
 VAR_5->wmi.pdev_param = &VAR_2;
 VAR_5->wmi.ops = &VAR_1;
 VAR_5->wmi.peer_flags = &VAR_3;
}
