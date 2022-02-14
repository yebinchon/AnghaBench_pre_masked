
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mei_cl {TYPE_2__* me_cl; } ;
struct TYPE_3__ {int single_recv_buf; } ;
struct TYPE_4__ {TYPE_1__ props; } ;



__attribute__((used)) static inline bool FUNC_0(const struct mei_cl *VAR_0)
{
 return VAR_0->me_cl->props.single_recv_buf;
}
