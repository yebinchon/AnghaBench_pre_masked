
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx231xx {int dummy; } ;
struct TYPE_2__ {struct cx231xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct cx231xx *VAR_4 = VAR_2->dvb->priv;

 if (VAR_3)
  return FUNC_0(VAR_4, VAR_0);
 else
  return FUNC_0(VAR_4, VAR_1);
}
