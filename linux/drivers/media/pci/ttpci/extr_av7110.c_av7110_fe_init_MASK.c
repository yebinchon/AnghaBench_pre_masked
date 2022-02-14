
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct av7110 {int (* fe_init ) (struct dvb_frontend*) ;} ;
struct TYPE_2__ {struct av7110* priv; } ;


 int FUNC_0 (struct av7110*,int ) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0)
{
 struct av7110* VAR_1 = VAR_0->dvb->priv;

 int VAR_2 = FUNC_0(VAR_1, 0);
 if (!VAR_2)
  VAR_2 = VAR_1->fe_init(VAR_0);
 return VAR_2;
}
