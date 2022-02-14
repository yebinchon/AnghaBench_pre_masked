
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct dvb_diseqc_master_cmd {int msg; int msg_len; } ;
struct budget {int dummy; } ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int FUNC_0 (struct budget*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, struct dvb_diseqc_master_cmd* VAR_1)
{
 struct budget* VAR_2 = (struct budget*) VAR_0->dvb->priv;

 FUNC_0 (VAR_2, VAR_1->msg_len, VAR_1->msg, 0);

 return 0;
}
