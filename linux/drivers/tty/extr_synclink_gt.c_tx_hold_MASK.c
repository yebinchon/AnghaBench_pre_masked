
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct slgt_info {int lock; TYPE_1__ params; scalar_t__ tx_enabled; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct slgt_info *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;

 if (FUNC_1(VAR_2, VAR_1->name, "tx_hold"))
  return;
 FUNC_0(("%s tx_hold\n", VAR_2->device_name));
 FUNC_2(&VAR_2->lock,VAR_3);
 if (VAR_2->tx_enabled && VAR_2->params.mode == VAR_0)
   FUNC_4(VAR_2);
 FUNC_3(&VAR_2->lock,VAR_3);
}
