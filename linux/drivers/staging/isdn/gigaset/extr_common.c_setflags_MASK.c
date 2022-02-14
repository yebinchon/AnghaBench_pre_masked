
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {unsigned int control_state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_modem_ctrl ) (struct cardstate*,unsigned int,unsigned int) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cardstate*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct cardstate *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_2->ops->set_modem_ctrl(VAR_2, VAR_2->control_state, VAR_3);
 VAR_2->control_state = VAR_3;
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_4 * VAR_0 / 1000);
 }

 return 0;
}
