
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gsc_ctx {TYPE_1__* gsc_dev; int state; } ;
struct TYPE_2__ {int slock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(u32 VAR_0, struct gsc_ctx *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->gsc_dev->slock, VAR_2);
 VAR_1->state |= VAR_0;
 FUNC_1(&VAR_1->gsc_dev->slock, VAR_2);
}
