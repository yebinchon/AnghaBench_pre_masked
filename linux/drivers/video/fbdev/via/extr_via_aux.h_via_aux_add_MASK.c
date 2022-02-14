
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_aux_drv {TYPE_1__* bus; int chain; } ;
struct TYPE_2__ {int drivers; } ;


 int VAR_0 ;
 struct via_aux_drv* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct via_aux_drv *VAR_1)
{
 struct via_aux_drv *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (!VAR_2)
  return 0;

 *VAR_2 = *VAR_1;
 FUNC_1(&VAR_2->chain, &VAR_2->bus->drivers);
 return 1;
}
