
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int txtimeout; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct slgt_info {scalar_t__ netcount; int lock; TYPE_2__ icount; TYPE_1__ params; scalar_t__ tx_active; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct slgt_info*) ;
 struct slgt_info* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (struct slgt_info*) ;
 struct slgt_info* VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct slgt_info*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct slgt_info *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;

 FUNC_0(("%s tx_timeout\n", VAR_4->device_name));
 if(VAR_4->tx_active && VAR_4->params.mode == VAR_0) {
  VAR_4->icount.txtimeout++;
 }
 FUNC_4(&VAR_4->lock,VAR_5);
 FUNC_6(VAR_4);
 FUNC_5(&VAR_4->lock,VAR_5);






  FUNC_1(VAR_4);
}
