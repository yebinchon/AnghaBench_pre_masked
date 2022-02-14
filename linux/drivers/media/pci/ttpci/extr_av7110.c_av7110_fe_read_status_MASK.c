
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct av7110 {int (* fe_read_status ) (struct dvb_frontend*,int*) ;int fe_status; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_2__ {struct av7110* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct av7110*,int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
     enum fe_status *VAR_2)
{
 struct av7110* VAR_3 = VAR_1->dvb->priv;


 int VAR_4 = VAR_3->fe_read_status(VAR_1, VAR_2);
 if (!VAR_4)
  if (((*VAR_2 ^ VAR_3->fe_status) & VAR_0) && (*VAR_2 & VAR_0))
   VAR_4 = FUNC_0(VAR_3, *VAR_2);
 return VAR_4;
}
