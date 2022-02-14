
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mx3fb_info {int cookie; TYPE_1__* txd; struct mx3fb_data* mx3fb; } ;
struct mx3fb_data {int lock; } ;
struct TYPE_2__ {int chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mx3fb_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mx3fb_info *VAR_1)
{
 struct mx3fb_data *VAR_2 = VAR_1->mx3fb;
 uint32_t VAR_3;
 unsigned long VAR_4;

 if (VAR_1->txd == ((void*)0))
  return;

 FUNC_2(&VAR_2->lock, VAR_4);

 VAR_3 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->lock, VAR_4);

 FUNC_0(VAR_1->txd->chan);
 VAR_1->txd = ((void*)0);
 VAR_1->cookie = -VAR_0;
}
