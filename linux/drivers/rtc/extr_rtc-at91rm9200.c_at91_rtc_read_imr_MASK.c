
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ use_shadow_imr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(void)
{
 unsigned long VAR_4;
 u32 VAR_5;

 if (VAR_1->use_shadow_imr) {
  FUNC_1(&VAR_2, VAR_4);
  VAR_5 = VAR_3;
  FUNC_2(&VAR_2, VAR_4);
 } else {
  VAR_5 = FUNC_0(VAR_0);
 }

 return VAR_5;
}
