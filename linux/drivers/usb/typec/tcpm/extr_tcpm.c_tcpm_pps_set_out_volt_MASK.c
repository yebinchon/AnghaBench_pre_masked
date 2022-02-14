
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int min_volt; int max_volt; int op_curr; int out_volt; int active; } ;
struct tcpm_port {scalar_t__ state; unsigned int operating_snk_mw; int pps_status; int pps_pending; int swap_lock; int lock; int pps_complete; TYPE_1__ pps_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcpm_port*,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct tcpm_port *VAR_8, u16 VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 FUNC_1(&VAR_8->swap_lock);
 FUNC_1(&VAR_8->lock);

 if (!VAR_8->pps_data.active) {
  VAR_11 = -VAR_2;
  goto port_unlock;
 }

 if (VAR_8->state != VAR_7) {
  VAR_11 = -VAR_0;
  goto port_unlock;
 }

 if (VAR_9 < VAR_8->pps_data.min_volt ||
     VAR_9 > VAR_8->pps_data.max_volt) {
  VAR_11 = -VAR_1;
  goto port_unlock;
 }

 VAR_10 = (VAR_8->pps_data.op_curr * VAR_9) / 1000;
 if (VAR_10 < VAR_8->operating_snk_mw) {
  VAR_11 = -VAR_1;
  goto port_unlock;
 }


 VAR_9 = VAR_9 - (VAR_9 % VAR_5);

 FUNC_3(&VAR_8->pps_complete);
 VAR_8->pps_data.out_volt = VAR_9;
 VAR_8->pps_status = 0;
 VAR_8->pps_pending = 1;
 FUNC_4(VAR_8, VAR_6, 0);
 FUNC_2(&VAR_8->lock);

 if (!FUNC_5(&VAR_8->pps_complete,
    FUNC_0(VAR_4)))
  VAR_11 = -VAR_3;
 else
  VAR_11 = VAR_8->pps_status;

 goto swap_unlock;

port_unlock:
 FUNC_2(&VAR_8->lock);
swap_unlock:
 FUNC_2(&VAR_8->swap_lock);

 return VAR_11;
}
