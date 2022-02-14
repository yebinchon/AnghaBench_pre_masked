
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_frontend; } ;
struct dvb_frontend {TYPE_1__ ops; } ;
struct cx23885_tsport {int set_frontend; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct cx23885_tsport *VAR_1,
         struct dvb_frontend *VAR_2)
{
 VAR_1->set_frontend = VAR_2->ops.set_frontend;
 VAR_2->ops.set_frontend = VAR_0;
}
