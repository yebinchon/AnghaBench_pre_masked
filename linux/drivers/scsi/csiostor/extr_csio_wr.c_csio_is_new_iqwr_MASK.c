
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int genbit; } ;
struct TYPE_5__ {TYPE_1__ iq; } ;
struct csio_q {TYPE_2__ un; } ;
struct TYPE_6__ {int type_gen; } ;
struct csio_iqwr_footer {TYPE_3__ u; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct csio_q *VAR_1, struct csio_iqwr_footer *VAR_2)
{
 return (VAR_1->un.iq.genbit == (VAR_2->u.type_gen >> VAR_0));
}
