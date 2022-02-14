
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rsv {TYPE_1__* rc; int * owner; } ;
struct TYPE_2__ {int uwb_dev; } ;



__attribute__((used)) static inline bool FUNC_0(struct uwb_rsv *VAR_0)
{
 return VAR_0->owner == &VAR_0->rc->uwb_dev;
}
