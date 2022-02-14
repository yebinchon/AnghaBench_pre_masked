
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k {int vdev_setup_done; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "WMI_VDEV_STOPPED_EVENTID\n");
 FUNC_1(&VAR_1->vdev_setup_done);
}
