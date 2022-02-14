
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int work; } ;
struct bcm_sysport_net_dim {scalar_t__ bytes; scalar_t__ packets; scalar_t__ event_ctr; TYPE_1__ dim; } ;
struct bcm_sysport_priv {struct bcm_sysport_net_dim dim; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;

__attribute__((used)) static void FUNC_1(struct bcm_sysport_priv *VAR_1,
     void (*VAR_2)(struct work_struct *VAR_3))
{
 struct bcm_sysport_net_dim *VAR_4 = &VAR_1->dim;

 FUNC_0(&VAR_4->dim.work, VAR_2);
 VAR_4->dim.mode = VAR_0;
 VAR_4->event_ctr = 0;
 VAR_4->packets = 0;
 VAR_4->bytes = 0;
}
