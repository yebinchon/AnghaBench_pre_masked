
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ receive; scalar_t__ transmit; } ;
struct team {TYPE_3__* mode; TYPE_1__ ops; int en_port_count; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {scalar_t__ receive; scalar_t__ transmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct team*) ;

__attribute__((used)) static void FUNC_1(struct team *VAR_2)
{





 if (!VAR_2->en_port_count || !FUNC_0(VAR_2) ||
     !VAR_2->mode->ops->transmit)
  VAR_2->ops.transmit = VAR_1;
 else
  VAR_2->ops.transmit = VAR_2->mode->ops->transmit;

 if (!VAR_2->en_port_count || !FUNC_0(VAR_2) ||
     !VAR_2->mode->ops->receive)
  VAR_2->ops.receive = VAR_0;
 else
  VAR_2->ops.receive = VAR_2->mode->ops->receive;
}
