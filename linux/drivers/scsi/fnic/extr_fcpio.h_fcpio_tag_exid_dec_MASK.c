
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int ox_id; int rx_id; } ;
struct TYPE_4__ {TYPE_1__ ex_id; } ;
struct fcpio_tag {TYPE_2__ u; } ;



__attribute__((used)) static inline void
FUNC_0(struct fcpio_tag *VAR_0, u16 *VAR_1, u16 *VAR_2)
{
 *VAR_2 = VAR_0->u.ex_id.rx_id;
 *VAR_1 = VAR_0->u.ex_id.ox_id;
}
